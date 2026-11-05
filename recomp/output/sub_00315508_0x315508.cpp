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

// Function: sub_00315508
// Address: 0x315508 - 0x315568
void sub_00315508_0x315508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315508_0x315508");
#endif

    switch (ctx->pc) {
        case 0x315528u: goto label_315528;
        default: break;
    }

    ctx->pc = 0x315508u;

    // 0x315508: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x315508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31550c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31550cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x315510: 0x8c62cba8  lw          $v0, -0x3458($v1)
    ctx->pc = 0x315510u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCBA8u));
    // 0x315514: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x315514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x315518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x315518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31551c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x31551cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x315520: 0xc0c291e  jal         func_30A478
    ctx->pc = 0x315520u;
    SET_GPR_U32(ctx, 31, 0x315528u);
    ctx->pc = 0x315524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315520u;
    // 0x315524: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A478u, 0x315520u, 0x315528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315528u;
label_315528:
    // 0x315528: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x315528u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31552c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31552Cu;
    {
        const bool branch_taken_0x31552c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x315530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31552Cu;
        // 0x315530: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31552c) {
            ctx->pc = 0x31553Cu;
            goto label_31553c;
        }
    }
    ctx->pc = 0x315534u;
    // 0x315534: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x315534u;
    {
        const bool branch_taken_0x315534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315534u;
        // 0x315538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315534) {
            ctx->pc = 0x315558u;
            goto label_315558;
        }
    }
    ctx->pc = 0x31553Cu;
label_31553c:
    // 0x31553c: 0x3c01437a  lui         $at, 0x437A
    ctx->pc = 0x31553cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17274 << 16));
    // 0x315540: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x315540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315544: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x315544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x315548: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x315548u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x31554c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31554cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315550: 0xe46100f4  swc1        $f1, 0xF4($v1)
    ctx->pc = 0x315550u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x315554: 0xe46000f0  swc1        $f0, 0xF0($v1)
    ctx->pc = 0x315554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 240), bits); }
label_315558:
    // 0x315558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31555c: 0x3e00008  jr          $ra
    ctx->pc = 0x31555Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31555Cu;
        // 0x315560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31555Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315564u;
    // 0x315564: 0x0  nop
    ctx->pc = 0x315564u;
    // NOP
    ctx->pc = 0x315568u;
}
