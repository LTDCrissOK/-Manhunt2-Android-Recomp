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

// Function: sub_002CADA8
// Address: 0x2cada8 - 0x2cae40
void sub_002CADA8_0x2cada8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CADA8_0x2cada8");
#endif

    switch (ctx->pc) {
        case 0x2cadc8u: goto label_2cadc8;
        case 0x2cade4u: goto label_2cade4;
        case 0x2cae1cu: goto label_2cae1c;
        case 0x2cae30u: goto label_2cae30;
        default: break;
    }

    ctx->pc = 0x2cada8u;

    // 0x2cada8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cada8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cadac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2cadacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cadb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cadb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cadb4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cadb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cadb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cadb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cadbc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2cadbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2cadc0: 0xc0b2d50  jal         func_2CB540
    ctx->pc = 0x2CADC0u;
    SET_GPR_U32(ctx, 31, 0x2CADC8u);
    ctx->pc = 0x2CADC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CADC0u;
    // 0x2cadc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB540u, 0x2CADC0u, 0x2CADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CADC8u;
label_2cadc8:
    // 0x2cadc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cadc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cadcc: 0x340580e0  ori         $a1, $zero, 0x80E0
    ctx->pc = 0x2cadccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32992);
    // 0x2cadd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2cadd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cadd4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2cadd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cadd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2cadd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caddc: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CADDCu;
    SET_GPR_U32(ctx, 31, 0x2CADE4u);
    ctx->pc = 0x2CADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CADDCu;
    // 0x2cade0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CADDCu, 0x2CADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CADE4u;
label_2cade4:
    // 0x2cade4: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x2cade4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x2cade8: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x2cade8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2cadec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2cadecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2cadf0: 0x8e080058  lw          $t0, 0x58($s0)
    ctx->pc = 0x2cadf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2cadf4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cadf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cadf8: 0x240a0800  addiu       $t2, $zero, 0x800
    ctx->pc = 0x2cadf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2cadfc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2cadfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cae00: 0x340580d0  ori         $a1, $zero, 0x80D0
    ctx->pc = 0x2cae00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32976);
    // 0x2cae04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cae04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cae08: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x2cae08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x2cae0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2cae0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cae10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cae10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cae14: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CAE14u;
    SET_GPR_U32(ctx, 31, 0x2CAE1Cu);
    ctx->pc = 0x2CAE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAE14u;
    // 0x2cae18: 0x24094000  addiu       $t1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CAE14u, 0x2CAE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE1Cu;
label_2cae1c:
    // 0x2cae1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cae1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cae20: 0x340580f0  ori         $a1, $zero, 0x80F0
    ctx->pc = 0x2cae20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x2cae24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2cae24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cae28: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CAE28u;
    SET_GPR_U32(ctx, 31, 0x2CAE30u);
    ctx->pc = 0x2CAE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAE28u;
    // 0x2cae2c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CAE28u, 0x2CAE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE30u;
label_2cae30:
    // 0x2cae30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cae30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cae34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cae34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cae38: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE38u;
        // 0x2cae3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAE40u;
}
