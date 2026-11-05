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

// Function: sub_00133368
// Address: 0x133368 - 0x1333f0
void sub_00133368_0x133368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133368_0x133368");
#endif

    switch (ctx->pc) {
        case 0x133388u: goto label_133388;
        case 0x1333acu: goto label_1333ac;
        case 0x1333b8u: goto label_1333b8;
        case 0x1333c4u: goto label_1333c4;
        case 0x1333d8u: goto label_1333d8;
        default: break;
    }

    ctx->pc = 0x133368u;

    // 0x133368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13336c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13336cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x133370: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x133370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x133374: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133378: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x133378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13337c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13337cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x133380: 0xc042444  jal         func_109110
    ctx->pc = 0x133380u;
    SET_GPR_U32(ctx, 31, 0x133388u);
    ctx->pc = 0x133384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133380u;
    // 0x133384: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109110u, 0x133380u, 0x133388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133388u;
label_133388:
    // 0x133388: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x133388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x13338c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13338cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x133390: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x133390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x133394: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x133394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x133398: 0x8c72020c  lw          $s2, 0x20C($v1)
    ctx->pc = 0x133398u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x13339c: 0x5240000f  beql        $s2, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x13339Cu;
    {
        const bool branch_taken_0x13339c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x13339c) {
            ctx->pc = 0x1333A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13339Cu;
            // 0x1333a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1333DCu;
            goto label_1333dc;
        }
    }
    ctx->pc = 0x1333A4u;
    // 0x1333a4: 0xc042442  jal         func_109108
    ctx->pc = 0x1333A4u;
    SET_GPR_U32(ctx, 31, 0x1333ACu);
    ctx->pc = 0x1333A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1333A4u;
    // 0x1333a8: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109108u, 0x1333A4u, 0x1333ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1333ACu;
label_1333ac:
    // 0x1333ac: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1333acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1333b0: 0xc04244e  jal         func_109138
    ctx->pc = 0x1333B0u;
    SET_GPR_U32(ctx, 31, 0x1333B8u);
    ctx->pc = 0x1333B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1333B0u;
    // 0x1333b4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109138u, 0x1333B0u, 0x1333B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1333B8u;
label_1333b8:
    // 0x1333b8: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1333b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1333bc: 0xc04244c  jal         func_109130
    ctx->pc = 0x1333BCu;
    SET_GPR_U32(ctx, 31, 0x1333C4u);
    ctx->pc = 0x1333C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1333BCu;
    // 0x1333c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109130u, 0x1333BCu, 0x1333C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1333C4u;
label_1333c4:
    // 0x1333c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1333c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1333c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1333c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1333cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1333ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1333d0: 0xc043b9e  jal         func_10EE78
    ctx->pc = 0x1333D0u;
    SET_GPR_U32(ctx, 31, 0x1333D8u);
    ctx->pc = 0x1333D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1333D0u;
    // 0x1333d4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EE78u, 0x1333D0u, 0x1333D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1333D8u;
label_1333d8:
    // 0x1333d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1333d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1333dc:
    // 0x1333dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1333dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1333e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1333e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1333e4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1333e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1333e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1333E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1333ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1333E8u;
        // 0x1333ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1333E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1333F0u;
}
