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

// Function: sub_0023E608
// Address: 0x23e608 - 0x23e748
void sub_0023E608_0x23e608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E608_0x23e608");
#endif

    switch (ctx->pc) {
        case 0x23e634u: goto label_23e634;
        case 0x23e648u: goto label_23e648;
        case 0x23e678u: goto label_23e678;
        case 0x23e6b8u: goto label_23e6b8;
        case 0x23e6c4u: goto label_23e6c4;
        case 0x23e708u: goto label_23e708;
        case 0x23e710u: goto label_23e710;
        default: break;
    }

    ctx->pc = 0x23e608u;

    // 0x23e608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23e608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23e60c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23e60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23e610: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23e610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23e614: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x23e614u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23e618: 0x8c860334  lw          $a2, 0x334($a0)
    ctx->pc = 0x23e618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x23e61c: 0x8cc201e4  lw          $v0, 0x1E4($a2)
    ctx->pc = 0x23e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
    // 0x23e620: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23E620u;
    {
        const bool branch_taken_0x23e620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E620u;
        // 0x23e624: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e620) {
            ctx->pc = 0x23E63Cu;
            goto label_23e63c;
        }
    }
    ctx->pc = 0x23E628u;
    // 0x23e628: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23e628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e62c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x23E62Cu;
    {
        const bool branch_taken_0x23e62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E62Cu;
        // 0x23e630: 0x8e070334  lw          $a3, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e62c) {
            ctx->pc = 0x23E664u;
            goto label_23e664;
        }
    }
    ctx->pc = 0x23E634u;
label_23e634:
    // 0x23e634: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23E634u;
    {
        const bool branch_taken_0x23e634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E634u;
        // 0x23e638: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e634) {
            ctx->pc = 0x23E664u;
            goto label_23e664;
        }
    }
    ctx->pc = 0x23E63Cu;
label_23e63c:
    // 0x23e63c: 0x8e070334  lw          $a3, 0x334($s0)
    ctx->pc = 0x23e63cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23e640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e644: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x23e644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_23e648:
    // 0x23e648: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23e648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e64c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x23E64Cu;
    {
        const bool branch_taken_0x23e64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E64Cu;
        // 0x23e650: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e64c) {
            ctx->pc = 0x23E634u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e634;
        }
    }
    ctx->pc = 0x23E654u;
    // 0x23e654: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x23e654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23e658: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23E658u;
    {
        const bool branch_taken_0x23e658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E658u;
        // 0x23e65c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e658) {
            ctx->pc = 0x23E648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e648;
        }
    }
    ctx->pc = 0x23E660u;
    // 0x23e660: 0x8cc601e8  lw          $a2, 0x1E8($a2)
    ctx->pc = 0x23e660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_23e664:
    // 0x23e664: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x23e664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x23e668: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x23E668u;
    {
        const bool branch_taken_0x23e668 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e668) {
            ctx->pc = 0x23E698u;
            goto label_23e698;
        }
    }
    ctx->pc = 0x23E670u;
    // 0x23e670: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e674: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x23e674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
label_23e678:
    // 0x23e678: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23e678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e67c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23E67Cu;
    {
        const bool branch_taken_0x23e67c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e67c) {
            ctx->pc = 0x23E698u;
            goto label_23e698;
        }
    }
    ctx->pc = 0x23E684u;
    // 0x23e684: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23e684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x23e688: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x23e688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23e68c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23E68Cu;
    {
        const bool branch_taken_0x23e68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E68Cu;
        // 0x23e690: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e68c) {
            ctx->pc = 0x23E678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e678;
        }
    }
    ctx->pc = 0x23E694u;
    // 0x23e694: 0x8ce401e8  lw          $a0, 0x1E8($a3)
    ctx->pc = 0x23e694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_23e698:
    // 0x23e698: 0x50c0001e  beql        $a2, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x23E698u;
    {
        const bool branch_taken_0x23e698 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e698) {
            ctx->pc = 0x23E69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E698u;
            // 0x23e69c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E714u;
            goto label_23e714;
        }
    }
    ctx->pc = 0x23E6A0u;
    // 0x23e6a0: 0x5080001c  beql        $a0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x23E6A0u;
    {
        const bool branch_taken_0x23e6a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e6a0) {
            ctx->pc = 0x23E6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E6A0u;
            // 0x23e6a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E714u;
            goto label_23e714;
        }
    }
    ctx->pc = 0x23E6A8u;
    // 0x23e6a8: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x23e6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23e6ac: 0x460c0500  add.s       $f20, $f0, $f12
    ctx->pc = 0x23e6acu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x23e6b0: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x23E6B0u;
    SET_GPR_U32(ctx, 31, 0x23E6B8u);
    ctx->pc = 0x23E6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E6B0u;
    // 0x23e6b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x23E6B0u, 0x23E6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E6B8u;
label_23e6b8:
    // 0x23e6b8: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x23e6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x23e6bc: 0xc0757d2  jal         func_1D5F48
    ctx->pc = 0x23E6BCu;
    SET_GPR_U32(ctx, 31, 0x23E6C4u);
    ctx->pc = 0x23E6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E6BCu;
    // 0x23e6c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x23E6BCu, 0x23E6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E6C4u;
label_23e6c4:
    // 0x23e6c4: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x23e6c8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23e6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23e6cc: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x23e6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x23e6d0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x23E6D0u;
    {
        const bool branch_taken_0x23e6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e6d0) {
            ctx->pc = 0x23E6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E6D0u;
            // 0x23e6d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E714u;
            goto label_23e714;
        }
    }
    ctx->pc = 0x23E6D8u;
    // 0x23e6d8: 0x8e041100  lw          $a0, 0x1100($s0)
    ctx->pc = 0x23e6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4352)));
    // 0x23e6dc: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x23E6DCu;
    {
        const bool branch_taken_0x23e6dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E6DCu;
        // 0x23e6e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e6dc) {
            ctx->pc = 0x23E714u;
            goto label_23e714;
        }
    }
    ctx->pc = 0x23E6E4u;
    // 0x23e6e4: 0x8c9002c8  lw          $s0, 0x2C8($a0)
    ctx->pc = 0x23e6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 712)));
    // 0x23e6e8: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x23E6E8u;
    {
        const bool branch_taken_0x23e6e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e6e8) {
            ctx->pc = 0x23E6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E6E8u;
            // 0x23e6ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E714u;
            goto label_23e714;
        }
    }
    ctx->pc = 0x23E6F0u;
    // 0x23e6f0: 0x8e040194  lw          $a0, 0x194($s0)
    ctx->pc = 0x23e6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x23e6f4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23E6F4u;
    {
        const bool branch_taken_0x23e6f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E6F4u;
        // 0x23e6f8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e6f4) {
            ctx->pc = 0x23E710u;
            goto label_23e710;
        }
    }
    ctx->pc = 0x23E6FCu;
    // 0x23e6fc: 0xc44c2b30  lwc1        $f12, 0x2B30($v0)
    ctx->pc = 0x23e6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23e700: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x23E700u;
    SET_GPR_U32(ctx, 31, 0x23E708u);
    ctx->pc = 0x23E704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E700u;
    // 0x23e704: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x23E700u, 0x23E708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E708u;
label_23e708:
    // 0x23e708: 0xc083faa  jal         func_20FEA8
    ctx->pc = 0x23E708u;
    SET_GPR_U32(ctx, 31, 0x23E710u);
    ctx->pc = 0x23E70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E708u;
    // 0x23e70c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FEA8u, 0x23E708u, 0x23E710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E710u;
label_23e710:
    // 0x23e710: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23e710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23e714:
    // 0x23e714: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23e714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23e718: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x23e718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23e71c: 0x3e00008  jr          $ra
    ctx->pc = 0x23E71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E71Cu;
        // 0x23e720: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E724u;
    // 0x23e724: 0x0  nop
    ctx->pc = 0x23e724u;
    // NOP
    // 0x23e728: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x23e728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x23e72c: 0x0  nop
    ctx->pc = 0x23e72cu;
    // NOP
    // 0x23e730: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x23e730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x23e734: 0x0  nop
    ctx->pc = 0x23e734u;
    // NOP
    // 0x23e738: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x23e738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x23e73c: 0x0  nop
    ctx->pc = 0x23e73cu;
    // NOP
    // 0x23e740: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x23e740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x23e744: 0x0  nop
    ctx->pc = 0x23e744u;
    // NOP
    ctx->pc = 0x23e748u;
}
