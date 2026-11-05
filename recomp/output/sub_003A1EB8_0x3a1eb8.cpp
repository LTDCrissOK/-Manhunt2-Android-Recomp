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

// Function: sub_003A1EB8
// Address: 0x3a1eb8 - 0x3a1fe0
void sub_003A1EB8_0x3a1eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1EB8_0x3a1eb8");
#endif

    switch (ctx->pc) {
        case 0x3a1eb8u: goto label_3a1eb8;
        case 0x3a1ebcu: goto label_3a1ebc;
        case 0x3a1ec0u: goto label_3a1ec0;
        case 0x3a1ec4u: goto label_3a1ec4;
        case 0x3a1ec8u: goto label_3a1ec8;
        case 0x3a1eccu: goto label_3a1ecc;
        case 0x3a1ed0u: goto label_3a1ed0;
        case 0x3a1ed4u: goto label_3a1ed4;
        case 0x3a1ed8u: goto label_3a1ed8;
        case 0x3a1edcu: goto label_3a1edc;
        case 0x3a1ee0u: goto label_3a1ee0;
        case 0x3a1ee4u: goto label_3a1ee4;
        case 0x3a1ee8u: goto label_3a1ee8;
        case 0x3a1eecu: goto label_3a1eec;
        case 0x3a1ef0u: goto label_3a1ef0;
        case 0x3a1ef4u: goto label_3a1ef4;
        case 0x3a1ef8u: goto label_3a1ef8;
        case 0x3a1efcu: goto label_3a1efc;
        case 0x3a1f00u: goto label_3a1f00;
        case 0x3a1f04u: goto label_3a1f04;
        case 0x3a1f08u: goto label_3a1f08;
        case 0x3a1f0cu: goto label_3a1f0c;
        case 0x3a1f10u: goto label_3a1f10;
        case 0x3a1f14u: goto label_3a1f14;
        case 0x3a1f18u: goto label_3a1f18;
        case 0x3a1f1cu: goto label_3a1f1c;
        case 0x3a1f20u: goto label_3a1f20;
        case 0x3a1f24u: goto label_3a1f24;
        case 0x3a1f28u: goto label_3a1f28;
        case 0x3a1f2cu: goto label_3a1f2c;
        case 0x3a1f30u: goto label_3a1f30;
        case 0x3a1f34u: goto label_3a1f34;
        case 0x3a1f38u: goto label_3a1f38;
        case 0x3a1f3cu: goto label_3a1f3c;
        case 0x3a1f40u: goto label_3a1f40;
        case 0x3a1f44u: goto label_3a1f44;
        case 0x3a1f48u: goto label_3a1f48;
        case 0x3a1f4cu: goto label_3a1f4c;
        case 0x3a1f50u: goto label_3a1f50;
        case 0x3a1f54u: goto label_3a1f54;
        case 0x3a1f58u: goto label_3a1f58;
        case 0x3a1f5cu: goto label_3a1f5c;
        case 0x3a1f60u: goto label_3a1f60;
        case 0x3a1f64u: goto label_3a1f64;
        case 0x3a1f68u: goto label_3a1f68;
        case 0x3a1f6cu: goto label_3a1f6c;
        case 0x3a1f70u: goto label_3a1f70;
        case 0x3a1f74u: goto label_3a1f74;
        case 0x3a1f78u: goto label_3a1f78;
        case 0x3a1f7cu: goto label_3a1f7c;
        case 0x3a1f80u: goto label_3a1f80;
        case 0x3a1f84u: goto label_3a1f84;
        case 0x3a1f88u: goto label_3a1f88;
        case 0x3a1f8cu: goto label_3a1f8c;
        case 0x3a1f90u: goto label_3a1f90;
        case 0x3a1f94u: goto label_3a1f94;
        case 0x3a1f98u: goto label_3a1f98;
        case 0x3a1f9cu: goto label_3a1f9c;
        case 0x3a1fa0u: goto label_3a1fa0;
        case 0x3a1fa4u: goto label_3a1fa4;
        case 0x3a1fa8u: goto label_3a1fa8;
        case 0x3a1facu: goto label_3a1fac;
        case 0x3a1fb0u: goto label_3a1fb0;
        case 0x3a1fb4u: goto label_3a1fb4;
        case 0x3a1fb8u: goto label_3a1fb8;
        case 0x3a1fbcu: goto label_3a1fbc;
        case 0x3a1fc0u: goto label_3a1fc0;
        case 0x3a1fc4u: goto label_3a1fc4;
        case 0x3a1fc8u: goto label_3a1fc8;
        case 0x3a1fccu: goto label_3a1fcc;
        case 0x3a1fd0u: goto label_3a1fd0;
        case 0x3a1fd4u: goto label_3a1fd4;
        case 0x3a1fd8u: goto label_3a1fd8;
        case 0x3a1fdcu: goto label_3a1fdc;
        default: break;
    }

    ctx->pc = 0x3a1eb8u;

label_3a1eb8:
    // 0x3a1eb8: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x3a1eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_3a1ebc:
    // 0x3a1ebc: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x3a1ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_3a1ec0:
    // 0x3a1ec0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a1ec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a1ec4:
    // 0x3a1ec4: 0xffb30278  sd          $s3, 0x278($sp)
    ctx->pc = 0x3a1ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 19));
label_3a1ec8:
    // 0x3a1ec8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3a1ec8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a1ecc:
    // 0x3a1ecc: 0xffb40280  sd          $s4, 0x280($sp)
    ctx->pc = 0x3a1eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 20));
label_3a1ed0:
    // 0x3a1ed0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3a1ed0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a1ed4:
    // 0x3a1ed4: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x3a1ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_3a1ed8:
    // 0x3a1ed8: 0xffb20270  sd          $s2, 0x270($sp)
    ctx->pc = 0x3a1ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
label_3a1edc:
    // 0x3a1edc: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_3a1ee0:
    if (ctx->pc == 0x3A1EE0u) {
        ctx->pc = 0x3A1EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1EDCu;
        // 0x3a1ee0: 0xffbf0288  sd          $ra, 0x288($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1EE4u;
        goto label_3a1ee4;
    }
    ctx->pc = 0x3A1EDCu;
    {
        const bool branch_taken_0x3a1edc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1EDCu;
        // 0x3a1ee0: 0xffbf0288  sd          $ra, 0x288($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1edc) {
            ctx->pc = 0x3A1EF0u;
            goto label_3a1ef0;
        }
    }
    ctx->pc = 0x3A1EE4u;
label_3a1ee4:
    // 0x3a1ee4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a1ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a1ee8:
    // 0x3a1ee8: 0x10000032  b           . + 4 + (0x32 << 2)
label_3a1eec:
    if (ctx->pc == 0x3A1EECu) {
        ctx->pc = 0x3A1EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1EE8u;
        // 0x3a1eec: 0x2484c680  addiu       $a0, $a0, -0x3980 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1EF0u;
        goto label_3a1ef0;
    }
    ctx->pc = 0x3A1EE8u;
    {
        const bool branch_taken_0x3a1ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1EE8u;
        // 0x3a1eec: 0x2484c680  addiu       $a0, $a0, -0x3980 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1ee8) {
            ctx->pc = 0x3A1FB4u;
            goto label_3a1fb4;
        }
    }
    ctx->pc = 0x3A1EF0u;
label_3a1ef0:
    // 0x3a1ef0: 0x27b20130  addiu       $s2, $sp, 0x130
    ctx->pc = 0x3a1ef0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3a1ef4:
    // 0x3a1ef4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a1ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a1ef8:
    // 0x3a1ef8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a1ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a1efc:
    // 0x3a1efc: 0xc0e8816  jal         func_3A2058
label_3a1f00:
    if (ctx->pc == 0x3A1F00u) {
        ctx->pc = 0x3A1F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1EFCu;
        // 0x3a1f00: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1F04u;
        goto label_3a1f04;
    }
    ctx->pc = 0x3A1EFCu;
    SET_GPR_U32(ctx, 31, 0x3A1F04u);
    ctx->pc = 0x3A1F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1EFCu;
    // 0x3a1f00: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2058u, 0x3A1EFCu, 0x3A1F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1F04u;
label_3a1f04:
    // 0x3a1f04: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x3a1f04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_3a1f08:
    // 0x3a1f08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3a1f0c:
    if (ctx->pc == 0x3A1F0Cu) {
        ctx->pc = 0x3A1F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F08u;
        // 0x3a1f0c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1F10u;
        goto label_3a1f10;
    }
    ctx->pc = 0x3A1F08u;
    {
        const bool branch_taken_0x3a1f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F08u;
        // 0x3a1f0c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1f08) {
            ctx->pc = 0x3A1F18u;
            goto label_3a1f18;
        }
    }
    ctx->pc = 0x3A1F10u;
label_3a1f10:
    // 0x3a1f10: 0x10000028  b           . + 4 + (0x28 << 2)
label_3a1f14:
    if (ctx->pc == 0x3A1F14u) {
        ctx->pc = 0x3A1F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F10u;
        // 0x3a1f14: 0x2484c680  addiu       $a0, $a0, -0x3980 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1F18u;
        goto label_3a1f18;
    }
    ctx->pc = 0x3A1F10u;
    {
        const bool branch_taken_0x3a1f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F10u;
        // 0x3a1f14: 0x2484c680  addiu       $a0, $a0, -0x3980 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1f10) {
            ctx->pc = 0x3A1FB4u;
            goto label_3a1fb4;
        }
    }
    ctx->pc = 0x3A1F18u;
label_3a1f18:
    // 0x3a1f18: 0xc0e87f8  jal         func_3A1FE0
label_3a1f1c:
    if (ctx->pc == 0x3A1F1Cu) {
        ctx->pc = 0x3A1F20u;
        goto label_3a1f20;
    }
    ctx->pc = 0x3A1F18u;
    SET_GPR_U32(ctx, 31, 0x3A1F20u);
    ctx->pc = 0x3A1FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1FE0u, 0x3A1F18u, 0x3A1F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1F20u;
label_3a1f20:
    // 0x3a1f20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a1f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a1f24:
    // 0x3a1f24: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_3a1f28:
    if (ctx->pc == 0x3A1F28u) {
        ctx->pc = 0x3A1F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F24u;
        // 0x3a1f28: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1F2Cu;
        goto label_3a1f2c;
    }
    ctx->pc = 0x3A1F24u;
    {
        const bool branch_taken_0x3a1f24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F24u;
        // 0x3a1f28: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1f24) {
            ctx->pc = 0x3A1F38u;
            goto label_3a1f38;
        }
    }
    ctx->pc = 0x3A1F2Cu;
label_3a1f2c:
    // 0x3a1f2c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a1f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a1f30:
    // 0x3a1f30: 0x10000020  b           . + 4 + (0x20 << 2)
label_3a1f34:
    if (ctx->pc == 0x3A1F34u) {
        ctx->pc = 0x3A1F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F30u;
        // 0x3a1f34: 0x2484c6a0  addiu       $a0, $a0, -0x3960 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1F38u;
        goto label_3a1f38;
    }
    ctx->pc = 0x3A1F30u;
    {
        const bool branch_taken_0x3a1f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F30u;
        // 0x3a1f34: 0x2484c6a0  addiu       $a0, $a0, -0x3960 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1f30) {
            ctx->pc = 0x3A1FB4u;
            goto label_3a1fb4;
        }
    }
    ctx->pc = 0x3A1F38u;
label_3a1f38:
    // 0x3a1f38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a1f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a1f3c:
    // 0x3a1f3c: 0xc0e8784  jal         func_3A1E10
label_3a1f40:
    if (ctx->pc == 0x3A1F40u) {
        ctx->pc = 0x3A1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F3Cu;
        // 0x3a1f40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1F44u;
        goto label_3a1f44;
    }
    ctx->pc = 0x3A1F3Cu;
    SET_GPR_U32(ctx, 31, 0x3A1F44u);
    ctx->pc = 0x3A1F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1F3Cu;
    // 0x3a1f40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1E10u, 0x3A1F3Cu, 0x3A1F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1F44u;
label_3a1f44:
    // 0x3a1f44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3a1f48:
    if (ctx->pc == 0x3A1F48u) {
        ctx->pc = 0x3A1F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F44u;
        // 0x3a1f48: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1F4Cu;
        goto label_3a1f4c;
    }
    ctx->pc = 0x3A1F44u;
    {
        const bool branch_taken_0x3a1f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F44u;
        // 0x3a1f48: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1f44) {
            ctx->pc = 0x3A1F60u;
            goto label_3a1f60;
        }
    }
    ctx->pc = 0x3A1F4Cu;
label_3a1f4c:
    // 0x3a1f4c: 0xc0e8812  jal         func_3A2048
label_3a1f50:
    if (ctx->pc == 0x3A1F50u) {
        ctx->pc = 0x3A1F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F4Cu;
        // 0x3a1f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1F54u;
        goto label_3a1f54;
    }
    ctx->pc = 0x3A1F4Cu;
    SET_GPR_U32(ctx, 31, 0x3A1F54u);
    ctx->pc = 0x3A1F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1F4Cu;
    // 0x3a1f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2048u, 0x3A1F4Cu, 0x3A1F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1F54u;
label_3a1f54:
    // 0x3a1f54: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a1f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a1f58:
    // 0x3a1f58: 0x10000016  b           . + 4 + (0x16 << 2)
label_3a1f5c:
    if (ctx->pc == 0x3A1F5Cu) {
        ctx->pc = 0x3A1F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F58u;
        // 0x3a1f5c: 0x2484c6e8  addiu       $a0, $a0, -0x3918 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1F60u;
        goto label_3a1f60;
    }
    ctx->pc = 0x3A1F58u;
    {
        const bool branch_taken_0x3a1f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F58u;
        // 0x3a1f5c: 0x2484c6e8  addiu       $a0, $a0, -0x3918 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1f58) {
            ctx->pc = 0x3A1FB4u;
            goto label_3a1fb4;
        }
    }
    ctx->pc = 0x3A1F60u;
label_3a1f60:
    // 0x3a1f60: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3a1f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3a1f64:
    // 0x3a1f64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3a1f68:
    if (ctx->pc == 0x3A1F68u) {
        ctx->pc = 0x3A1F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F64u;
        // 0x3a1f68: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1F6Cu;
        goto label_3a1f6c;
    }
    ctx->pc = 0x3A1F64u;
    {
        const bool branch_taken_0x3a1f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F64u;
        // 0x3a1f68: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1f64) {
            ctx->pc = 0x3A1F80u;
            goto label_3a1f80;
        }
    }
    ctx->pc = 0x3A1F6Cu;
label_3a1f6c:
    // 0x3a1f6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a1f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a1f70:
    // 0x3a1f70: 0x40f809  jalr        $v0
label_3a1f74:
    if (ctx->pc == 0x3A1F74u) {
        ctx->pc = 0x3A1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F70u;
        // 0x3a1f74: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1F78u;
        goto label_3a1f78;
    }
    ctx->pc = 0x3A1F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A1F78u);
        ctx->pc = 0x3A1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F70u;
        // 0x3a1f74: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1F70u, 0x3A1F78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1F78u;
label_3a1f78:
    // 0x3a1f78: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a1f7c:
    if (ctx->pc == 0x3A1F7Cu) {
        ctx->pc = 0x3A1F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F78u;
        // 0x3a1f7c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1F80u;
        goto label_3a1f80;
    }
    ctx->pc = 0x3A1F78u;
    {
        const bool branch_taken_0x3a1f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F78u;
        // 0x3a1f7c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1f78) {
            ctx->pc = 0x3A1F98u;
            goto label_3a1f98;
        }
    }
    ctx->pc = 0x3A1F80u;
label_3a1f80:
    // 0x3a1f80: 0xc0e8812  jal         func_3A2048
label_3a1f84:
    if (ctx->pc == 0x3A1F84u) {
        ctx->pc = 0x3A1F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F80u;
        // 0x3a1f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1F88u;
        goto label_3a1f88;
    }
    ctx->pc = 0x3A1F80u;
    SET_GPR_U32(ctx, 31, 0x3A1F88u);
    ctx->pc = 0x3A1F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1F80u;
    // 0x3a1f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2048u, 0x3A1F80u, 0x3A1F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1F88u;
label_3a1f88:
    // 0x3a1f88: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a1f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a1f8c:
    // 0x3a1f8c: 0x10000009  b           . + 4 + (0x9 << 2)
label_3a1f90:
    if (ctx->pc == 0x3A1F90u) {
        ctx->pc = 0x3A1F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F8Cu;
        // 0x3a1f90: 0x2484c708  addiu       $a0, $a0, -0x38F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1F94u;
        goto label_3a1f94;
    }
    ctx->pc = 0x3A1F8Cu;
    {
        const bool branch_taken_0x3a1f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F8Cu;
        // 0x3a1f90: 0x2484c708  addiu       $a0, $a0, -0x38F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1f8c) {
            ctx->pc = 0x3A1FB4u;
            goto label_3a1fb4;
        }
    }
    ctx->pc = 0x3A1F94u;
label_3a1f94:
    // 0x3a1f94: 0x0  nop
    ctx->pc = 0x3a1f94u;
    // NOP
label_3a1f98:
    // 0x3a1f98: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3a1f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3a1f9c:
    // 0x3a1f9c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_3a1fa0:
    if (ctx->pc == 0x3A1FA0u) {
        ctx->pc = 0x3A1FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F9Cu;
        // 0x3a1fa0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1FA4u;
        goto label_3a1fa4;
    }
    ctx->pc = 0x3A1F9Cu;
    {
        const bool branch_taken_0x3a1f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1f9c) {
            ctx->pc = 0x3A1FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1F9Cu;
            // 0x3a1fa0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1FC0u;
            goto label_3a1fc0;
        }
    }
    ctx->pc = 0x3A1FA4u;
label_3a1fa4:
    // 0x3a1fa4: 0xc0e8812  jal         func_3A2048
label_3a1fa8:
    if (ctx->pc == 0x3A1FA8u) {
        ctx->pc = 0x3A1FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1FA4u;
        // 0x3a1fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1FACu;
        goto label_3a1fac;
    }
    ctx->pc = 0x3A1FA4u;
    SET_GPR_U32(ctx, 31, 0x3A1FACu);
    ctx->pc = 0x3A1FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1FA4u;
    // 0x3a1fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2048u, 0x3A1FA4u, 0x3A1FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1FACu;
label_3a1fac:
    // 0x3a1fac: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a1facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a1fb0:
    // 0x3a1fb0: 0x2484c720  addiu       $a0, $a0, -0x38E0
    ctx->pc = 0x3a1fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952736));
label_3a1fb4:
    // 0x3a1fb4: 0xc0e8688  jal         func_3A1A20
label_3a1fb8:
    if (ctx->pc == 0x3A1FB8u) {
        ctx->pc = 0x3A1FBCu;
        goto label_3a1fbc;
    }
    ctx->pc = 0x3A1FB4u;
    SET_GPR_U32(ctx, 31, 0x3A1FBCu);
    ctx->pc = 0x3A1A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1A20u, 0x3A1FB4u, 0x3A1FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1FBCu;
label_3a1fbc:
    // 0x3a1fbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a1fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a1fc0:
    // 0x3a1fc0: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x3a1fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_3a1fc4:
    // 0x3a1fc4: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x3a1fc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_3a1fc8:
    // 0x3a1fc8: 0xdfb20270  ld          $s2, 0x270($sp)
    ctx->pc = 0x3a1fc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_3a1fcc:
    // 0x3a1fcc: 0xdfb30278  ld          $s3, 0x278($sp)
    ctx->pc = 0x3a1fccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_3a1fd0:
    // 0x3a1fd0: 0xdfb40280  ld          $s4, 0x280($sp)
    ctx->pc = 0x3a1fd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_3a1fd4:
    // 0x3a1fd4: 0xdfbf0288  ld          $ra, 0x288($sp)
    ctx->pc = 0x3a1fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 648)));
label_3a1fd8:
    // 0x3a1fd8: 0x3e00008  jr          $ra
label_3a1fdc:
    if (ctx->pc == 0x3A1FDCu) {
        ctx->pc = 0x3A1FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1FD8u;
        // 0x3a1fdc: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1FE0u;
        goto label_fallthrough_0x3a1fd8;
    }
    ctx->pc = 0x3A1FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1FD8u;
        // 0x3a1fdc: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a1fd8:
    ctx->pc = 0x3A1FE0u;
}
