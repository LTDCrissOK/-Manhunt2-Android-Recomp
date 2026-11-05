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

// Function: sub_003B0470
// Address: 0x3b0470 - 0x3b0508
void sub_003B0470_0x3b0470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0470_0x3b0470");
#endif

    switch (ctx->pc) {
        case 0x3b0470u: goto label_3b0470;
        case 0x3b0474u: goto label_3b0474;
        case 0x3b0478u: goto label_3b0478;
        case 0x3b047cu: goto label_3b047c;
        case 0x3b0480u: goto label_3b0480;
        case 0x3b0484u: goto label_3b0484;
        case 0x3b0488u: goto label_3b0488;
        case 0x3b048cu: goto label_3b048c;
        case 0x3b0490u: goto label_3b0490;
        case 0x3b0494u: goto label_3b0494;
        case 0x3b0498u: goto label_3b0498;
        case 0x3b049cu: goto label_3b049c;
        case 0x3b04a0u: goto label_3b04a0;
        case 0x3b04a4u: goto label_3b04a4;
        case 0x3b04a8u: goto label_3b04a8;
        case 0x3b04acu: goto label_3b04ac;
        case 0x3b04b0u: goto label_3b04b0;
        case 0x3b04b4u: goto label_3b04b4;
        case 0x3b04b8u: goto label_3b04b8;
        case 0x3b04bcu: goto label_3b04bc;
        case 0x3b04c0u: goto label_3b04c0;
        case 0x3b04c4u: goto label_3b04c4;
        case 0x3b04c8u: goto label_3b04c8;
        case 0x3b04ccu: goto label_3b04cc;
        case 0x3b04d0u: goto label_3b04d0;
        case 0x3b04d4u: goto label_3b04d4;
        case 0x3b04d8u: goto label_3b04d8;
        case 0x3b04dcu: goto label_3b04dc;
        case 0x3b04e0u: goto label_3b04e0;
        case 0x3b04e4u: goto label_3b04e4;
        case 0x3b04e8u: goto label_3b04e8;
        case 0x3b04ecu: goto label_3b04ec;
        case 0x3b04f0u: goto label_3b04f0;
        case 0x3b04f4u: goto label_3b04f4;
        case 0x3b04f8u: goto label_3b04f8;
        case 0x3b04fcu: goto label_3b04fc;
        case 0x3b0500u: goto label_3b0500;
        case 0x3b0504u: goto label_3b0504;
        default: break;
    }

    ctx->pc = 0x3b0470u;

label_3b0470:
    // 0x3b0470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b0470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b0474:
    // 0x3b0474: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b0474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3b0478:
    // 0x3b0478: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b0478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b047c:
    // 0x3b047c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b047cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3b0480:
    // 0x3b0480: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3b0484:
    if (ctx->pc == 0x3B0484u) {
        ctx->pc = 0x3B0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0480u;
        // 0x3b0484: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0488u;
        goto label_3b0488;
    }
    ctx->pc = 0x3B0480u;
    {
        const bool branch_taken_0x3b0480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0480u;
        // 0x3b0484: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0480) {
            ctx->pc = 0x3B0490u;
            goto label_3b0490;
        }
    }
    ctx->pc = 0x3B0488u;
label_3b0488:
    // 0x3b0488: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
label_3b048c:
    if (ctx->pc == 0x3B048Cu) {
        ctx->pc = 0x3B048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0488u;
        // 0x3b048c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0490u;
        goto label_3b0490;
    }
    ctx->pc = 0x3B0488u;
    {
        const bool branch_taken_0x3b0488 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0488u;
        // 0x3b048c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0488) {
            ctx->pc = 0x3B04B0u;
            goto label_3b04b0;
        }
    }
    ctx->pc = 0x3B0490u;
label_3b0490:
    // 0x3b0490: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b0490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3b0494:
    // 0x3b0494: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b0494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b0498:
    // 0x3b0498: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b0498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3b049c:
    // 0x3b049c: 0x2484fdf0  addiu       $a0, $a0, -0x210
    ctx->pc = 0x3b049cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966768));
label_3b04a0:
    // 0x3b04a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b04a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b04a4:
    // 0x3b04a4: 0x80eb292  j           func_3ACA48
label_3b04a8:
    if (ctx->pc == 0x3B04A8u) {
        ctx->pc = 0x3B04A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B04A4u;
        // 0x3b04a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B04ACu;
        goto label_3b04ac;
    }
    ctx->pc = 0x3B04A4u;
    ctx->pc = 0x3B04A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B04A4u;
    // 0x3b04a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA48u;
    sub_003ACA48_0x3aca48(rdram, ctx, runtime); return;
    ctx->pc = 0x3B04ACu;
label_3b04ac:
    // 0x3b04ac: 0x0  nop
    ctx->pc = 0x3b04acu;
    // NOP
label_3b04b0:
    // 0x3b04b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b04b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b04b4:
    // 0x3b04b4: 0x24504780  addiu       $s0, $v0, 0x4780
    ctx->pc = 0x3b04b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 18304));
label_3b04b8:
    // 0x3b04b8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x3b04b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3b04bc:
    // 0x3b04bc: 0xc0efd60  jal         func_3BF580
label_3b04c0:
    if (ctx->pc == 0x3B04C0u) {
        ctx->pc = 0x3B04C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B04BCu;
        // 0x3b04c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B04C4u;
        goto label_3b04c4;
    }
    ctx->pc = 0x3B04BCu;
    SET_GPR_U32(ctx, 31, 0x3B04C4u);
    ctx->pc = 0x3B04C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B04BCu;
    // 0x3b04c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x3B04BCu, 0x3B04C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B04C4u;
label_3b04c4:
    // 0x3b04c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b04c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b04c8:
    // 0x3b04c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b04c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b04cc:
    // 0x3b04cc: 0xc0efc80  jal         func_3BF200
label_3b04d0:
    if (ctx->pc == 0x3B04D0u) {
        ctx->pc = 0x3B04D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B04CCu;
        // 0x3b04d0: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B04D4u;
        goto label_3b04d4;
    }
    ctx->pc = 0x3B04CCu;
    SET_GPR_U32(ctx, 31, 0x3B04D4u);
    ctx->pc = 0x3B04D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B04CCu;
    // 0x3b04d0: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF200u, 0x3B04CCu, 0x3B04D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B04D4u;
label_3b04d4:
    // 0x3b04d4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3b04d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_3b04d8:
    // 0x3b04d8: 0x8c634778  lw          $v1, 0x4778($v1)
    ctx->pc = 0x3b04d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18296)));
label_3b04dc:
    // 0x3b04dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3b04e0:
    if (ctx->pc == 0x3B04E0u) {
        ctx->pc = 0x3B04E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B04DCu;
        // 0x3b04e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B04E4u;
        goto label_3b04e4;
    }
    ctx->pc = 0x3B04DCu;
    {
        const bool branch_taken_0x3b04dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B04E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B04DCu;
        // 0x3b04e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b04dc) {
            ctx->pc = 0x3B04F0u;
            goto label_3b04f0;
        }
    }
    ctx->pc = 0x3B04E4u;
label_3b04e4:
    // 0x3b04e4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b04e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3b04e8:
    // 0x3b04e8: 0x60f809  jalr        $v1
label_3b04ec:
    if (ctx->pc == 0x3B04ECu) {
        ctx->pc = 0x3B04ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B04E8u;
        // 0x3b04ec: 0x8c44477c  lw          $a0, 0x477C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B04F0u;
        goto label_3b04f0;
    }
    ctx->pc = 0x3B04E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B04F0u);
        ctx->pc = 0x3B04ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B04E8u;
        // 0x3b04ec: 0x8c44477c  lw          $a0, 0x477C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18300)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B04E8u, 0x3B04F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B04F0u;
label_3b04f0:
    // 0x3b04f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b04f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b04f4:
    // 0x3b04f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b04f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b04f8:
    // 0x3b04f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b04f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3b04fc:
    // 0x3b04fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b04fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b0500:
    // 0x3b0500: 0x80eb292  j           func_3ACA48
label_3b0504:
    if (ctx->pc == 0x3B0504u) {
        ctx->pc = 0x3B0504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0500u;
        // 0x3b0504: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0508u;
        goto label_fallthrough_0x3b0500;
    }
    ctx->pc = 0x3B0500u;
    ctx->pc = 0x3B0504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0500u;
    // 0x3b0504: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA48u;
    sub_003ACA48_0x3aca48(rdram, ctx, runtime); return;
label_fallthrough_0x3b0500:
    ctx->pc = 0x3B0508u;
}
