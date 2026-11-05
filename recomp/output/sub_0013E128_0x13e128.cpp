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

// Function: sub_0013E128
// Address: 0x13e128 - 0x13e1c8
void sub_0013E128_0x13e128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E128_0x13e128");
#endif

    switch (ctx->pc) {
        case 0x13e140u: goto label_13e140;
        case 0x13e150u: goto label_13e150;
        case 0x13e198u: goto label_13e198;
        default: break;
    }

    ctx->pc = 0x13e128u;

    // 0x13e128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13e128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13e12c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13e12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13e130: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13e130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13e134: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13e134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e138: 0xc05a61c  jal         func_169870
    ctx->pc = 0x13E138u;
    SET_GPR_U32(ctx, 31, 0x13E140u);
    ctx->pc = 0x13E13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E138u;
    // 0x13e13c: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169870u, 0x13E138u, 0x13E140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E140u;
label_13e140:
    // 0x13e140: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x13E140u;
    {
        const bool branch_taken_0x13e140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e140) {
            ctx->pc = 0x13E144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E140u;
            // 0x13e144: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E1B8u;
            goto label_13e1b8;
        }
    }
    ctx->pc = 0x13E148u;
    // 0x13e148: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x13E148u;
    SET_GPR_U32(ctx, 31, 0x13E150u);
    ctx->pc = 0x13E14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E148u;
    // 0x13e14c: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x13E148u, 0x13E150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E150u;
label_13e150:
    // 0x13e150: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x13E150u;
    {
        const bool branch_taken_0x13e150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E150u;
        // 0x13e154: 0x3c050049  lui         $a1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e150) {
            ctx->pc = 0x13E190u;
            goto label_13e190;
        }
    }
    ctx->pc = 0x13E158u;
    // 0x13e158: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13e158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13e15c: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x13e15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x13e160: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x13e160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13e164: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x13e164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x13e168: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x13e168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13e16c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13e170: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x13e170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13e174: 0x8ca20108  lw          $v0, 0x108($a1)
    ctx->pc = 0x13e174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x13e178: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x13E178u;
    {
        const bool branch_taken_0x13e178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e178) {
            ctx->pc = 0x13E17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E178u;
            // 0x13e17c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E1B4u;
            goto label_13e1b4;
        }
    }
    ctx->pc = 0x13E180u;
    // 0x13e180: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x13e180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x13e184: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13e184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e188: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13E188u;
    {
        const bool branch_taken_0x13e188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E188u;
        // 0x13e18c: 0x24620070  addiu       $v0, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e188) {
            ctx->pc = 0x13E1B4u;
            goto label_13e1b4;
        }
    }
    ctx->pc = 0x13E190u;
label_13e190:
    // 0x13e190: 0xc05a62e  jal         func_1698B8
    ctx->pc = 0x13E190u;
    SET_GPR_U32(ctx, 31, 0x13E198u);
    ctx->pc = 0x13E194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E190u;
    // 0x13e194: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698B8u, 0x13E190u, 0x13E198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E198u;
label_13e198:
    // 0x13e198: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E198u;
    {
        const bool branch_taken_0x13e198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e198) {
            ctx->pc = 0x13E19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E198u;
            // 0x13e19c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E1B4u;
            goto label_13e1b4;
        }
    }
    ctx->pc = 0x13E1A0u;
    // 0x13e1a0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13e1a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13E1A4u;
    {
        const bool branch_taken_0x13e1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E1A4u;
        // 0x13e1a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e1a4) {
            ctx->pc = 0x13E1B0u;
            goto label_13e1b0;
        }
    }
    ctx->pc = 0x13E1ACu;
    // 0x13e1ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13e1b0:
    // 0x13e1b0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13e1b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_13e1b4:
    // 0x13e1b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13e1b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e1b8:
    // 0x13e1b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13e1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13e1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x13E1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E1BCu;
        // 0x13e1c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E1C4u;
    // 0x13e1c4: 0x0  nop
    ctx->pc = 0x13e1c4u;
    // NOP
    ctx->pc = 0x13e1c8u;
}
