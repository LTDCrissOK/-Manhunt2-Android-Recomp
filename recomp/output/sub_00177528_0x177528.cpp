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

// Function: sub_00177528
// Address: 0x177528 - 0x177588
void sub_00177528_0x177528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177528_0x177528");
#endif

    switch (ctx->pc) {
        case 0x177540u: goto label_177540;
        case 0x177550u: goto label_177550;
        case 0x17755cu: goto label_17755c;
        case 0x177568u: goto label_177568;
        default: break;
    }

    ctx->pc = 0x177528u;

    // 0x177528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17752c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17752cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177530: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x177534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x177538: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x177538u;
    SET_GPR_U32(ctx, 31, 0x177540u);
    ctx->pc = 0x17753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177538u;
    // 0x17753c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x177538u, 0x177540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177540u;
label_177540:
    // 0x177540: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x177540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177544: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177548: 0xc05e050  jal         func_178140
    ctx->pc = 0x177548u;
    SET_GPR_U32(ctx, 31, 0x177550u);
    ctx->pc = 0x17754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177548u;
    // 0x17754c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178140u, 0x177548u, 0x177550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177550u;
label_177550:
    // 0x177550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177554: 0xc04f74a  jal         func_13DD28
    ctx->pc = 0x177554u;
    SET_GPR_U32(ctx, 31, 0x17755Cu);
    ctx->pc = 0x177558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177554u;
    // 0x177558: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD28u, 0x177554u, 0x17755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17755Cu;
label_17755c:
    // 0x17755c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17755cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177560: 0xc05e022  jal         func_178088
    ctx->pc = 0x177560u;
    SET_GPR_U32(ctx, 31, 0x177568u);
    ctx->pc = 0x177564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177560u;
    // 0x177564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178088u, 0x177560u, 0x177568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177568u;
label_177568:
    // 0x177568: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x177568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x17756c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17756cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177570: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x177570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x177574: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x177574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177578: 0xa2220009  sb          $v0, 0x9($s1)
    ctx->pc = 0x177578u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x17757c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17757cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177580: 0x3e00008  jr          $ra
    ctx->pc = 0x177580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177580u;
        // 0x177584: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177588u;
}
