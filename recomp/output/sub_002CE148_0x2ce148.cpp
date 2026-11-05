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

// Function: sub_002CE148
// Address: 0x2ce148 - 0x2ce1a0
void sub_002CE148_0x2ce148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE148_0x2ce148");
#endif

    switch (ctx->pc) {
        case 0x2ce18cu: goto label_2ce18c;
        default: break;
    }

    ctx->pc = 0x2ce148u;

    // 0x2ce148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ce148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ce14c: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x2ce14cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
    // 0x2ce150: 0xace4a680  sw          $a0, -0x5980($a3)
    ctx->pc = 0x2ce150u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x57A680u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57A680u, _value); } while (0);
    // 0x2ce154: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ce154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ce158: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ce158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ce15c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2ce15cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2ce160: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2ce160u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x2ce164: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2ce164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2ce168: 0x2609a6c0  addiu       $t1, $s0, -0x5940
    ctx->pc = 0x2ce168u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944448));
    // 0x2ce16c: 0x2484a640  addiu       $a0, $a0, -0x59C0
    ctx->pc = 0x2ce16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944320));
    // 0x2ce170: 0x24e7a680  addiu       $a3, $a3, -0x5980
    ctx->pc = 0x2ce170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944384));
    // 0x2ce174: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2ce174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2ce178: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ce178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce17c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x2ce17cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ce180: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x2ce180u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ce184: 0xc0f347c  jal         func_3CD1F0
    ctx->pc = 0x2CE184u;
    SET_GPR_U32(ctx, 31, 0x2CE18Cu);
    ctx->pc = 0x2CE188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE184u;
    // 0x2ce188: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x2CE184u, 0x2CE18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE18Cu;
label_2ce18c:
    // 0x2ce18c: 0x8e02a6c0  lw          $v0, -0x5940($s0)
    ctx->pc = 0x2ce18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944448)));
    // 0x2ce190: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ce190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce194: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2ce194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ce198: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE198u;
        // 0x2ce19c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE1A0u;
}
