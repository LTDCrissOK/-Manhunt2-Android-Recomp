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

// Function: sub_00372960
// Address: 0x372960 - 0x3729f0
void sub_00372960_0x372960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372960_0x372960");
#endif

    switch (ctx->pc) {
        case 0x37297cu: goto label_37297c;
        case 0x3729acu: goto label_3729ac;
        case 0x3729d8u: goto label_3729d8;
        default: break;
    }

    ctx->pc = 0x372960u;

    // 0x372960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x372960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x372964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x372964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x372968: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x372968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x37296c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37296cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372970: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x372970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x372974: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x372974u;
    SET_GPR_U32(ctx, 31, 0x37297Cu);
    ctx->pc = 0x372978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372974u;
    // 0x372978: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x372974u, 0x37297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37297Cu;
label_37297c:
    // 0x37297c: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x37297cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x372980: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x372980u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x372984: 0x8cc25ac8  lw          $v0, 0x5AC8($a2)
    ctx->pc = 0x372984u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x655AC8u));
    // 0x372988: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x372988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37298c: 0x24e55ff8  addiu       $a1, $a3, 0x5FF8
    ctx->pc = 0x37298cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 24568));
    // 0x372990: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x372990u;
    {
        const bool branch_taken_0x372990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372990u;
        // 0x372994: 0x24c35ac8  addiu       $v1, $a2, 0x5AC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 23240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372990) {
            ctx->pc = 0x3729A8u;
            goto label_3729a8;
        }
    }
    ctx->pc = 0x372998u;
    // 0x372998: 0xacd05ac8  sw          $s0, 0x5AC8($a2)
    ctx->pc = 0x372998u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 23240), GPR_U32(ctx, 16));
    // 0x37299c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x37299Cu;
    {
        const bool branch_taken_0x37299c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3729A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37299Cu;
        // 0x3729a0: 0xacf15ff8  sw          $s1, 0x5FF8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24568), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37299c) {
            ctx->pc = 0x3729D0u;
            goto label_3729d0;
        }
    }
    ctx->pc = 0x3729A4u;
    // 0x3729a4: 0x0  nop
    ctx->pc = 0x3729a4u;
    // NOP
label_3729a8:
    // 0x3729a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3729a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3729ac:
    // 0x3729ac: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3729acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3729b0: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x3729b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3729b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3729B4u;
    {
        const bool branch_taken_0x3729b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3729B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3729B4u;
        // 0x3729b8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3729b4) {
            ctx->pc = 0x3729D0u;
            goto label_3729d0;
        }
    }
    ctx->pc = 0x3729BCu;
    // 0x3729bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3729bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3729c0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3729C0u;
    {
        const bool branch_taken_0x3729c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3729C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3729C0u;
        // 0x3729c4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3729c0) {
            ctx->pc = 0x3729ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3729ac;
        }
    }
    ctx->pc = 0x3729C8u;
    // 0x3729c8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x3729c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x3729cc: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x3729ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
label_3729d0:
    // 0x3729d0: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3729D0u;
    SET_GPR_U32(ctx, 31, 0x3729D8u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3729D0u, 0x3729D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3729D8u;
label_3729d8:
    // 0x3729d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3729d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3729dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3729dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3729e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3729e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3729e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3729E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3729E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3729E4u;
        // 0x3729e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3729E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3729ECu;
    // 0x3729ec: 0x0  nop
    ctx->pc = 0x3729ecu;
    // NOP
    ctx->pc = 0x3729f0u;
}
