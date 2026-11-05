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

// Function: sub_002901C0
// Address: 0x2901c0 - 0x290240
void sub_002901C0_0x2901c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002901C0_0x2901c0");
#endif

    switch (ctx->pc) {
        case 0x2901dcu: goto label_2901dc;
        default: break;
    }

    ctx->pc = 0x2901c0u;

    // 0x2901c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2901c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2901c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2901c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2901c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2901c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2901cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2901ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2901d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2901d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2901d4: 0xc0a96c0  jal         func_2A5B00
    ctx->pc = 0x2901D4u;
    SET_GPR_U32(ctx, 31, 0x2901DCu);
    ctx->pc = 0x2901D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2901D4u;
    // 0x2901d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5B00u, 0x2901D4u, 0x2901DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2901DCu;
label_2901dc:
    // 0x2901dc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2901dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2901e0: 0xae0002e0  sw          $zero, 0x2E0($s0)
    ctx->pc = 0x2901e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 0));
    // 0x2901e4: 0x24632dc0  addiu       $v1, $v1, 0x2DC0
    ctx->pc = 0x2901e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11712));
    // 0x2901e8: 0x260402e0  addiu       $a0, $s0, 0x2E0
    ctx->pc = 0x2901e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
    // 0x2901ec: 0xae030278  sw          $v1, 0x278($s0)
    ctx->pc = 0x2901ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 3));
    // 0x2901f0: 0x260502f0  addiu       $a1, $s0, 0x2F0
    ctx->pc = 0x2901f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x2901f4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2901f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2901f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2901f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2901fc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2901fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x290200: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x290200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290204: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x290204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x290208: 0xae0002f0  sw          $zero, 0x2F0($s0)
    ctx->pc = 0x290208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 0));
    // 0x29020c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x29020cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x290210: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x290210u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x290214: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x290214u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x290218: 0xae11030c  sw          $s1, 0x30C($s0)
    ctx->pc = 0x290218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 780), GPR_U32(ctx, 17));
    // 0x29021c: 0xae030308  sw          $v1, 0x308($s0)
    ctx->pc = 0x29021cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 776), GPR_U32(ctx, 3));
    // 0x290220: 0xa2000300  sb          $zero, 0x300($s0)
    ctx->pc = 0x290220u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 768), (uint8_t)GPR_U32(ctx, 0));
    // 0x290224: 0xae000304  sw          $zero, 0x304($s0)
    ctx->pc = 0x290224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 0));
    // 0x290228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x290228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29022c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29022cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x290230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x290230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290234: 0x3e00008  jr          $ra
    ctx->pc = 0x290234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290234u;
        // 0x290238: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29023Cu;
    // 0x29023c: 0x0  nop
    ctx->pc = 0x29023cu;
    // NOP
    ctx->pc = 0x290240u;
}
