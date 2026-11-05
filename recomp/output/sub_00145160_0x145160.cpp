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

// Function: sub_00145160
// Address: 0x145160 - 0x1451b0
void sub_00145160_0x145160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145160_0x145160");
#endif

    switch (ctx->pc) {
        case 0x14517cu: goto label_14517c;
        case 0x145184u: goto label_145184;
        case 0x145198u: goto label_145198;
        default: break;
    }

    ctx->pc = 0x145160u;

    // 0x145160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145164: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145168: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14516c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14516cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x145170: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x145174: 0xc0514f0  jal         func_1453C0
    ctx->pc = 0x145174u;
    SET_GPR_U32(ctx, 31, 0x14517Cu);
    ctx->pc = 0x145178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145174u;
    // 0x145178: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1453C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1453C0u, 0x145174u, 0x14517Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14517Cu;
label_14517c:
    // 0x14517c: 0xc04d7e2  jal         func_135F88
    ctx->pc = 0x14517Cu;
    SET_GPR_U32(ctx, 31, 0x145184u);
    ctx->pc = 0x145180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14517Cu;
    // 0x145180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F88u, 0x14517Cu, 0x145184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145184u;
label_145184:
    // 0x145184: 0xae110464  sw          $s1, 0x464($s0)
    ctx->pc = 0x145184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1124), GPR_U32(ctx, 17));
    // 0x145188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14518c: 0xae020460  sw          $v0, 0x460($s0)
    ctx->pc = 0x14518cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 2));
    // 0x145190: 0xc04d89a  jal         func_136268
    ctx->pc = 0x145190u;
    SET_GPR_U32(ctx, 31, 0x145198u);
    ctx->pc = 0x145194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145190u;
    // 0x145194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136268u, 0x145190u, 0x145198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145198u;
label_145198:
    // 0x145198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14519c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14519cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1451a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1451a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1451a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1451A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1451A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1451A4u;
        // 0x1451a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1451A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1451ACu;
    // 0x1451ac: 0x0  nop
    ctx->pc = 0x1451acu;
    // NOP
    ctx->pc = 0x1451b0u;
}
