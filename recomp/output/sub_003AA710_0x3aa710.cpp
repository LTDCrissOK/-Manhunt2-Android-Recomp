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

// Function: sub_003AA710
// Address: 0x3aa710 - 0x3aa760
void sub_003AA710_0x3aa710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA710_0x3aa710");
#endif

    switch (ctx->pc) {
        case 0x3aa734u: goto label_3aa734;
        case 0x3aa744u: goto label_3aa744;
        default: break;
    }

    ctx->pc = 0x3aa710u;

    // 0x3aa710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3aa710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3aa714: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3aa714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3aa718: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3aa718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa71c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3aa71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3aa720: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3aa720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa724: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3aa724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3aa728: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3aa728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3aa72c: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AA72Cu;
    SET_GPR_U32(ctx, 31, 0x3AA734u);
    ctx->pc = 0x3AA730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA72Cu;
    // 0x3aa730: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AA72Cu, 0x3AA734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA734u;
label_3aa734:
    // 0x3aa734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa738: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3aa738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa73c: 0xc0ea9d8  jal         func_3AA760
    ctx->pc = 0x3AA73Cu;
    SET_GPR_U32(ctx, 31, 0x3AA744u);
    ctx->pc = 0x3AA740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA73Cu;
    // 0x3aa740: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA760u, 0x3AA73Cu, 0x3AA744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA744u;
label_3aa744:
    // 0x3aa744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aa744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa748: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3aa748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3aa74c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3aa74cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aa750: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3aa750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3aa754: 0x80ea7de  j           func_3A9F78
    ctx->pc = 0x3AA754u;
    ctx->pc = 0x3AA758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA754u;
    // 0x3aa758: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    sub_003A9F78_0x3a9f78(rdram, ctx, runtime); return;
    ctx->pc = 0x3AA75Cu;
    // 0x3aa75c: 0x0  nop
    ctx->pc = 0x3aa75cu;
    // NOP
    ctx->pc = 0x3aa760u;
}
