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

// Function: sub_00219E10
// Address: 0x219e10 - 0x219f40
void sub_00219E10_0x219e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219E10_0x219e10");
#endif

    switch (ctx->pc) {
        case 0x219e10u: goto label_219e10;
        case 0x219e14u: goto label_219e14;
        case 0x219e18u: goto label_219e18;
        case 0x219e1cu: goto label_219e1c;
        case 0x219e20u: goto label_219e20;
        case 0x219e24u: goto label_219e24;
        case 0x219e28u: goto label_219e28;
        case 0x219e2cu: goto label_219e2c;
        case 0x219e30u: goto label_219e30;
        case 0x219e34u: goto label_219e34;
        case 0x219e38u: goto label_219e38;
        case 0x219e3cu: goto label_219e3c;
        case 0x219e40u: goto label_219e40;
        case 0x219e44u: goto label_219e44;
        case 0x219e48u: goto label_219e48;
        case 0x219e4cu: goto label_219e4c;
        case 0x219e50u: goto label_219e50;
        case 0x219e54u: goto label_219e54;
        case 0x219e58u: goto label_219e58;
        case 0x219e5cu: goto label_219e5c;
        case 0x219e60u: goto label_219e60;
        case 0x219e64u: goto label_219e64;
        case 0x219e68u: goto label_219e68;
        case 0x219e6cu: goto label_219e6c;
        case 0x219e70u: goto label_219e70;
        case 0x219e74u: goto label_219e74;
        case 0x219e78u: goto label_219e78;
        case 0x219e7cu: goto label_219e7c;
        case 0x219e80u: goto label_219e80;
        case 0x219e84u: goto label_219e84;
        case 0x219e88u: goto label_219e88;
        case 0x219e8cu: goto label_219e8c;
        case 0x219e90u: goto label_219e90;
        case 0x219e94u: goto label_219e94;
        case 0x219e98u: goto label_219e98;
        case 0x219e9cu: goto label_219e9c;
        case 0x219ea0u: goto label_219ea0;
        case 0x219ea4u: goto label_219ea4;
        case 0x219ea8u: goto label_219ea8;
        case 0x219eacu: goto label_219eac;
        case 0x219eb0u: goto label_219eb0;
        case 0x219eb4u: goto label_219eb4;
        case 0x219eb8u: goto label_219eb8;
        case 0x219ebcu: goto label_219ebc;
        case 0x219ec0u: goto label_219ec0;
        case 0x219ec4u: goto label_219ec4;
        case 0x219ec8u: goto label_219ec8;
        case 0x219eccu: goto label_219ecc;
        case 0x219ed0u: goto label_219ed0;
        case 0x219ed4u: goto label_219ed4;
        case 0x219ed8u: goto label_219ed8;
        case 0x219edcu: goto label_219edc;
        case 0x219ee0u: goto label_219ee0;
        case 0x219ee4u: goto label_219ee4;
        case 0x219ee8u: goto label_219ee8;
        case 0x219eecu: goto label_219eec;
        case 0x219ef0u: goto label_219ef0;
        case 0x219ef4u: goto label_219ef4;
        case 0x219ef8u: goto label_219ef8;
        case 0x219efcu: goto label_219efc;
        case 0x219f00u: goto label_219f00;
        case 0x219f04u: goto label_219f04;
        case 0x219f08u: goto label_219f08;
        case 0x219f0cu: goto label_219f0c;
        case 0x219f10u: goto label_219f10;
        case 0x219f14u: goto label_219f14;
        case 0x219f18u: goto label_219f18;
        case 0x219f1cu: goto label_219f1c;
        case 0x219f20u: goto label_219f20;
        case 0x219f24u: goto label_219f24;
        case 0x219f28u: goto label_219f28;
        case 0x219f2cu: goto label_219f2c;
        case 0x219f30u: goto label_219f30;
        case 0x219f34u: goto label_219f34;
        case 0x219f38u: goto label_219f38;
        case 0x219f3cu: goto label_219f3c;
        default: break;
    }

    ctx->pc = 0x219e10u;

label_219e10:
    // 0x219e10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x219e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_219e14:
    // 0x219e14: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x219e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_219e18:
    // 0x219e18: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x219e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_219e1c:
    // 0x219e1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x219e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_219e20:
    // 0x219e20: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x219e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_219e24:
    // 0x219e24: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x219e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_219e28:
    // 0x219e28: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x219e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
label_219e2c:
    // 0x219e2c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x219e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_219e30:
    // 0x219e30: 0xc0d7384  jal         func_35CE10
label_219e34:
    if (ctx->pc == 0x219E34u) {
        ctx->pc = 0x219E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E30u;
        // 0x219e34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E38u;
        goto label_219e38;
    }
    ctx->pc = 0x219E30u;
    SET_GPR_U32(ctx, 31, 0x219E38u);
    ctx->pc = 0x219E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219E30u;
    // 0x219e34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x219E30u, 0x219E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E38u;
label_219e38:
    // 0x219e38: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x219e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_219e3c:
    // 0x219e3c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x219e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_219e40:
    // 0x219e40: 0xc0d7384  jal         func_35CE10
label_219e44:
    if (ctx->pc == 0x219E44u) {
        ctx->pc = 0x219E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E40u;
        // 0x219e44: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E48u;
        goto label_219e48;
    }
    ctx->pc = 0x219E40u;
    SET_GPR_U32(ctx, 31, 0x219E48u);
    ctx->pc = 0x219E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219E40u;
    // 0x219e44: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x219E40u, 0x219E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E48u;
label_219e48:
    // 0x219e48: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x219e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_219e4c:
    // 0x219e4c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x219e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_219e50:
    // 0x219e50: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x219e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
label_219e54:
    // 0x219e54: 0x24513570  addiu       $s1, $v0, 0x3570
    ctx->pc = 0x219e54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 13680));
label_219e58:
    // 0x219e58: 0x2472fe40  addiu       $s2, $v1, -0x1C0
    ctx->pc = 0x219e58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966848));
label_219e5c:
    // 0x219e5c: 0xc09eb20  jal         func_27AC80
label_219e60:
    if (ctx->pc == 0x219E60u) {
        ctx->pc = 0x219E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E5Cu;
        // 0x219e60: 0x2484edf0  addiu       $a0, $a0, -0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E64u;
        goto label_219e64;
    }
    ctx->pc = 0x219E5Cu;
    SET_GPR_U32(ctx, 31, 0x219E64u);
    ctx->pc = 0x219E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219E5Cu;
    // 0x219e60: 0x2484edf0  addiu       $a0, $a0, -0x1210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC80u, 0x219E5Cu, 0x219E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E64u;
label_219e64:
    // 0x219e64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x219e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_219e68:
    // 0x219e68: 0xc0d745c  jal         func_35D170
label_219e6c:
    if (ctx->pc == 0x219E6Cu) {
        ctx->pc = 0x219E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E68u;
        // 0x219e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E70u;
        goto label_219e70;
    }
    ctx->pc = 0x219E68u;
    SET_GPR_U32(ctx, 31, 0x219E70u);
    ctx->pc = 0x219E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219E68u;
    // 0x219e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x219E68u, 0x219E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E70u;
label_219e70:
    // 0x219e70: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x219e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
label_219e74:
    // 0x219e74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_219e78:
    // 0x219e78: 0xc0d756c  jal         func_35D5B0
label_219e7c:
    if (ctx->pc == 0x219E7Cu) {
        ctx->pc = 0x219E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E78u;
        // 0x219e7c: 0x24a5eea8  addiu       $a1, $a1, -0x1158 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E80u;
        goto label_219e80;
    }
    ctx->pc = 0x219E78u;
    SET_GPR_U32(ctx, 31, 0x219E80u);
    ctx->pc = 0x219E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219E78u;
    // 0x219e7c: 0x24a5eea8  addiu       $a1, $a1, -0x1158 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x219E78u, 0x219E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E80u;
label_219e80:
    // 0x219e80: 0x1600001b  bnez        $s0, . + 4 + (0x1B << 2)
label_219e84:
    if (ctx->pc == 0x219E84u) {
        ctx->pc = 0x219E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E80u;
        // 0x219e84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E88u;
        goto label_219e88;
    }
    ctx->pc = 0x219E80u;
    {
        const bool branch_taken_0x219e80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x219E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E80u;
        // 0x219e84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e80) {
            ctx->pc = 0x219EF0u;
            goto label_219ef0;
        }
    }
    ctx->pc = 0x219E88u;
label_219e88:
    // 0x219e88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x219e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_219e8c:
    // 0x219e8c: 0xc09dd98  jal         func_277660
label_219e90:
    if (ctx->pc == 0x219E90u) {
        ctx->pc = 0x219E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E8Cu;
        // 0x219e90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E94u;
        goto label_219e94;
    }
    ctx->pc = 0x219E8Cu;
    SET_GPR_U32(ctx, 31, 0x219E94u);
    ctx->pc = 0x219E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219E8Cu;
    // 0x219e90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x219E8Cu, 0x219E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219E94u;
label_219e94:
    // 0x219e94: 0x10000016  b           . + 4 + (0x16 << 2)
label_219e98:
    if (ctx->pc == 0x219E98u) {
        ctx->pc = 0x219E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E94u;
        // 0x219e98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E9Cu;
        goto label_219e9c;
    }
    ctx->pc = 0x219E94u;
    {
        const bool branch_taken_0x219e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E94u;
        // 0x219e98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e94) {
            ctx->pc = 0x219EF0u;
            goto label_219ef0;
        }
    }
    ctx->pc = 0x219E9Cu;
label_219e9c:
    // 0x219e9c: 0x0  nop
    ctx->pc = 0x219e9cu;
    // NOP
label_219ea0:
    // 0x219ea0: 0xc0867d0  jal         func_219F40
label_219ea4:
    if (ctx->pc == 0x219EA4u) {
        ctx->pc = 0x219EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EA0u;
        // 0x219ea4: 0x3c110046  lui         $s1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219EA8u;
        goto label_219ea8;
    }
    ctx->pc = 0x219EA0u;
    SET_GPR_U32(ctx, 31, 0x219EA8u);
    ctx->pc = 0x219EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219EA0u;
    // 0x219ea4: 0x3c110046  lui         $s1, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F40u, 0x219EA0u, 0x219EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219EA8u;
label_219ea8:
    // 0x219ea8: 0x1000000b  b           . + 4 + (0xB << 2)
label_219eac:
    if (ctx->pc == 0x219EACu) {
        ctx->pc = 0x219EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EA8u;
        // 0x219eac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219EB0u;
        goto label_219eb0;
    }
    ctx->pc = 0x219EA8u;
    {
        const bool branch_taken_0x219ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EA8u;
        // 0x219eac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ea8) {
            ctx->pc = 0x219ED8u;
            goto label_219ed8;
        }
    }
    ctx->pc = 0x219EB0u;
label_219eb0:
    // 0x219eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_219eb4:
    // 0x219eb4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x219eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_219eb8:
    // 0x219eb8: 0x40f809  jalr        $v0
label_219ebc:
    if (ctx->pc == 0x219EBCu) {
        ctx->pc = 0x219EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EB8u;
        // 0x219ebc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219EC0u;
        goto label_219ec0;
    }
    ctx->pc = 0x219EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x219EC0u);
        ctx->pc = 0x219EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EB8u;
        // 0x219ebc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219EB8u, 0x219EC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x219EC0u;
label_219ec0:
    // 0x219ec0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_219ec4:
    if (ctx->pc == 0x219EC4u) {
        ctx->pc = 0x219EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EC0u;
        // 0x219ec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219EC8u;
        goto label_219ec8;
    }
    ctx->pc = 0x219EC0u;
    {
        const bool branch_taken_0x219ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EC0u;
        // 0x219ec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ec0) {
            ctx->pc = 0x219EDCu;
            goto label_219edc;
        }
    }
    ctx->pc = 0x219EC8u;
label_219ec8:
    // 0x219ec8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x219ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_219ecc:
    // 0x219ecc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x219eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_219ed0:
    // 0x219ed0: 0xc0efefa  jal         func_3BFBE8
label_219ed4:
    if (ctx->pc == 0x219ED4u) {
        ctx->pc = 0x219ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219ED0u;
        // 0x219ed4: 0x262517a8  addiu       $a1, $s1, 0x17A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 6056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219ED8u;
        goto label_219ed8;
    }
    ctx->pc = 0x219ED0u;
    SET_GPR_U32(ctx, 31, 0x219ED8u);
    ctx->pc = 0x219ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219ED0u;
    // 0x219ed4: 0x262517a8  addiu       $a1, $s1, 0x17A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 6056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x219ED0u, 0x219ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219ED8u;
label_219ed8:
    // 0x219ed8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_219edc:
    // 0x219edc: 0xc09de68  jal         func_2779A0
label_219ee0:
    if (ctx->pc == 0x219EE0u) {
        ctx->pc = 0x219EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EDCu;
        // 0x219ee0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219EE4u;
        goto label_219ee4;
    }
    ctx->pc = 0x219EDCu;
    SET_GPR_U32(ctx, 31, 0x219EE4u);
    ctx->pc = 0x219EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219EDCu;
    // 0x219ee0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x219EDCu, 0x219EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219EE4u;
label_219ee4:
    // 0x219ee4: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_219ee8:
    if (ctx->pc == 0x219EE8u) {
        ctx->pc = 0x219EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EE4u;
        // 0x219ee8: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219EECu;
        goto label_219eec;
    }
    ctx->pc = 0x219EE4u;
    {
        const bool branch_taken_0x219ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219ee4) {
            ctx->pc = 0x219EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219EE4u;
            // 0x219ee8: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219eb0;
        }
    }
    ctx->pc = 0x219EECu;
label_219eec:
    // 0x219eec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_219ef0:
    // 0x219ef0: 0xc09de3a  jal         func_2778E8
label_219ef4:
    if (ctx->pc == 0x219EF4u) {
        ctx->pc = 0x219EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EF0u;
        // 0x219ef4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219EF8u;
        goto label_219ef8;
    }
    ctx->pc = 0x219EF0u;
    SET_GPR_U32(ctx, 31, 0x219EF8u);
    ctx->pc = 0x219EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219EF0u;
    // 0x219ef4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x219EF0u, 0x219EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219EF8u;
label_219ef8:
    // 0x219ef8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_219efc:
    if (ctx->pc == 0x219EFCu) {
        ctx->pc = 0x219EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EF8u;
        // 0x219efc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F00u;
        goto label_219f00;
    }
    ctx->pc = 0x219EF8u;
    {
        const bool branch_taken_0x219ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EF8u;
        // 0x219efc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ef8) {
            ctx->pc = 0x219EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219ea0;
        }
    }
    ctx->pc = 0x219F00u;
label_219f00:
    // 0x219f00: 0xc09ddec  jal         func_2777B0
label_219f04:
    if (ctx->pc == 0x219F04u) {
        ctx->pc = 0x219F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F00u;
        // 0x219f04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F08u;
        goto label_219f08;
    }
    ctx->pc = 0x219F00u;
    SET_GPR_U32(ctx, 31, 0x219F08u);
    ctx->pc = 0x219F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219F00u;
    // 0x219f04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x219F00u, 0x219F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219F08u;
label_219f08:
    // 0x219f08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x219f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_219f0c:
    // 0x219f0c: 0xc0d7412  jal         func_35D048
label_219f10:
    if (ctx->pc == 0x219F10u) {
        ctx->pc = 0x219F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F0Cu;
        // 0x219f10: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F14u;
        goto label_219f14;
    }
    ctx->pc = 0x219F0Cu;
    SET_GPR_U32(ctx, 31, 0x219F14u);
    ctx->pc = 0x219F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219F0Cu;
    // 0x219f10: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x219F0Cu, 0x219F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219F14u;
label_219f14:
    // 0x219f14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x219f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_219f18:
    // 0x219f18: 0xc0d7412  jal         func_35D048
label_219f1c:
    if (ctx->pc == 0x219F1Cu) {
        ctx->pc = 0x219F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F18u;
        // 0x219f1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F20u;
        goto label_219f20;
    }
    ctx->pc = 0x219F18u;
    SET_GPR_U32(ctx, 31, 0x219F20u);
    ctx->pc = 0x219F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219F18u;
    // 0x219f1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x219F18u, 0x219F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219F20u;
label_219f20:
    // 0x219f20: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x219f20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_219f24:
    // 0x219f24: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x219f24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_219f28:
    // 0x219f28: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x219f28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_219f2c:
    // 0x219f2c: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x219f2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_219f30:
    // 0x219f30: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x219f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_219f34:
    // 0x219f34: 0x3e00008  jr          $ra
label_219f38:
    if (ctx->pc == 0x219F38u) {
        ctx->pc = 0x219F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F34u;
        // 0x219f38: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F3Cu;
        goto label_219f3c;
    }
    ctx->pc = 0x219F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F34u;
        // 0x219f38: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219F3Cu;
label_219f3c:
    // 0x219f3c: 0x0  nop
    ctx->pc = 0x219f3cu;
    // NOP
    ctx->pc = 0x219f40u;
}
