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

// Function: sub_002663D8
// Address: 0x2663d8 - 0x266438
void sub_002663D8_0x2663d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002663D8_0x2663d8");
#endif

    switch (ctx->pc) {
        case 0x266410u: goto label_266410;
        case 0x266424u: goto label_266424;
        default: break;
    }

    ctx->pc = 0x2663d8u;

    // 0x2663d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2663d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2663dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2663dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2663e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2663e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2663e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2663e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2663e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2663e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2663ec: 0x9222028e  lbu         $v0, 0x28E($s1)
    ctx->pc = 0x2663ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 654)));
    // 0x2663f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2663F0u;
    {
        const bool branch_taken_0x2663f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2663F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2663F0u;
        // 0x2663f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2663f0) {
            ctx->pc = 0x266428u;
            goto label_266428;
        }
    }
    ctx->pc = 0x2663F8u;
    // 0x2663f8: 0x92220284  lbu         $v0, 0x284($s1)
    ctx->pc = 0x2663f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 644)));
    // 0x2663fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2663FCu;
    {
        const bool branch_taken_0x2663fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2663FCu;
        // 0x266400: 0x3c10004a  lui         $s0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2663fc) {
            ctx->pc = 0x266424u;
            goto label_266424;
        }
    }
    ctx->pc = 0x266404u;
    // 0x266404: 0xa2200284  sb          $zero, 0x284($s1)
    ctx->pc = 0x266404u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 644), (uint8_t)GPR_U32(ctx, 0));
    // 0x266408: 0xc09990e  jal         func_266438
    ctx->pc = 0x266408u;
    SET_GPR_U32(ctx, 31, 0x266410u);
    ctx->pc = 0x26640Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266408u;
    // 0x26640c: 0x26109b10  addiu       $s0, $s0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266438u, 0x266408u, 0x266410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266410u;
label_266410:
    // 0x266410: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x266410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x266414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266418: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x266418u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x26641c: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x26641Cu;
    SET_GPR_U32(ctx, 31, 0x266424u);
    ctx->pc = 0x266420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26641Cu;
    // 0x266420: 0x24060022  addiu       $a2, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x26641Cu, 0x266424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266424u;
label_266424:
    // 0x266424: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x266424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_266428:
    // 0x266428: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x266428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26642c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26642cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266430: 0x3e00008  jr          $ra
    ctx->pc = 0x266430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266430u;
        // 0x266434: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266438u;
}
