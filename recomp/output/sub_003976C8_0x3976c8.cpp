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

// Function: sub_003976C8
// Address: 0x3976c8 - 0x397798
void sub_003976C8_0x3976c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003976C8_0x3976c8");
#endif

    switch (ctx->pc) {
        case 0x397718u: goto label_397718;
        case 0x397728u: goto label_397728;
        case 0x397730u: goto label_397730;
        case 0x397738u: goto label_397738;
        default: break;
    }

    ctx->pc = 0x3976c8u;

    // 0x3976c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3976c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3976cc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3976ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3976d0: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x3976d0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x3976d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3976d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3976d8: 0x26c31980  addiu       $v1, $s6, 0x1980
    ctx->pc = 0x3976d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 6528));
    // 0x3976dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3976dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3976e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3976e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3976e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3976e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3976e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3976e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3976ec: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3976ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3976f0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3976f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3976f4: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x3976f4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x401980u));
    // 0x3976f8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3976F8u;
    {
        const bool branch_taken_0x3976f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3976FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3976F8u;
        // 0x3976fc: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3976f8) {
            ctx->pc = 0x397750u;
            goto label_397750;
        }
    }
    ctx->pc = 0x397700u;
    // 0x397700: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x397700u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x397704: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x397704u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397708: 0x26b21978  addiu       $s2, $s5, 0x1978
    ctx->pc = 0x397708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 6520));
    // 0x39770c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x39770cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397710: 0x26901958  addiu       $s0, $s4, 0x1958
    ctx->pc = 0x397710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 6488));
    // 0x397714: 0x0  nop
    ctx->pc = 0x397714u;
    // NOP
label_397718:
    // 0x397718: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x397718u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x39771c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39771cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397720: 0xc0f260c  jal         func_3C9830
    ctx->pc = 0x397720u;
    SET_GPR_U32(ctx, 31, 0x397728u);
    ctx->pc = 0x397724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397720u;
    // 0x397724: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9830u, 0x397720u, 0x397728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397728u;
label_397728:
    // 0x397728: 0xc0f2634  jal         func_3C98D0
    ctx->pc = 0x397728u;
    SET_GPR_U32(ctx, 31, 0x397730u);
    ctx->pc = 0x39772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397728u;
    // 0x39772c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C98D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C98D0u, 0x397728u, 0x397730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397730u;
label_397730:
    // 0x397730: 0xc0e5b88  jal         func_396E20
    ctx->pc = 0x397730u;
    SET_GPR_U32(ctx, 31, 0x397738u);
    ctx->pc = 0x397734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397730u;
    // 0x397734: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396E20u, 0x397730u, 0x397738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397738u;
label_397738:
    // 0x397738: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x397738u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x39773c: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x39773Cu;
    {
        const bool branch_taken_0x39773c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x397740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39773Cu;
        // 0x397740: 0x26c21980  addiu       $v0, $s6, 0x1980 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 6528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39773c) {
            ctx->pc = 0x397718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397718;
        }
    }
    ctx->pc = 0x397744u;
    // 0x397744: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x397744u;
    {
        const bool branch_taken_0x397744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397744u;
        // 0x397748: 0xdfb60030  ld          $s6, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397744) {
            ctx->pc = 0x39775Cu;
            goto label_39775c;
        }
    }
    ctx->pc = 0x39774Cu;
    // 0x39774c: 0x0  nop
    ctx->pc = 0x39774cu;
    // NOP
label_397750:
    // 0x397750: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x397750u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x397754: 0x26c21980  addiu       $v0, $s6, 0x1980
    ctx->pc = 0x397754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 6528));
    // 0x397758: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x397758u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39775c:
    // 0x39775c: 0x26a31978  addiu       $v1, $s5, 0x1978
    ctx->pc = 0x39775cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 6520));
    // 0x397760: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x397760u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x397764: 0x26841958  addiu       $a0, $s4, 0x1958
    ctx->pc = 0x397764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 6488));
    // 0x397768: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x397768u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39776c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39776cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397770: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x397770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x397774: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x397774u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x397778: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x397778u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39777c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x39777cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x397780: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x397780u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x397784: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x397784u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x397788: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x397788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x39778c: 0x3e00008  jr          $ra
    ctx->pc = 0x39778Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39778Cu;
        // 0x397790: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39778Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397794u;
    // 0x397794: 0x0  nop
    ctx->pc = 0x397794u;
    // NOP
    ctx->pc = 0x397798u;
}
