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

// Function: sub_002BFFD8
// Address: 0x2bffd8 - 0x2c0000
void sub_002BFFD8_0x2bffd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFFD8_0x2bffd8");
#endif

    switch (ctx->pc) {
        case 0x2bfff4u: goto label_2bfff4;
        case 0x2bfffcu: goto label_2bfffc;
        default: break;
    }

    ctx->pc = 0x2bffd8u;

    // 0x2bffd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bffd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bffdc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2bffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2bffe0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2bffe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2bffe4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bffe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bffe8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2bffe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2bffec: 0xc0b025a  jal         func_2C0968
    ctx->pc = 0x2BFFECu;
    SET_GPR_U32(ctx, 31, 0x2BFFF4u);
    ctx->pc = 0x2BFFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFFECu;
    // 0x2bfff0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0968u, 0x2BFFECu, 0x2BFFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFFF4u;
label_2bfff4:
    // 0x2bfff4: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x2BFFF4u;
    SET_GPR_U32(ctx, 31, 0x2BFFFCu);
    ctx->pc = 0x2BFFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFFF4u;
    // 0x2bfff8: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2BFFF4u, 0x2BFFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFFFCu;
label_2bfffc:
    // 0x2bfffc: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x2bfffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2c0000u;
}
