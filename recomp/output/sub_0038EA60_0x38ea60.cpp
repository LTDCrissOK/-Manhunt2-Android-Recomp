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

// Function: sub_0038EA60
// Address: 0x38ea60 - 0x38ec48
void sub_0038EA60_0x38ea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038EA60_0x38ea60");
#endif

    switch (ctx->pc) {
        case 0x38ea78u: goto label_38ea78;
        case 0x38ea88u: goto label_38ea88;
        case 0x38ea98u: goto label_38ea98;
        case 0x38eaa8u: goto label_38eaa8;
        case 0x38eab8u: goto label_38eab8;
        case 0x38eae8u: goto label_38eae8;
        case 0x38eb08u: goto label_38eb08;
        case 0x38eb18u: goto label_38eb18;
        case 0x38eb28u: goto label_38eb28;
        case 0x38eb38u: goto label_38eb38;
        case 0x38eb68u: goto label_38eb68;
        case 0x38eb98u: goto label_38eb98;
        case 0x38ebc8u: goto label_38ebc8;
        case 0x38ebd8u: goto label_38ebd8;
        case 0x38ebe4u: goto label_38ebe4;
        case 0x38ebf4u: goto label_38ebf4;
        case 0x38ec04u: goto label_38ec04;
        case 0x38ec10u: goto label_38ec10;
        case 0x38ec1cu: goto label_38ec1c;
        case 0x38ec28u: goto label_38ec28;
        case 0x38ec34u: goto label_38ec34;
        default: break;
    }

    ctx->pc = 0x38ea60u;

    // 0x38ea60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38ea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38ea64: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x38ea64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38ea68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38ea68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38ea6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38ea6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38ea70: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38EA70u;
    SET_GPR_U32(ctx, 31, 0x38EA78u);
    ctx->pc = 0x38EA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EA70u;
    // 0x38ea74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38EA70u, 0x38EA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EA78u;
label_38ea78:
    // 0x38ea78: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x38ea78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x38ea7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ea7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ea80: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38EA80u;
    SET_GPR_U32(ctx, 31, 0x38EA88u);
    ctx->pc = 0x38EA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EA80u;
    // 0x38ea84: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38EA80u, 0x38EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EA88u;
label_38ea88:
    // 0x38ea88: 0xae020178  sw          $v0, 0x178($s0)
    ctx->pc = 0x38ea88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 2));
    // 0x38ea8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ea8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ea90: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38EA90u;
    SET_GPR_U32(ctx, 31, 0x38EA98u);
    ctx->pc = 0x38EA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EA90u;
    // 0x38ea94: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38EA90u, 0x38EA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EA98u;
label_38ea98:
    // 0x38ea98: 0xae02017c  sw          $v0, 0x17C($s0)
    ctx->pc = 0x38ea98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
    // 0x38ea9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ea9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eaa0: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38EAA0u;
    SET_GPR_U32(ctx, 31, 0x38EAA8u);
    ctx->pc = 0x38EAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EAA0u;
    // 0x38eaa4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38EAA0u, 0x38EAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EAA8u;
label_38eaa8:
    // 0x38eaa8: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x38eaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x38eaac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38eaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eab0: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38EAB0u;
    SET_GPR_U32(ctx, 31, 0x38EAB8u);
    ctx->pc = 0x38EAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EAB0u;
    // 0x38eab4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38EAB0u, 0x38EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EAB8u;
label_38eab8:
    // 0x38eab8: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x38eab8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x38eabc: 0x3c06fffc  lui         $a2, 0xFFFC
    ctx->pc = 0x38eabcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65532 << 16));
    // 0x38eac0: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x38eac0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x38eac4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x38eac4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x38eac8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x38eac8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x38eacc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x38eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x38ead0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ead0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ead4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x38ead4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38ead8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x38ead8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x38eadc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38eadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x38eae0: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38EAE0u;
    SET_GPR_U32(ctx, 31, 0x38EAE8u);
    ctx->pc = 0x38EAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EAE0u;
    // 0x38eae4: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38EAE0u, 0x38EAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EAE8u;
label_38eae8:
    // 0x38eae8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38eae8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eaec: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x38eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x38eaf0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x38EAF0u;
    {
        const bool branch_taken_0x38eaf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EAF0u;
        // 0x38eaf4: 0xae030184  sw          $v1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eaf0) {
            ctx->pc = 0x38EAFCu;
            goto label_38eafc;
        }
    }
    ctx->pc = 0x38EAF8u;
    // 0x38eaf8: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x38eaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
label_38eafc:
    // 0x38eafc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38eafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eb00: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38EB00u;
    SET_GPR_U32(ctx, 31, 0x38EB08u);
    ctx->pc = 0x38EB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EB00u;
    // 0x38eb04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38EB00u, 0x38EB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EB08u;
label_38eb08:
    // 0x38eb08: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x38eb08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x38eb0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38eb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eb10: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38EB10u;
    SET_GPR_U32(ctx, 31, 0x38EB18u);
    ctx->pc = 0x38EB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EB10u;
    // 0x38eb14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38EB10u, 0x38EB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EB18u;
label_38eb18:
    // 0x38eb18: 0xae02018c  sw          $v0, 0x18C($s0)
    ctx->pc = 0x38eb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 2));
    // 0x38eb1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38eb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eb20: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38EB20u;
    SET_GPR_U32(ctx, 31, 0x38EB28u);
    ctx->pc = 0x38EB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EB20u;
    // 0x38eb24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38EB20u, 0x38EB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EB28u;
label_38eb28:
    // 0x38eb28: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x38eb28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x38eb2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38eb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eb30: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38EB30u;
    SET_GPR_U32(ctx, 31, 0x38EB38u);
    ctx->pc = 0x38EB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EB30u;
    // 0x38eb34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38EB30u, 0x38EB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EB38u;
label_38eb38:
    // 0x38eb38: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x38eb38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x38eb3c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x38eb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x38eb40: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x38eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x38eb44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x38eb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x38eb48: 0x21580  sll         $v0, $v0, 22
    ctx->pc = 0x38eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 22));
    // 0x38eb4c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x38eb4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x38eb50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38eb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eb54: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x38eb54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x38eb58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38eb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38eb5c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x38eb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x38eb60: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38EB60u;
    SET_GPR_U32(ctx, 31, 0x38EB68u);
    ctx->pc = 0x38EB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EB60u;
    // 0x38eb64: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38EB60u, 0x38EB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EB68u;
label_38eb68:
    // 0x38eb68: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x38eb68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x38eb6c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x38eb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x38eb70: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x38eb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x38eb74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x38eb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x38eb78: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x38eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
    // 0x38eb7c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x38eb7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x38eb80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38eb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eb84: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x38eb84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x38eb88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38eb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38eb8c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x38eb8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x38eb90: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38EB90u;
    SET_GPR_U32(ctx, 31, 0x38EB98u);
    ctx->pc = 0x38EB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EB90u;
    // 0x38eb94: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38EB90u, 0x38EB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EB98u;
label_38eb98:
    // 0x38eb98: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x38eb98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x38eb9c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x38eb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x38eba0: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x38eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x38eba4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x38eba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x38eba8: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x38eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x38ebac: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x38ebacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x38ebb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ebb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ebb4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x38ebb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x38ebb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38ebb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38ebbc: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x38ebbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x38ebc0: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38EBC0u;
    SET_GPR_U32(ctx, 31, 0x38EBC8u);
    ctx->pc = 0x38EBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EBC0u;
    // 0x38ebc4: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38EBC0u, 0x38EBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EBC8u;
label_38ebc8:
    // 0x38ebc8: 0xae020194  sw          $v0, 0x194($s0)
    ctx->pc = 0x38ebc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
    // 0x38ebcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ebccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ebd0: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38EBD0u;
    SET_GPR_U32(ctx, 31, 0x38EBD8u);
    ctx->pc = 0x38EBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EBD0u;
    // 0x38ebd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38EBD0u, 0x38EBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EBD8u;
label_38ebd8:
    // 0x38ebd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ebd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ebdc: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38EBDCu;
    SET_GPR_U32(ctx, 31, 0x38EBE4u);
    ctx->pc = 0x38EBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EBDCu;
    // 0x38ebe0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38EBDCu, 0x38EBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EBE4u;
label_38ebe4:
    // 0x38ebe4: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x38ebe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
    // 0x38ebe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ebe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ebec: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38EBECu;
    SET_GPR_U32(ctx, 31, 0x38EBF4u);
    ctx->pc = 0x38EBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EBECu;
    // 0x38ebf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38EBECu, 0x38EBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EBF4u;
label_38ebf4:
    // 0x38ebf4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x38EBF4u;
    {
        const bool branch_taken_0x38ebf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EBF4u;
        // 0x38ebf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ebf4) {
            ctx->pc = 0x38EC34u;
            goto label_38ec34;
        }
    }
    ctx->pc = 0x38EBFCu;
    // 0x38ebfc: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38EBFCu;
    SET_GPR_U32(ctx, 31, 0x38EC04u);
    ctx->pc = 0x38EC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EBFCu;
    // 0x38ec00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38EBFCu, 0x38EC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EC04u;
label_38ec04:
    // 0x38ec04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ec04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ec08: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38EC08u;
    SET_GPR_U32(ctx, 31, 0x38EC10u);
    ctx->pc = 0x38EC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EC08u;
    // 0x38ec0c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38EC08u, 0x38EC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EC10u;
label_38ec10:
    // 0x38ec10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ec10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ec14: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38EC14u;
    SET_GPR_U32(ctx, 31, 0x38EC1Cu);
    ctx->pc = 0x38EC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EC14u;
    // 0x38ec18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38EC14u, 0x38EC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EC1Cu;
label_38ec1c:
    // 0x38ec1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ec1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ec20: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38EC20u;
    SET_GPR_U32(ctx, 31, 0x38EC28u);
    ctx->pc = 0x38EC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EC20u;
    // 0x38ec24: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38EC20u, 0x38EC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EC28u;
label_38ec28:
    // 0x38ec28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ec28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ec2c: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38EC2Cu;
    SET_GPR_U32(ctx, 31, 0x38EC34u);
    ctx->pc = 0x38EC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EC2Cu;
    // 0x38ec30: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38EC2Cu, 0x38EC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EC34u;
label_38ec34:
    // 0x38ec34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38ec34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38ec38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38ec38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ec3c: 0x3e00008  jr          $ra
    ctx->pc = 0x38EC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EC3Cu;
        // 0x38ec40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EC44u;
    // 0x38ec44: 0x0  nop
    ctx->pc = 0x38ec44u;
    // NOP
    ctx->pc = 0x38ec48u;
}
