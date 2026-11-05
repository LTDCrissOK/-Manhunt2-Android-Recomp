#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00112320
// Address: 0x112320 - 0x112430
void sub_00112320_0x112320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112320_0x112320");
#endif

    switch (ctx->pc) {
        case 0x1123a4u: goto label_1123a4;
        case 0x1123ecu: goto label_1123ec;
        case 0x1123f8u: goto label_1123f8;
        default: break;
    }

    ctx->pc = 0x112320u;

    // 0x112320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x112320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x112324: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x112324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x112328: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11232c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11232cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112330: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x112330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x112334: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x112334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x112338: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x112338u;
    {
        const bool branch_taken_0x112338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112338u;
        // 0x11233c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112338) {
            ctx->pc = 0x112358u;
            goto label_112358;
        }
    }
    ctx->pc = 0x112340u;
    // 0x112340: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x112340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x112344: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x112344u;
    {
        const bool branch_taken_0x112344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112344) {
            ctx->pc = 0x112348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112344u;
            // 0x112348: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11235Cu;
            goto label_11235c;
        }
    }
    ctx->pc = 0x11234Cu;
    // 0x11234c: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x11234cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x112350: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x112350u;
    {
        const bool branch_taken_0x112350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112350) {
            ctx->pc = 0x11235Cu;
            goto label_11235c;
        }
    }
    ctx->pc = 0x112358u;
label_112358:
    // 0x112358: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x112358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11235c:
    // 0x11235c: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x11235Cu;
    {
        const bool branch_taken_0x11235c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x112360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11235Cu;
        // 0x112360: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11235c) {
            ctx->pc = 0x112418u;
            goto label_112418;
        }
    }
    ctx->pc = 0x112364u;
    // 0x112364: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x112364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x112368: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x112368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x11236c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11236cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112370: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112374: 0x8c500108  lw          $s0, 0x108($v0)
    ctx->pc = 0x112374u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x112378: 0x52000028  beql        $s0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x112378u;
    {
        const bool branch_taken_0x112378 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x112378) {
            ctx->pc = 0x11237Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112378u;
            // 0x11237c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11241Cu;
            goto label_11241c;
        }
    }
    ctx->pc = 0x112380u;
    // 0x112380: 0xde021020  ld          $v0, 0x1020($s0)
    ctx->pc = 0x112380u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x112384: 0x21738  dsll        $v0, $v0, 28
    ctx->pc = 0x112384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 28);
    // 0x112388: 0x217ff  dsra32      $v0, $v0, 31
    ctx->pc = 0x112388u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 31));
    // 0x11238c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11238cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x112390: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x112390u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x112394: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x112394u;
    {
        const bool branch_taken_0x112394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112394) {
            ctx->pc = 0x112398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112394u;
            // 0x112398: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11241Cu;
            goto label_11241c;
        }
    }
    ctx->pc = 0x11239Cu;
    // 0x11239c: 0xc044f48  jal         func_113D20
    ctx->pc = 0x11239Cu;
    SET_GPR_U32(ctx, 31, 0x1123A4u);
    ctx->pc = 0x1123A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11239Cu;
    // 0x1123a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113D20u, 0x11239Cu, 0x1123A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1123A4u;
label_1123a4:
    // 0x1123a4: 0x8e03041c  lw          $v1, 0x41C($s0)
    ctx->pc = 0x1123a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
    // 0x1123a8: 0xae00041c  sw          $zero, 0x41C($s0)
    ctx->pc = 0x1123a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 0));
    // 0x1123ac: 0xae030420  sw          $v1, 0x420($s0)
    ctx->pc = 0x1123acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 3));
    // 0x1123b0: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x1123b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1123b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1123B4u;
    {
        const bool branch_taken_0x1123b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1123B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123B4u;
        // 0x1123b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123b4) {
            ctx->pc = 0x1123CCu;
            goto label_1123cc;
        }
    }
    ctx->pc = 0x1123BCu;
    // 0x1123bc: 0x8e030ff8  lw          $v1, 0xFF8($s0)
    ctx->pc = 0x1123bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
    // 0x1123c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1123c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1123c4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1123c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1123c8: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x1123c8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1123cc:
    // 0x1123cc: 0x8e240114  lw          $a0, 0x114($s1)
    ctx->pc = 0x1123ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x1123d0: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1123D0u;
    {
        const bool branch_taken_0x1123d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1123D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123D0u;
        // 0x1123d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123d0) {
            ctx->pc = 0x1123DCu;
            goto label_1123dc;
        }
    }
    ctx->pc = 0x1123D8u;
    // 0x1123d8: 0x2c820001  sltiu       $v0, $a0, 0x1
    ctx->pc = 0x1123d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1123dc:
    // 0x1123dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1123DCu;
    {
        const bool branch_taken_0x1123dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1123E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123DCu;
        // 0x1123e0: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123dc) {
            ctx->pc = 0x1123F0u;
            goto label_1123f0;
        }
    }
    ctx->pc = 0x1123E4u;
    // 0x1123e4: 0xc06974a  jal         func_1A5D28
    ctx->pc = 0x1123E4u;
    SET_GPR_U32(ctx, 31, 0x1123ECu);
    ctx->pc = 0x1123E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1123E4u;
    // 0x1123e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x1123E4u, 0x1123ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1123ECu;
label_1123ec:
    // 0x1123ec: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x1123ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_1123f0:
    // 0x1123f0: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x1123F0u;
    SET_GPR_U32(ctx, 31, 0x1123F8u);
    ctx->pc = 0x1123F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1123F0u;
    // 0x1123f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x1123F0u, 0x1123F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1123F8u;
label_1123f8:
    // 0x1123f8: 0xde031020  ld          $v1, 0x1020($s0)
    ctx->pc = 0x1123f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x1123fc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1123fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x112400: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x112400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x112404: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x112404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x112408: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x112408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x11240c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11240cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x112410: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x112410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x112414: 0xfe031020  sd          $v1, 0x1020($s0)
    ctx->pc = 0x112414u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 3));
label_112418:
    // 0x112418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11241c:
    // 0x11241c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11241cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x112420: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x112420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112424: 0x3e00008  jr          $ra
    ctx->pc = 0x112424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112424u;
        // 0x112428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11242Cu;
    // 0x11242c: 0x0  nop
    ctx->pc = 0x11242cu;
    // NOP
    ctx->pc = 0x112430u;
}
