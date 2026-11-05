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

// Function: sub_0018C960
// Address: 0x18c960 - 0x18c9c8
void sub_0018C960_0x18c960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C960_0x18c960");
#endif

    switch (ctx->pc) {
        case 0x18c960u: goto label_18c960;
        case 0x18c964u: goto label_18c964;
        case 0x18c968u: goto label_18c968;
        case 0x18c96cu: goto label_18c96c;
        case 0x18c970u: goto label_18c970;
        case 0x18c974u: goto label_18c974;
        case 0x18c978u: goto label_18c978;
        case 0x18c97cu: goto label_18c97c;
        case 0x18c980u: goto label_18c980;
        case 0x18c984u: goto label_18c984;
        case 0x18c988u: goto label_18c988;
        case 0x18c98cu: goto label_18c98c;
        case 0x18c990u: goto label_18c990;
        case 0x18c994u: goto label_18c994;
        case 0x18c998u: goto label_18c998;
        case 0x18c99cu: goto label_18c99c;
        case 0x18c9a0u: goto label_18c9a0;
        case 0x18c9a4u: goto label_18c9a4;
        case 0x18c9a8u: goto label_18c9a8;
        case 0x18c9acu: goto label_18c9ac;
        case 0x18c9b0u: goto label_18c9b0;
        case 0x18c9b4u: goto label_18c9b4;
        case 0x18c9b8u: goto label_18c9b8;
        case 0x18c9bcu: goto label_18c9bc;
        case 0x18c9c0u: goto label_18c9c0;
        case 0x18c9c4u: goto label_18c9c4;
        default: break;
    }

    ctx->pc = 0x18c960u;

label_18c960:
    // 0x18c960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18c960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18c964:
    // 0x18c964: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x18c964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_18c968:
    // 0x18c968: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18c968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c96c:
    // 0x18c96c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18c96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18c970:
    // 0x18c970: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18c970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18c974:
    // 0x18c974: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18c974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18c978:
    // 0x18c978: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18c978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_18c97c:
    // 0x18c97c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18c980:
    // 0x18c980: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x18c980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_18c984:
    // 0x18c984: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x18c984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_18c988:
    // 0x18c988: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x18c988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_18c98c:
    // 0x18c98c: 0xae050020  sw          $a1, 0x20($s0)
    ctx->pc = 0x18c98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
label_18c990:
    // 0x18c990: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x18c990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_18c994:
    // 0x18c994: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x18c994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_18c998:
    // 0x18c998: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x18c998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_18c99c:
    // 0x18c99c: 0xc063298  jal         func_18CA60
label_18c9a0:
    if (ctx->pc == 0x18C9A0u) {
        ctx->pc = 0x18C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C99Cu;
        // 0x18c9a0: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C9A4u;
        goto label_18c9a4;
    }
    ctx->pc = 0x18C99Cu;
    SET_GPR_U32(ctx, 31, 0x18C9A4u);
    ctx->pc = 0x18C9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C99Cu;
    // 0x18c9a0: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CA60u, 0x18C99Cu, 0x18C9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C9A4u;
label_18c9a4:
    // 0x18c9a4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x18c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18c9a8:
    // 0x18c9a8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x18c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18c9ac:
    // 0x18c9ac: 0x40f809  jalr        $v0
label_18c9b0:
    if (ctx->pc == 0x18C9B0u) {
        ctx->pc = 0x18C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9ACu;
        // 0x18c9b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C9B4u;
        goto label_18c9b4;
    }
    ctx->pc = 0x18C9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C9B4u);
        ctx->pc = 0x18C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9ACu;
        // 0x18c9b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C9ACu, 0x18C9B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C9B4u;
label_18c9b4:
    // 0x18c9b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18c9b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18c9b8:
    // 0x18c9b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18c9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18c9bc:
    // 0x18c9bc: 0x3e00008  jr          $ra
label_18c9c0:
    if (ctx->pc == 0x18C9C0u) {
        ctx->pc = 0x18C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9BCu;
        // 0x18c9c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C9C4u;
        goto label_18c9c4;
    }
    ctx->pc = 0x18C9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9BCu;
        // 0x18c9c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C9C4u;
label_18c9c4:
    // 0x18c9c4: 0x0  nop
    ctx->pc = 0x18c9c4u;
    // NOP
    ctx->pc = 0x18c9c8u;
}
