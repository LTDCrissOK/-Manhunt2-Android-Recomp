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

// Function: sub_0017B228
// Address: 0x17b228 - 0x17b288
void sub_0017B228_0x17b228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B228_0x17b228");
#endif

    switch (ctx->pc) {
        case 0x17b240u: goto label_17b240;
        case 0x17b25cu: goto label_17b25c;
        case 0x17b268u: goto label_17b268;
        default: break;
    }

    ctx->pc = 0x17b228u;

    // 0x17b228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b22c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b230: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17b230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17b234: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b238: 0xc05ecda  jal         func_17B368
    ctx->pc = 0x17B238u;
    SET_GPR_U32(ctx, 31, 0x17B240u);
    ctx->pc = 0x17B23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B238u;
    // 0x17b23c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B368u, 0x17B238u, 0x17B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B240u;
label_17b240:
    // 0x17b240: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17b240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b248: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x17b248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x17b24c: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x17b24cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17b250: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x17b250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17b254: 0xc05ed50  jal         func_17B540
    ctx->pc = 0x17B254u;
    SET_GPR_U32(ctx, 31, 0x17B25Cu);
    ctx->pc = 0x17B258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B254u;
    // 0x17b258: 0x8c450214  lw          $a1, 0x214($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B540u, 0x17B254u, 0x17B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B25Cu;
label_17b25c:
    // 0x17b25c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17b25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b260: 0xc05ebe0  jal         func_17AF80
    ctx->pc = 0x17B260u;
    SET_GPR_U32(ctx, 31, 0x17B268u);
    ctx->pc = 0x17B264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B260u;
    // 0x17b264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AF80u, 0x17B260u, 0x17B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B268u;
label_17b268:
    // 0x17b268: 0x92020530  lbu         $v0, 0x530($s0)
    ctx->pc = 0x17b268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1328)));
    // 0x17b26c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17b26cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b270: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17b274: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b278: 0xa2020530  sb          $v0, 0x530($s0)
    ctx->pc = 0x17b278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1328), (uint8_t)GPR_U32(ctx, 2));
    // 0x17b27c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b27cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b280: 0x3e00008  jr          $ra
    ctx->pc = 0x17B280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B280u;
        // 0x17b284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B288u;
}
