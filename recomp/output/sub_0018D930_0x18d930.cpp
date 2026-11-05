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

// Function: sub_0018D930
// Address: 0x18d930 - 0x18da88
void sub_0018D930_0x18d930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D930_0x18d930");
#endif

    switch (ctx->pc) {
        case 0x18d930u: goto label_18d930;
        case 0x18d934u: goto label_18d934;
        case 0x18d938u: goto label_18d938;
        case 0x18d93cu: goto label_18d93c;
        case 0x18d940u: goto label_18d940;
        case 0x18d944u: goto label_18d944;
        case 0x18d948u: goto label_18d948;
        case 0x18d94cu: goto label_18d94c;
        case 0x18d950u: goto label_18d950;
        case 0x18d954u: goto label_18d954;
        case 0x18d958u: goto label_18d958;
        case 0x18d95cu: goto label_18d95c;
        case 0x18d960u: goto label_18d960;
        case 0x18d964u: goto label_18d964;
        case 0x18d968u: goto label_18d968;
        case 0x18d96cu: goto label_18d96c;
        case 0x18d970u: goto label_18d970;
        case 0x18d974u: goto label_18d974;
        case 0x18d978u: goto label_18d978;
        case 0x18d97cu: goto label_18d97c;
        case 0x18d980u: goto label_18d980;
        case 0x18d984u: goto label_18d984;
        case 0x18d988u: goto label_18d988;
        case 0x18d98cu: goto label_18d98c;
        case 0x18d990u: goto label_18d990;
        case 0x18d994u: goto label_18d994;
        case 0x18d998u: goto label_18d998;
        case 0x18d99cu: goto label_18d99c;
        case 0x18d9a0u: goto label_18d9a0;
        case 0x18d9a4u: goto label_18d9a4;
        case 0x18d9a8u: goto label_18d9a8;
        case 0x18d9acu: goto label_18d9ac;
        case 0x18d9b0u: goto label_18d9b0;
        case 0x18d9b4u: goto label_18d9b4;
        case 0x18d9b8u: goto label_18d9b8;
        case 0x18d9bcu: goto label_18d9bc;
        case 0x18d9c0u: goto label_18d9c0;
        case 0x18d9c4u: goto label_18d9c4;
        case 0x18d9c8u: goto label_18d9c8;
        case 0x18d9ccu: goto label_18d9cc;
        case 0x18d9d0u: goto label_18d9d0;
        case 0x18d9d4u: goto label_18d9d4;
        case 0x18d9d8u: goto label_18d9d8;
        case 0x18d9dcu: goto label_18d9dc;
        case 0x18d9e0u: goto label_18d9e0;
        case 0x18d9e4u: goto label_18d9e4;
        case 0x18d9e8u: goto label_18d9e8;
        case 0x18d9ecu: goto label_18d9ec;
        case 0x18d9f0u: goto label_18d9f0;
        case 0x18d9f4u: goto label_18d9f4;
        case 0x18d9f8u: goto label_18d9f8;
        case 0x18d9fcu: goto label_18d9fc;
        case 0x18da00u: goto label_18da00;
        case 0x18da04u: goto label_18da04;
        case 0x18da08u: goto label_18da08;
        case 0x18da0cu: goto label_18da0c;
        case 0x18da10u: goto label_18da10;
        case 0x18da14u: goto label_18da14;
        case 0x18da18u: goto label_18da18;
        case 0x18da1cu: goto label_18da1c;
        case 0x18da20u: goto label_18da20;
        case 0x18da24u: goto label_18da24;
        case 0x18da28u: goto label_18da28;
        case 0x18da2cu: goto label_18da2c;
        case 0x18da30u: goto label_18da30;
        case 0x18da34u: goto label_18da34;
        case 0x18da38u: goto label_18da38;
        case 0x18da3cu: goto label_18da3c;
        case 0x18da40u: goto label_18da40;
        case 0x18da44u: goto label_18da44;
        case 0x18da48u: goto label_18da48;
        case 0x18da4cu: goto label_18da4c;
        case 0x18da50u: goto label_18da50;
        case 0x18da54u: goto label_18da54;
        case 0x18da58u: goto label_18da58;
        case 0x18da5cu: goto label_18da5c;
        case 0x18da60u: goto label_18da60;
        case 0x18da64u: goto label_18da64;
        case 0x18da68u: goto label_18da68;
        case 0x18da6cu: goto label_18da6c;
        case 0x18da70u: goto label_18da70;
        case 0x18da74u: goto label_18da74;
        case 0x18da78u: goto label_18da78;
        case 0x18da7cu: goto label_18da7c;
        case 0x18da80u: goto label_18da80;
        case 0x18da84u: goto label_18da84;
        default: break;
    }

    ctx->pc = 0x18d930u;

label_18d930:
    // 0x18d930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18d930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18d934:
    // 0x18d934: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18d934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_18d938:
    // 0x18d938: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18d938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d93c:
    // 0x18d93c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18d93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18d940:
    // 0x18d940: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18d940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18d944:
    // 0x18d944: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x18d944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_18d948:
    // 0x18d948: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x18d948u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_18d94c:
    // 0x18d94c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18d94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d950:
    // 0x18d950: 0x2484ef60  addiu       $a0, $a0, -0x10A0
    ctx->pc = 0x18d950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963040));
label_18d954:
    // 0x18d954: 0xc0f71b8  jal         func_3DC6E0
label_18d958:
    if (ctx->pc == 0x18D958u) {
        ctx->pc = 0x18D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D954u;
        // 0x18d958: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D95Cu;
        goto label_18d95c;
    }
    ctx->pc = 0x18D954u;
    SET_GPR_U32(ctx, 31, 0x18D95Cu);
    ctx->pc = 0x18D958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D954u;
    // 0x18d958: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC6E0u, 0x18D954u, 0x18D95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D95Cu;
label_18d95c:
    // 0x18d95c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x18d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_18d960:
    // 0x18d960: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x18d960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_18d964:
    // 0x18d964: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x18d964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
label_18d968:
    // 0x18d968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d96c:
    // 0x18d96c: 0xc061a16  jal         func_186858
label_18d970:
    if (ctx->pc == 0x18D970u) {
        ctx->pc = 0x18D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D96Cu;
        // 0x18d970: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D974u;
        goto label_18d974;
    }
    ctx->pc = 0x18D96Cu;
    SET_GPR_U32(ctx, 31, 0x18D974u);
    ctx->pc = 0x18D970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D96Cu;
    // 0x18d970: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D96Cu, 0x18D974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D974u;
label_18d974:
    // 0x18d974: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x18d974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_18d978:
    // 0x18d978: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d97c:
    // 0x18d97c: 0x0  nop
    ctx->pc = 0x18d97cu;
    // NOP
label_18d980:
    // 0x18d980: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x18d980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_18d984:
    // 0x18d984: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x18d984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_18d988:
    // 0x18d988: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_18d98c:
    if (ctx->pc == 0x18D98Cu) {
        ctx->pc = 0x18D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D988u;
        // 0x18d98c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D990u;
        goto label_18d990;
    }
    ctx->pc = 0x18D988u;
    {
        const bool branch_taken_0x18d988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d988) {
            ctx->pc = 0x18D98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D988u;
            // 0x18d98c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D9ACu;
            goto label_18d9ac;
        }
    }
    ctx->pc = 0x18D990u;
label_18d990:
    // 0x18d990: 0xc061a16  jal         func_186858
label_18d994:
    if (ctx->pc == 0x18D994u) {
        ctx->pc = 0x18D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D990u;
        // 0x18d994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D998u;
        goto label_18d998;
    }
    ctx->pc = 0x18D990u;
    SET_GPR_U32(ctx, 31, 0x18D998u);
    ctx->pc = 0x18D994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D990u;
    // 0x18d994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D990u, 0x18D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D998u;
label_18d998:
    // 0x18d998: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d99c:
    // 0x18d99c: 0xc06ee30  jal         func_1BB8C0
label_18d9a0:
    if (ctx->pc == 0x18D9A0u) {
        ctx->pc = 0x18D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D99Cu;
        // 0x18d9a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D9A4u;
        goto label_18d9a4;
    }
    ctx->pc = 0x18D99Cu;
    SET_GPR_U32(ctx, 31, 0x18D9A4u);
    ctx->pc = 0x18D9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D99Cu;
    // 0x18d9a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB8C0u, 0x18D99Cu, 0x18D9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D9A4u;
label_18d9a4:
    // 0x18d9a4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_18d9a8:
    if (ctx->pc == 0x18D9A8u) {
        ctx->pc = 0x18D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9A4u;
        // 0x18d9a8: 0x8e24006c  lw          $a0, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D9ACu;
        goto label_18d9ac;
    }
    ctx->pc = 0x18D9A4u;
    {
        const bool branch_taken_0x18d9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9A4u;
        // 0x18d9a8: 0x8e24006c  lw          $a0, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9a4) {
            ctx->pc = 0x18DA24u;
            goto label_18da24;
        }
    }
    ctx->pc = 0x18D9ACu;
label_18d9ac:
    // 0x18d9ac: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x18d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_18d9b0:
    // 0x18d9b0: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x18d9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
label_18d9b4:
    // 0x18d9b4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x18d9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_18d9b8:
    // 0x18d9b8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_18d9bc:
    if (ctx->pc == 0x18D9BCu) {
        ctx->pc = 0x18D9C0u;
        goto label_18d9c0;
    }
    ctx->pc = 0x18D9B8u;
    {
        const bool branch_taken_0x18d9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d9b8) {
            ctx->pc = 0x18DA0Cu;
            goto label_18da0c;
        }
    }
    ctx->pc = 0x18D9C0u;
label_18d9c0:
    // 0x18d9c0: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x18d9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_18d9c4:
    // 0x18d9c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18d9c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_18d9c8:
    // 0x18d9c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18d9c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_18d9cc:
    // 0x18d9cc: 0xc061a16  jal         func_186858
label_18d9d0:
    if (ctx->pc == 0x18D9D0u) {
        ctx->pc = 0x18D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9CCu;
        // 0x18d9d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D9D4u;
        goto label_18d9d4;
    }
    ctx->pc = 0x18D9CCu;
    SET_GPR_U32(ctx, 31, 0x18D9D4u);
    ctx->pc = 0x18D9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D9CCu;
    // 0x18d9d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D9CCu, 0x18D9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D9D4u;
label_18d9d4:
    // 0x18d9d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18d9d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_18d9d8:
    // 0x18d9d8: 0xc06ee70  jal         func_1BB9C0
label_18d9dc:
    if (ctx->pc == 0x18D9DCu) {
        ctx->pc = 0x18D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9D8u;
        // 0x18d9dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D9E0u;
        goto label_18d9e0;
    }
    ctx->pc = 0x18D9D8u;
    SET_GPR_U32(ctx, 31, 0x18D9E0u);
    ctx->pc = 0x18D9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D9D8u;
    // 0x18d9dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9C0u, 0x18D9D8u, 0x18D9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D9E0u;
label_18d9e0:
    // 0x18d9e0: 0xc061a16  jal         func_186858
label_18d9e4:
    if (ctx->pc == 0x18D9E4u) {
        ctx->pc = 0x18D9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9E0u;
        // 0x18d9e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D9E8u;
        goto label_18d9e8;
    }
    ctx->pc = 0x18D9E0u;
    SET_GPR_U32(ctx, 31, 0x18D9E8u);
    ctx->pc = 0x18D9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D9E0u;
    // 0x18d9e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D9E0u, 0x18D9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D9E8u;
label_18d9e8:
    // 0x18d9e8: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x18d9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_18d9ec:
    // 0x18d9ec: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x18d9ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_18d9f0:
    // 0x18d9f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d9f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d9f4:
    // 0x18d9f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d9f8:
    // 0x18d9f8: 0xe454004c  swc1        $f20, 0x4C($v0)
    ctx->pc = 0x18d9f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
label_18d9fc:
    // 0x18d9fc: 0xc061a16  jal         func_186858
label_18da00:
    if (ctx->pc == 0x18DA00u) {
        ctx->pc = 0x18DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9FCu;
        // 0x18da00: 0xe4400058  swc1        $f0, 0x58($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA04u;
        goto label_18da04;
    }
    ctx->pc = 0x18D9FCu;
    SET_GPR_U32(ctx, 31, 0x18DA04u);
    ctx->pc = 0x18DA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D9FCu;
    // 0x18da00: 0xe4400058  swc1        $f0, 0x58($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18D9FCu, 0x18DA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DA04u;
label_18da04:
    // 0x18da04: 0x10000006  b           . + 4 + (0x6 << 2)
label_18da08:
    if (ctx->pc == 0x18DA08u) {
        ctx->pc = 0x18DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA04u;
        // 0x18da08: 0xe4540050  swc1        $f20, 0x50($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA0Cu;
        goto label_18da0c;
    }
    ctx->pc = 0x18DA04u;
    {
        const bool branch_taken_0x18da04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA04u;
        // 0x18da08: 0xe4540050  swc1        $f20, 0x50($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da04) {
            ctx->pc = 0x18DA20u;
            goto label_18da20;
        }
    }
    ctx->pc = 0x18DA0Cu;
label_18da0c:
    // 0x18da0c: 0xc061a16  jal         func_186858
label_18da10:
    if (ctx->pc == 0x18DA10u) {
        ctx->pc = 0x18DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA0Cu;
        // 0x18da10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA14u;
        goto label_18da14;
    }
    ctx->pc = 0x18DA0Cu;
    SET_GPR_U32(ctx, 31, 0x18DA14u);
    ctx->pc = 0x18DA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DA0Cu;
    // 0x18da10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18DA0Cu, 0x18DA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DA14u;
label_18da14:
    // 0x18da14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18da14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18da18:
    // 0x18da18: 0xc06ee5c  jal         func_1BB970
label_18da1c:
    if (ctx->pc == 0x18DA1Cu) {
        ctx->pc = 0x18DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA18u;
        // 0x18da1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA20u;
        goto label_18da20;
    }
    ctx->pc = 0x18DA18u;
    SET_GPR_U32(ctx, 31, 0x18DA20u);
    ctx->pc = 0x18DA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DA18u;
    // 0x18da1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB970u, 0x18DA18u, 0x18DA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DA20u;
label_18da20:
    // 0x18da20: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x18da20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_18da24:
    // 0x18da24: 0x2605ef60  addiu       $a1, $s0, -0x10A0
    ctx->pc = 0x18da24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963040));
label_18da28:
    // 0x18da28: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18da28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18da2c:
    // 0x18da2c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18da30:
    // 0x18da30: 0x40f809  jalr        $v0
label_18da34:
    if (ctx->pc == 0x18DA34u) {
        ctx->pc = 0x18DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA30u;
        // 0x18da34: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA38u;
        goto label_18da38;
    }
    ctx->pc = 0x18DA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18DA38u);
        ctx->pc = 0x18DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA30u;
        // 0x18da34: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DA30u, 0x18DA38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18DA38u;
label_18da38:
    // 0x18da38: 0xae300070  sw          $s0, 0x70($s1)
    ctx->pc = 0x18da38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 16));
label_18da3c:
    // 0x18da3c: 0xc061a12  jal         func_186848
label_18da40:
    if (ctx->pc == 0x18DA40u) {
        ctx->pc = 0x18DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA3Cu;
        // 0x18da40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA44u;
        goto label_18da44;
    }
    ctx->pc = 0x18DA3Cu;
    SET_GPR_U32(ctx, 31, 0x18DA44u);
    ctx->pc = 0x18DA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DA3Cu;
    // 0x18da40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18DA3Cu, 0x18DA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DA44u;
label_18da44:
    // 0x18da44: 0xac400338  sw          $zero, 0x338($v0)
    ctx->pc = 0x18da44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 824), GPR_U32(ctx, 0));
label_18da48:
    // 0x18da48: 0xae300074  sw          $s0, 0x74($s1)
    ctx->pc = 0x18da48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 16));
label_18da4c:
    // 0x18da4c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x18da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_18da50:
    // 0x18da50: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x18da50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_18da54:
    // 0x18da54: 0x60f809  jalr        $v1
label_18da58:
    if (ctx->pc == 0x18DA58u) {
        ctx->pc = 0x18DA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA54u;
        // 0x18da58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA5Cu;
        goto label_18da5c;
    }
    ctx->pc = 0x18DA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18DA5Cu);
        ctx->pc = 0x18DA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA54u;
        // 0x18da58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DA54u, 0x18DA5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18DA5Cu;
label_18da5c:
    // 0x18da5c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x18da5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_18da60:
    // 0x18da60: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x18da60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_18da64:
    // 0x18da64: 0x40f809  jalr        $v0
label_18da68:
    if (ctx->pc == 0x18DA68u) {
        ctx->pc = 0x18DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA64u;
        // 0x18da68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA6Cu;
        goto label_18da6c;
    }
    ctx->pc = 0x18DA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18DA6Cu);
        ctx->pc = 0x18DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA64u;
        // 0x18da68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DA64u, 0x18DA6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18DA6Cu;
label_18da6c:
    // 0x18da6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18da6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18da70:
    // 0x18da70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18da70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18da74:
    // 0x18da74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18da74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18da78:
    // 0x18da78: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x18da78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18da7c:
    // 0x18da7c: 0x3e00008  jr          $ra
label_18da80:
    if (ctx->pc == 0x18DA80u) {
        ctx->pc = 0x18DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA7Cu;
        // 0x18da80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA84u;
        goto label_18da84;
    }
    ctx->pc = 0x18DA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA7Cu;
        // 0x18da80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DA84u;
label_18da84:
    // 0x18da84: 0x0  nop
    ctx->pc = 0x18da84u;
    // NOP
    ctx->pc = 0x18da88u;
}
