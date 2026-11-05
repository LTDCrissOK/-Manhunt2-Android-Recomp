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

// Function: sub_001FA350
// Address: 0x1fa350 - 0x1fa440
void sub_001FA350_0x1fa350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA350_0x1fa350");
#endif

    switch (ctx->pc) {
        case 0x1fa398u: goto label_1fa398;
        case 0x1fa3d4u: goto label_1fa3d4;
        case 0x1fa3f8u: goto label_1fa3f8;
        case 0x1fa404u: goto label_1fa404;
        default: break;
    }

    ctx->pc = 0x1fa350u;

    // 0x1fa350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fa350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fa354: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fa354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fa358: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fa358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fa35c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fa35cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa360: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fa360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fa364: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fa364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fa368: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fa368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fa36c: 0x92230500  lbu         $v1, 0x500($s1)
    ctx->pc = 0x1fa36cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1280)));
    // 0x1fa370: 0x92220501  lbu         $v0, 0x501($s1)
    ctx->pc = 0x1fa370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1281)));
    // 0x1fa374: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fa374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fa378: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1fa378u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fa37c: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x1FA37Cu;
    {
        const bool branch_taken_0x1fa37c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA37Cu;
        // 0x1fa380: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa37c) {
            ctx->pc = 0x1FA424u;
            goto label_1fa424;
        }
    }
    ctx->pc = 0x1FA384u;
    // 0x1fa384: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FA384u;
    {
        const bool branch_taken_0x1fa384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA384u;
        // 0x1fa388: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa384) {
            ctx->pc = 0x1FA3ECu;
            goto label_1fa3ec;
        }
    }
    ctx->pc = 0x1FA38Cu;
    // 0x1fa38c: 0x3c130049  lui         $s3, 0x49
    ctx->pc = 0x1fa38cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)73 << 16));
    // 0x1fa390: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x1fa390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1fa394: 0x0  nop
    ctx->pc = 0x1fa394u;
    // NOP
label_1fa398:
    // 0x1fa398: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fa398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa39c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fa39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fa3a0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1fa3a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa3a4: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x1fa3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1fa3a8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA3A8u;
    {
        const bool branch_taken_0x1fa3a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3A8u;
        // 0x1fa3ac: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa3a8) {
            ctx->pc = 0x1FA3C0u;
            goto label_1fa3c0;
        }
    }
    ctx->pc = 0x1FA3B0u;
    // 0x1fa3b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA3B0u;
    {
        const bool branch_taken_0x1fa3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3B0u;
        // 0x1fa3b4: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa3b0) {
            ctx->pc = 0x1FA3C0u;
            goto label_1fa3c0;
        }
    }
    ctx->pc = 0x1FA3B8u;
    // 0x1fa3b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA3B8u;
    {
        const bool branch_taken_0x1fa3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3B8u;
        // 0x1fa3bc: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa3b8) {
            ctx->pc = 0x1FA3D8u;
            goto label_1fa3d8;
        }
    }
    ctx->pc = 0x1FA3C0u;
label_1fa3c0:
    // 0x1fa3c0: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x1fa3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1fa3c4: 0x26640480  addiu       $a0, $s3, 0x480
    ctx->pc = 0x1fa3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1152));
    // 0x1fa3c8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1fa3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fa3cc: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1FA3CCu;
    SET_GPR_U32(ctx, 31, 0x1FA3D4u);
    ctx->pc = 0x1FA3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA3CCu;
    // 0x1fa3d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1FA3CCu, 0x1FA3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA3D4u;
label_1fa3d4:
    // 0x1fa3d4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1fa3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fa3d8:
    // 0x1fa3d8: 0x92220500  lbu         $v0, 0x500($s1)
    ctx->pc = 0x1fa3d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1280)));
    // 0x1fa3dc: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1fa3dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fa3e0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1fa3e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fa3e4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FA3E4u;
    {
        const bool branch_taken_0x1fa3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3E4u;
        // 0x1fa3e8: 0x101180  sll         $v0, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa3e4) {
            ctx->pc = 0x1FA398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa398;
        }
    }
    ctx->pc = 0x1FA3ECu;
label_1fa3ec:
    // 0x1fa3ec: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x1fa3ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1fa3f0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1FA3F0u;
    {
        const bool branch_taken_0x1fa3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa3f0) {
            ctx->pc = 0x1FA3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA3F0u;
            // 0x1fa3f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA424u;
            goto label_1fa424;
        }
    }
    ctx->pc = 0x1FA3F8u;
label_1fa3f8:
    // 0x1fa3f8: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1fa3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1fa3fc: 0xc07e8ac  jal         func_1FA2B0
    ctx->pc = 0x1FA3FCu;
    SET_GPR_U32(ctx, 31, 0x1FA404u);
    ctx->pc = 0x1FA400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA3FCu;
    // 0x1fa400: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA2B0u, 0x1FA3FCu, 0x1FA404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA404u;
label_1fa404:
    // 0x1fa404: 0x92230501  lbu         $v1, 0x501($s1)
    ctx->pc = 0x1fa404u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1281)));
    // 0x1fa408: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1fa408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fa40c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1fa40cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fa410: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fa410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fa414: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x1fa414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1fa418: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FA418u;
    {
        const bool branch_taken_0x1fa418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA418u;
        // 0x1fa41c: 0xa2230501  sb          $v1, 0x501($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1281), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa418) {
            ctx->pc = 0x1FA3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa3f8;
        }
    }
    ctx->pc = 0x1FA420u;
    // 0x1fa420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fa424:
    // 0x1fa424: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa428: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fa428u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa42c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fa42cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fa430: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fa430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa434: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA434u;
        // 0x1fa438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA43Cu;
    // 0x1fa43c: 0x0  nop
    ctx->pc = 0x1fa43cu;
    // NOP
    ctx->pc = 0x1fa440u;
}
