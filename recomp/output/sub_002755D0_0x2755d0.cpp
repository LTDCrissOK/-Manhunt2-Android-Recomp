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

// Function: sub_002755D0
// Address: 0x2755d0 - 0x275628
void sub_002755D0_0x2755d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002755D0_0x2755d0");
#endif

    switch (ctx->pc) {
        case 0x2755f8u: goto label_2755f8;
        case 0x275600u: goto label_275600;
        default: break;
    }

    ctx->pc = 0x2755d0u;

    // 0x2755d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2755d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2755d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2755d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2755d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2755d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2755dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2755dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2755e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2755e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2755e4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2755e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2755e8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2755e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2755ec: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x2755ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2755f0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2755F0u;
    SET_GPR_U32(ctx, 31, 0x2755F8u);
    ctx->pc = 0x2755F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2755F0u;
    // 0x2755f4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2755F0u, 0x2755F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2755F8u;
label_2755f8:
    // 0x2755f8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2755F8u;
    SET_GPR_U32(ctx, 31, 0x275600u);
    ctx->pc = 0x2755FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2755F8u;
    // 0x2755fc: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2755F8u, 0x275600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275600u;
label_275600:
    // 0x275600: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x275600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x275604: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x275604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x275608: 0x7e000030  sq          $zero, 0x30($s0)
    ctx->pc = 0x275608u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 0));
    // 0x27560c: 0x7e000060  sq          $zero, 0x60($s0)
    ctx->pc = 0x27560cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 0));
    // 0x275610: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x275610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275614: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x275614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x275618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x275618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27561c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27561cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275620: 0x3e00008  jr          $ra
    ctx->pc = 0x275620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275620u;
        // 0x275624: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275628u;
}
