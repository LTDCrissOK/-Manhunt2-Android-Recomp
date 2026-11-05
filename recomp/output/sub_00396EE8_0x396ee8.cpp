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

// Function: sub_00396EE8
// Address: 0x396ee8 - 0x396f90
void sub_00396EE8_0x396ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396EE8_0x396ee8");
#endif

    switch (ctx->pc) {
        case 0x396f34u: goto label_396f34;
        case 0x396f50u: goto label_396f50;
        case 0x396f68u: goto label_396f68;
        case 0x396f7cu: goto label_396f7c;
        default: break;
    }

    ctx->pc = 0x396ee8u;

    // 0x396ee8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x396ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x396eec: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x396eecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x396ef0: 0x8c4791f8  lw          $a3, -0x6E08($v0)
    ctx->pc = 0x396ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x4091F8u));
    // 0x396ef4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x396ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x396ef8: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x396ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x396efc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x396efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x396f00: 0x24a569d8  addiu       $a1, $a1, 0x69D8
    ctx->pc = 0x396f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27096));
    // 0x396f04: 0x246319f0  addiu       $v1, $v1, 0x19F0
    ctx->pc = 0x396f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6640));
    // 0x396f08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x396f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396f0c: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x396f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x396f10: 0x2442aa70  addiu       $v0, $v0, -0x5590
    ctx->pc = 0x396f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945392));
    // 0x396f14: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x396f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x396f18: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x396f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x396f1c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x396f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x396f20: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x396f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x396f24: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x396f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x396f28: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x396f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x396f2c: 0xc0f25e8  jal         func_3C97A0
    ctx->pc = 0x396F2Cu;
    SET_GPR_U32(ctx, 31, 0x396F34u);
    ctx->pc = 0x396F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396F2Cu;
    // 0x396f30: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C97A0u, 0x396F2Cu, 0x396F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396F34u;
label_396f34:
    // 0x396f34: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x396f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x396f38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x396f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396f3c: 0x24701958  addiu       $s0, $v1, 0x1958
    ctx->pc = 0x396f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 6488));
    // 0x396f40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x396f40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x401958u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x401958u, _value); } while (0);
    // 0x396f44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x396f44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x401958u));
    // 0x396f48: 0xc0f2a1e  jal         func_3CA878
    ctx->pc = 0x396F48u;
    SET_GPR_U32(ctx, 31, 0x396F50u);
    ctx->pc = 0x396F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396F48u;
    // 0x396f4c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA878u, 0x396F48u, 0x396F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396F50u;
label_396f50:
    // 0x396f50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x396f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x396f54: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x396F54u;
    {
        const bool branch_taken_0x396f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x396F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F54u;
        // 0x396f58: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396f54) {
            ctx->pc = 0x396F70u;
            goto label_396f70;
        }
    }
    ctx->pc = 0x396F5Cu;
    // 0x396f5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x396f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x396f60: 0xc0e5ba2  jal         func_396E88
    ctx->pc = 0x396F60u;
    SET_GPR_U32(ctx, 31, 0x396F68u);
    ctx->pc = 0x396E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396E88u, 0x396F60u, 0x396F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396F68u;
label_396f68:
    // 0x396f68: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x396f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x396f6c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x396f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_396f70:
    // 0x396f70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x396f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x396f74: 0xc0f260c  jal         func_3C9830
    ctx->pc = 0x396F74u;
    SET_GPR_U32(ctx, 31, 0x396F7Cu);
    ctx->pc = 0x396F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396F74u;
    // 0x396f78: 0x8c4518d4  lw          $a1, 0x18D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6356)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9830u, 0x396F74u, 0x396F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396F7Cu;
label_396f7c:
    // 0x396f7c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x396f7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x396f80: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x396f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x396f84: 0x3e00008  jr          $ra
    ctx->pc = 0x396F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396F84u;
        // 0x396f88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396F8Cu;
    // 0x396f8c: 0x0  nop
    ctx->pc = 0x396f8cu;
    // NOP
    ctx->pc = 0x396f90u;
}
