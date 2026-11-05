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

// Function: sub_00225260
// Address: 0x225260 - 0x2252a8
void sub_00225260_0x225260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225260_0x225260");
#endif

    ctx->pc = 0x225260u;

    // 0x225260: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x225260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x225264: 0x8ca245a4  lw          $v0, 0x45A4($a1)
    ctx->pc = 0x225264u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4A45A4u));
    // 0x225268: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x225268u;
    {
        const bool branch_taken_0x225268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225268u;
        // 0x22526c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225268) {
            ctx->pc = 0x22528Cu;
            goto label_22528c;
        }
    }
    ctx->pc = 0x225270u;
    // 0x225270: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x225270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x225274: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x225274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225278: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x225278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x22527c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22527cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225280: 0xe44045a0  swc1        $f0, 0x45A0($v0)
    ctx->pc = 0x225280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4A45A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A45A0u, _value); } while (0); }
    // 0x225284: 0xaca345a4  sw          $v1, 0x45A4($a1)
    ctx->pc = 0x225284u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 17828), GPR_U32(ctx, 3));
    // 0x225288: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x225288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_22528c:
    // 0x22528c: 0x90432b94  lbu         $v1, 0x2B94($v0)
    ctx->pc = 0x22528cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11156)));
    // 0x225290: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x225290u;
    {
        const bool branch_taken_0x225290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225290u;
        // 0x225294: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225290) {
            ctx->pc = 0x2252A0u;
            goto label_2252a0;
        }
    }
    ctx->pc = 0x225298u;
    // 0x225298: 0x3e00008  jr          $ra
    ctx->pc = 0x225298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225298u;
        // 0x22529c: 0xc44045a0  lwc1        $f0, 0x45A0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 17824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2252A0u;
label_2252a0:
    // 0x2252a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2252A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2252A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2252A0u;
        // 0x2252a4: 0xc4800230  lwc1        $f0, 0x230($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2252A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2252A8u;
}
