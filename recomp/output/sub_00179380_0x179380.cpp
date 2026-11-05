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

// Function: sub_00179380
// Address: 0x179380 - 0x1793f0
void sub_00179380_0x179380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179380_0x179380");
#endif

    switch (ctx->pc) {
        case 0x1793b8u: goto label_1793b8;
        case 0x1793dcu: goto label_1793dc;
        default: break;
    }

    ctx->pc = 0x179380u;

    // 0x179380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x179380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x179384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x179384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179388: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x179388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17938c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17938cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179390: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x179390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x179394: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x179394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x179398: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x179398u;
    {
        const bool branch_taken_0x179398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179398u;
        // 0x17939c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179398) {
            ctx->pc = 0x1793DCu;
            goto label_1793dc;
        }
    }
    ctx->pc = 0x1793A0u;
    // 0x1793a0: 0x92030531  lbu         $v1, 0x531($s0)
    ctx->pc = 0x1793a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1329)));
    // 0x1793a4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1793a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1793a8: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1793A8u;
    {
        const bool branch_taken_0x1793a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1793a8) {
            ctx->pc = 0x1793ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1793A8u;
            // 0x1793ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1793E0u;
            goto label_1793e0;
        }
    }
    ctx->pc = 0x1793B0u;
    // 0x1793b0: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x1793B0u;
    SET_GPR_U32(ctx, 31, 0x1793B8u);
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x1793B0u, 0x1793B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793B8u;
label_1793b8:
    // 0x1793b8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1793b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1793bc: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1793BCu;
    {
        const bool branch_taken_0x1793bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1793C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1793BCu;
        // 0x1793c0: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1793bc) {
            ctx->pc = 0x1793DCu;
            goto label_1793dc;
        }
    }
    ctx->pc = 0x1793C4u;
    // 0x1793c4: 0x92020531  lbu         $v0, 0x531($s0)
    ctx->pc = 0x1793c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1329)));
    // 0x1793c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1793c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1793cc: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x1793ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1793d0: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1793d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1793d4: 0xc05d5a4  jal         func_175690
    ctx->pc = 0x1793D4u;
    SET_GPR_U32(ctx, 31, 0x1793DCu);
    ctx->pc = 0x1793D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793D4u;
    // 0x1793d8: 0x8c440214  lw          $a0, 0x214($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175690u, 0x1793D4u, 0x1793DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793DCu;
label_1793dc:
    // 0x1793dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1793dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1793e0:
    // 0x1793e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1793e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1793e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1793e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1793e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1793E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1793ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1793E8u;
        // 0x1793ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1793E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1793F0u;
}
