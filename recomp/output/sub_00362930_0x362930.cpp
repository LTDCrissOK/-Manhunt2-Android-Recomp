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

// Function: sub_00362930
// Address: 0x362930 - 0x362988
void sub_00362930_0x362930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362930_0x362930");
#endif

    switch (ctx->pc) {
        case 0x362944u: goto label_362944;
        default: break;
    }

    ctx->pc = 0x362930u;

    // 0x362930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x362930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x362934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x362934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x362938: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x362938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36293c: 0xc0d761a  jal         func_35D868
    ctx->pc = 0x36293Cu;
    SET_GPR_U32(ctx, 31, 0x362944u);
    ctx->pc = 0x362940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36293Cu;
    // 0x362940: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D868u, 0x36293Cu, 0x362944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362944u;
label_362944:
    // 0x362944: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x362944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x362948: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x362948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x36294c: 0x24634560  addiu       $v1, $v1, 0x4560
    ctx->pc = 0x36294cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17760));
    // 0x362950: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x362950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x362954: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x362954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x362958: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x362958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x36295c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x36295cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x362960: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x362960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362964: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x362964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x362968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x362968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36296c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36296cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362970: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x362970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x362974: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x362974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x362978: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x362978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x36297c: 0x3e00008  jr          $ra
    ctx->pc = 0x36297Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36297Cu;
        // 0x362980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36297Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362984u;
    // 0x362984: 0x0  nop
    ctx->pc = 0x362984u;
    // NOP
    ctx->pc = 0x362988u;
}
