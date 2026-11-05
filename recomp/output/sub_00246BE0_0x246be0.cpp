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

// Function: sub_00246BE0
// Address: 0x246be0 - 0x246c80
void sub_00246BE0_0x246be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246BE0_0x246be0");
#endif

    switch (ctx->pc) {
        case 0x246c3cu: goto label_246c3c;
        case 0x246c54u: goto label_246c54;
        case 0x246c64u: goto label_246c64;
        case 0x246c6cu: goto label_246c6c;
        default: break;
    }

    ctx->pc = 0x246be0u;

    // 0x246be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x246be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x246be4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x246be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x246be8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x246be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x246bec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x246becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246bf0: 0x92020370  lbu         $v0, 0x370($s0)
    ctx->pc = 0x246bf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x246bf4: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x246bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x246bf8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x246BF8u;
    {
        const bool branch_taken_0x246bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246bf8) {
            ctx->pc = 0x246BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246BF8u;
            // 0x246bfc: 0x8e020370  lw          $v0, 0x370($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246C40u;
            goto label_246c40;
        }
    }
    ctx->pc = 0x246C00u;
    // 0x246c00: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x246c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x246c04: 0x8c850088  lw          $a1, 0x88($a0)
    ctx->pc = 0x246c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x246c08: 0x24a2ffee  addiu       $v0, $a1, -0x12
    ctx->pc = 0x246c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967278));
    // 0x246c0c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x246c0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x246c10: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x246C10u;
    {
        const bool branch_taken_0x246c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C10u;
        // 0x246c14: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c10) {
            ctx->pc = 0x246C2Cu;
            goto label_246c2c;
        }
    }
    ctx->pc = 0x246C18u;
    // 0x246c18: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x246c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x246c1c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x246c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x246c20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x246c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246c24: 0x2863015a  slti        $v1, $v1, 0x15A
    ctx->pc = 0x246c24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)346) ? 1 : 0);
    // 0x246c28: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x246c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_246c2c:
    // 0x246c2c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x246C2Cu;
    {
        const bool branch_taken_0x246c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246c2c) {
            ctx->pc = 0x246C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246C2Cu;
            // 0x246c30: 0x8e020370  lw          $v0, 0x370($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246C40u;
            goto label_246c40;
        }
    }
    ctx->pc = 0x246C34u;
    // 0x246c34: 0xc06be68  jal         func_1AF9A0
    ctx->pc = 0x246C34u;
    SET_GPR_U32(ctx, 31, 0x246C3Cu);
    ctx->pc = 0x1AF9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF9A0u, 0x246C34u, 0x246C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C3Cu;
label_246c3c:
    // 0x246c3c: 0x8e020370  lw          $v0, 0x370($s0)
    ctx->pc = 0x246c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
label_246c40:
    // 0x246c40: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x246c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x246c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246c48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x246c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x246c4c: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x246C4Cu;
    SET_GPR_U32(ctx, 31, 0x246C54u);
    ctx->pc = 0x246C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246C4Cu;
    // 0x246c50: 0xae020370  sw          $v0, 0x370($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x246C4Cu, 0x246C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C54u;
label_246c54:
    // 0x246c54: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x246C54u;
    {
        const bool branch_taken_0x246c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246c54) {
            ctx->pc = 0x246C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246C54u;
            // 0x246c58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246C70u;
            goto label_246c70;
        }
    }
    ctx->pc = 0x246C5Cu;
    // 0x246c5c: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x246C5Cu;
    SET_GPR_U32(ctx, 31, 0x246C64u);
    ctx->pc = 0x246C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246C5Cu;
    // 0x246c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x246C5Cu, 0x246C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C64u;
label_246c64:
    // 0x246c64: 0xc098514  jal         func_261450
    ctx->pc = 0x246C64u;
    SET_GPR_U32(ctx, 31, 0x246C6Cu);
    ctx->pc = 0x246C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246C64u;
    // 0x246c68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261450u, 0x246C64u, 0x246C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C6Cu;
label_246c6c:
    // 0x246c6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_246c70:
    // 0x246c70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x246c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x246c74: 0x3e00008  jr          $ra
    ctx->pc = 0x246C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C74u;
        // 0x246c78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246C7Cu;
    // 0x246c7c: 0x0  nop
    ctx->pc = 0x246c7cu;
    // NOP
    ctx->pc = 0x246c80u;
}
