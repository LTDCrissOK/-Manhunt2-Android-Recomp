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

// Function: sub_0014BA90
// Address: 0x14ba90 - 0x14bb38
void sub_0014BA90_0x14ba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BA90_0x14ba90");
#endif

    switch (ctx->pc) {
        case 0x14bab4u: goto label_14bab4;
        case 0x14bac0u: goto label_14bac0;
        case 0x14bad8u: goto label_14bad8;
        case 0x14baf8u: goto label_14baf8;
        case 0x14bb04u: goto label_14bb04;
        case 0x14bb10u: goto label_14bb10;
        case 0x14bb20u: goto label_14bb20;
        default: break;
    }

    ctx->pc = 0x14ba90u;

    // 0x14ba90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14ba94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14ba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14ba98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14ba98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14ba9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14ba9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14baa0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14baa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14baa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14baa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14baa8: 0xae060468  sw          $a2, 0x468($s0)
    ctx->pc = 0x14baa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1128), GPR_U32(ctx, 6));
    // 0x14baac: 0xc046002  jal         func_118008
    ctx->pc = 0x14BAACu;
    SET_GPR_U32(ctx, 31, 0x14BAB4u);
    ctx->pc = 0x14BAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BAACu;
    // 0x14bab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x14BAACu, 0x14BAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BAB4u;
label_14bab4:
    // 0x14bab4: 0xae020660  sw          $v0, 0x660($s0)
    ctx->pc = 0x14bab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 2));
    // 0x14bab8: 0xc0462b0  jal         func_118AC0
    ctx->pc = 0x14BAB8u;
    SET_GPR_U32(ctx, 31, 0x14BAC0u);
    ctx->pc = 0x14BABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BAB8u;
    // 0x14babc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118AC0u, 0x14BAB8u, 0x14BAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BAC0u;
label_14bac0:
    // 0x14bac0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x14bac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x14bac4: 0x8e020660  lw          $v0, 0x660($s0)
    ctx->pc = 0x14bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    // 0x14bac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14bac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bacc: 0xae020664  sw          $v0, 0x664($s0)
    ctx->pc = 0x14baccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 2));
    // 0x14bad0: 0xc046086  jal         func_118218
    ctx->pc = 0x14BAD0u;
    SET_GPR_U32(ctx, 31, 0x14BAD8u);
    ctx->pc = 0x14BAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BAD0u;
    // 0x14bad4: 0xe6000668  swc1        $f0, 0x668($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1640), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x14BAD0u, 0x14BAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BAD8u;
label_14bad8:
    // 0x14bad8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14BAD8u;
    {
        const bool branch_taken_0x14bad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bad8) {
            ctx->pc = 0x14BAF0u;
            goto label_14baf0;
        }
    }
    ctx->pc = 0x14BAE0u;
    // 0x14bae0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x14bae0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14bae4: 0xfa010670  sqc2        $vf1, 0x670($s0)
    ctx->pc = 0x14bae4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1648), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14bae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14baec: 0xae020680  sw          $v0, 0x680($s0)
    ctx->pc = 0x14baecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 2));
label_14baf0:
    // 0x14baf0: 0xc0461fe  jal         func_1187F8
    ctx->pc = 0x14BAF0u;
    SET_GPR_U32(ctx, 31, 0x14BAF8u);
    ctx->pc = 0x14BAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BAF0u;
    // 0x14baf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187F8u, 0x14BAF0u, 0x14BAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BAF8u;
label_14baf8:
    // 0x14baf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14baf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bafc: 0xc0461b0  jal         func_1186C0
    ctx->pc = 0x14BAFCu;
    SET_GPR_U32(ctx, 31, 0x14BB04u);
    ctx->pc = 0x14BB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BAFCu;
    // 0x14bb00: 0xae020684  sw          $v0, 0x684($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1668), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1186C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1186C0u, 0x14BAFCu, 0x14BB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BB04u;
label_14bb04:
    // 0x14bb04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14bb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb08: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x14BB08u;
    SET_GPR_U32(ctx, 31, 0x14BB10u);
    ctx->pc = 0x14BB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BB08u;
    // 0x14bb0c: 0xae020688  sw          $v0, 0x688($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1672), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x14BB08u, 0x14BB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BB10u;
label_14bb10:
    // 0x14bb10: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x14bb10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x14bb14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14bb14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb18: 0xc042136  jal         func_1084D8
    ctx->pc = 0x14BB18u;
    SET_GPR_U32(ctx, 31, 0x14BB20u);
    ctx->pc = 0x14BB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BB18u;
    // 0x14bb1c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x14BB18u, 0x14BB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BB20u;
label_14bb20:
    // 0x14bb20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14bb20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14bb24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14bb24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14bb28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14bb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14bb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x14BB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB2Cu;
        // 0x14bb30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BB34u;
    // 0x14bb34: 0x0  nop
    ctx->pc = 0x14bb34u;
    // NOP
    ctx->pc = 0x14bb38u;
}
