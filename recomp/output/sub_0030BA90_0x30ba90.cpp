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

// Function: sub_0030BA90
// Address: 0x30ba90 - 0x30bae8
void sub_0030BA90_0x30ba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BA90_0x30ba90");
#endif

    switch (ctx->pc) {
        case 0x30bab0u: goto label_30bab0;
        case 0x30babcu: goto label_30babc;
        default: break;
    }

    ctx->pc = 0x30ba90u;

    // 0x30ba90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30ba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30ba94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30ba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30ba98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30ba98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30ba9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30ba9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30baa0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30baa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30baa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30baa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30baa8: 0xc0c4882  jal         func_312208
    ctx->pc = 0x30BAA8u;
    SET_GPR_U32(ctx, 31, 0x30BAB0u);
    ctx->pc = 0x30BAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BAA8u;
    // 0x30baac: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312208u, 0x30BAA8u, 0x30BAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BAB0u;
label_30bab0:
    // 0x30bab0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30bab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bab4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x30BAB4u;
    SET_GPR_U32(ctx, 31, 0x30BABCu);
    ctx->pc = 0x30BAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BAB4u;
    // 0x30bab8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x30BAB4u, 0x30BABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BABCu;
label_30babc:
    // 0x30babc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30BABCu;
    {
        const bool branch_taken_0x30babc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BABCu;
        // 0x30bac0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30babc) {
            ctx->pc = 0x30BAD0u;
            goto label_30bad0;
        }
    }
    ctx->pc = 0x30BAC4u;
    // 0x30bac4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x30bac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x30bac8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30bac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bacc: 0xac71bb9c  sw          $s1, -0x4464($v1)
    ctx->pc = 0x30baccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x3FBB9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBB9Cu, _value); } while (0);
label_30bad0:
    // 0x30bad0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30bad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30bad4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30bad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30bad8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30bad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30badc: 0x3e00008  jr          $ra
    ctx->pc = 0x30BADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BADCu;
        // 0x30bae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BAE4u;
    // 0x30bae4: 0x0  nop
    ctx->pc = 0x30bae4u;
    // NOP
    ctx->pc = 0x30bae8u;
}
