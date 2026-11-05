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

// Function: sub_003DF5F0
// Address: 0x3df5f0 - 0x3df680
void sub_003DF5F0_0x3df5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF5F0_0x3df5f0");
#endif

    ctx->pc = 0x3df5f0u;

    // 0x3df5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF5F8u;
    // 0x3df5f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3df5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3df5fc: 0x0  nop
    ctx->pc = 0x3df5fcu;
    // NOP
    // 0x3df600: 0xac800390  sw          $zero, 0x390($a0)
    ctx->pc = 0x3df600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 912), GPR_U32(ctx, 0));
    // 0x3df604: 0x0  nop
    ctx->pc = 0x3df604u;
    // NOP
    // 0x3df608: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3df608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df60c: 0x0  nop
    ctx->pc = 0x3df60cu;
    // NOP
    // 0x3df610: 0x8c6213e8  lw          $v0, 0x13E8($v1)
    ctx->pc = 0x3df610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x3df614: 0x0  nop
    ctx->pc = 0x3df614u;
    // NOP
    // 0x3df618: 0xac600230  sw          $zero, 0x230($v1)
    ctx->pc = 0x3df618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 560), GPR_U32(ctx, 0));
    // 0x3df61c: 0x0  nop
    ctx->pc = 0x3df61cu;
    // NOP
    // 0x3df620: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x3df620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x3df624: 0x0  nop
    ctx->pc = 0x3df624u;
    // NOP
    // 0x3df628: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x3df628u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3df62c: 0x0  nop
    ctx->pc = 0x3df62cu;
    // NOP
    // 0x3df630: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3df630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3df634: 0x0  nop
    ctx->pc = 0x3df634u;
    // NOP
    // 0x3df638: 0xac820704  sw          $v0, 0x704($a0)
    ctx->pc = 0x3df638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1796), GPR_U32(ctx, 2));
    // 0x3df63c: 0x0  nop
    ctx->pc = 0x3df63cu;
    // NOP
    // 0x3df640: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3df640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3df644: 0x0  nop
    ctx->pc = 0x3df644u;
    // NOP
    // 0x3df648: 0xe4810500  swc1        $f1, 0x500($a0)
    ctx->pc = 0x3df648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1280), bits); }
    // 0x3df64c: 0x0  nop
    ctx->pc = 0x3df64cu;
    // NOP
    // 0x3df650: 0xe4810528  swc1        $f1, 0x528($a0)
    ctx->pc = 0x3df650u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1320), bits); }
    // 0x3df654: 0x0  nop
    ctx->pc = 0x3df654u;
    // NOP
    // 0x3df658: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3df658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3df65c: 0x0  nop
    ctx->pc = 0x3df65cu;
    // NOP
    // 0x3df660: 0xac8204f4  sw          $v0, 0x4F4($a0)
    ctx->pc = 0x3df660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1268), GPR_U32(ctx, 2));
    // 0x3df664: 0x0  nop
    ctx->pc = 0x3df664u;
    // NOP
    // 0x3df668: 0xac820428  sw          $v0, 0x428($a0)
    ctx->pc = 0x3df668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1064), GPR_U32(ctx, 2));
    // 0x3df66c: 0x0  nop
    ctx->pc = 0x3df66cu;
    // NOP
    // 0x3df670: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3df670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3df674: 0x0  nop
    ctx->pc = 0x3df674u;
    // NOP
    // 0x3df678: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3df678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3df67c: 0x0  nop
    ctx->pc = 0x3df67cu;
    // NOP
    ctx->pc = 0x3df680u;
}
