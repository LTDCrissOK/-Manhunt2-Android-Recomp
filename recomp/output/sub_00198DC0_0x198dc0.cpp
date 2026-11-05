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

// Function: sub_00198DC0
// Address: 0x198dc0 - 0x198f00
void sub_00198DC0_0x198dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198DC0_0x198dc0");
#endif

    switch (ctx->pc) {
        case 0x198dc0u: goto label_198dc0;
        case 0x198dc4u: goto label_198dc4;
        case 0x198dc8u: goto label_198dc8;
        case 0x198dccu: goto label_198dcc;
        case 0x198dd0u: goto label_198dd0;
        case 0x198dd4u: goto label_198dd4;
        case 0x198dd8u: goto label_198dd8;
        case 0x198ddcu: goto label_198ddc;
        case 0x198de0u: goto label_198de0;
        case 0x198de4u: goto label_198de4;
        case 0x198de8u: goto label_198de8;
        case 0x198decu: goto label_198dec;
        case 0x198df0u: goto label_198df0;
        case 0x198df4u: goto label_198df4;
        case 0x198df8u: goto label_198df8;
        case 0x198dfcu: goto label_198dfc;
        case 0x198e00u: goto label_198e00;
        case 0x198e04u: goto label_198e04;
        case 0x198e08u: goto label_198e08;
        case 0x198e0cu: goto label_198e0c;
        case 0x198e10u: goto label_198e10;
        case 0x198e14u: goto label_198e14;
        case 0x198e18u: goto label_198e18;
        case 0x198e1cu: goto label_198e1c;
        case 0x198e20u: goto label_198e20;
        case 0x198e24u: goto label_198e24;
        case 0x198e28u: goto label_198e28;
        case 0x198e2cu: goto label_198e2c;
        case 0x198e30u: goto label_198e30;
        case 0x198e34u: goto label_198e34;
        case 0x198e38u: goto label_198e38;
        case 0x198e3cu: goto label_198e3c;
        case 0x198e40u: goto label_198e40;
        case 0x198e44u: goto label_198e44;
        case 0x198e48u: goto label_198e48;
        case 0x198e4cu: goto label_198e4c;
        case 0x198e50u: goto label_198e50;
        case 0x198e54u: goto label_198e54;
        case 0x198e58u: goto label_198e58;
        case 0x198e5cu: goto label_198e5c;
        case 0x198e60u: goto label_198e60;
        case 0x198e64u: goto label_198e64;
        case 0x198e68u: goto label_198e68;
        case 0x198e6cu: goto label_198e6c;
        case 0x198e70u: goto label_198e70;
        case 0x198e74u: goto label_198e74;
        case 0x198e78u: goto label_198e78;
        case 0x198e7cu: goto label_198e7c;
        case 0x198e80u: goto label_198e80;
        case 0x198e84u: goto label_198e84;
        case 0x198e88u: goto label_198e88;
        case 0x198e8cu: goto label_198e8c;
        case 0x198e90u: goto label_198e90;
        case 0x198e94u: goto label_198e94;
        case 0x198e98u: goto label_198e98;
        case 0x198e9cu: goto label_198e9c;
        case 0x198ea0u: goto label_198ea0;
        case 0x198ea4u: goto label_198ea4;
        case 0x198ea8u: goto label_198ea8;
        case 0x198eacu: goto label_198eac;
        case 0x198eb0u: goto label_198eb0;
        case 0x198eb4u: goto label_198eb4;
        case 0x198eb8u: goto label_198eb8;
        case 0x198ebcu: goto label_198ebc;
        case 0x198ec0u: goto label_198ec0;
        case 0x198ec4u: goto label_198ec4;
        case 0x198ec8u: goto label_198ec8;
        case 0x198eccu: goto label_198ecc;
        case 0x198ed0u: goto label_198ed0;
        case 0x198ed4u: goto label_198ed4;
        case 0x198ed8u: goto label_198ed8;
        case 0x198edcu: goto label_198edc;
        case 0x198ee0u: goto label_198ee0;
        case 0x198ee4u: goto label_198ee4;
        case 0x198ee8u: goto label_198ee8;
        case 0x198eecu: goto label_198eec;
        case 0x198ef0u: goto label_198ef0;
        case 0x198ef4u: goto label_198ef4;
        case 0x198ef8u: goto label_198ef8;
        case 0x198efcu: goto label_198efc;
        default: break;
    }

    ctx->pc = 0x198dc0u;

label_198dc0:
    // 0x198dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x198dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_198dc4:
    // 0x198dc4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x198dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_198dc8:
    // 0x198dc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x198dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_198dcc:
    // 0x198dcc: 0x24a50898  addiu       $a1, $a1, 0x898
    ctx->pc = 0x198dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2200));
label_198dd0:
    // 0x198dd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x198dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_198dd4:
    // 0x198dd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198dd8:
    // 0x198dd8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x198dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_198ddc:
    // 0x198ddc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x198ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_198de0:
    // 0x198de0: 0x2484efe8  addiu       $a0, $a0, -0x1018
    ctx->pc = 0x198de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963176));
label_198de4:
    // 0x198de4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x198de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_198de8:
    // 0x198de8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x198de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_198dec:
    // 0x198dec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_198df0:
    // 0x198df0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x198df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_198df4:
    // 0x198df4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x198df4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_198df8:
    // 0x198df8: 0xc0f7200  jal         func_3DC800
label_198dfc:
    if (ctx->pc == 0x198DFCu) {
        ctx->pc = 0x198DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198DF8u;
        // 0x198dfc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E00u;
        goto label_198e00;
    }
    ctx->pc = 0x198DF8u;
    SET_GPR_U32(ctx, 31, 0x198E00u);
    ctx->pc = 0x198DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198DF8u;
    // 0x198dfc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC800u, 0x198DF8u, 0x198E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E00u;
label_198e00:
    // 0x198e00: 0xc061a1e  jal         func_186878
label_198e04:
    if (ctx->pc == 0x198E04u) {
        ctx->pc = 0x198E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E00u;
        // 0x198e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E08u;
        goto label_198e08;
    }
    ctx->pc = 0x198E00u;
    SET_GPR_U32(ctx, 31, 0x198E08u);
    ctx->pc = 0x198E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E00u;
    // 0x198e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x198E00u, 0x198E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E08u;
label_198e08:
    // 0x198e08: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x198e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
label_198e0c:
    // 0x198e0c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x198e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_198e10:
    // 0x198e10: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_198e14:
    if (ctx->pc == 0x198E14u) {
        ctx->pc = 0x198E18u;
        goto label_198e18;
    }
    ctx->pc = 0x198E10u;
    {
        const bool branch_taken_0x198e10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198e10) {
            ctx->pc = 0x198E28u;
            goto label_198e28;
        }
    }
    ctx->pc = 0x198E18u;
label_198e18:
    // 0x198e18: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x198e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_198e1c:
    // 0x198e1c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x198e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_198e20:
    // 0x198e20: 0x40f809  jalr        $v0
label_198e24:
    if (ctx->pc == 0x198E24u) {
        ctx->pc = 0x198E28u;
        goto label_198e28;
    }
    ctx->pc = 0x198E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x198E28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198E20u, 0x198E28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198E28u;
label_198e28:
    // 0x198e28: 0xc061a1e  jal         func_186878
label_198e2c:
    if (ctx->pc == 0x198E2Cu) {
        ctx->pc = 0x198E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E28u;
        // 0x198e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E30u;
        goto label_198e30;
    }
    ctx->pc = 0x198E28u;
    SET_GPR_U32(ctx, 31, 0x198E30u);
    ctx->pc = 0x198E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E28u;
    // 0x198e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x198E28u, 0x198E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E30u;
label_198e30:
    // 0x198e30: 0xac400180  sw          $zero, 0x180($v0)
    ctx->pc = 0x198e30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 0));
label_198e34:
    // 0x198e34: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x198e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_198e38:
    // 0x198e38: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x198e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_198e3c:
    // 0x198e3c: 0x26030060  addiu       $v1, $s0, 0x60
    ctx->pc = 0x198e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_198e40:
    // 0x198e40: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x198e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
label_198e44:
    // 0x198e44: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x198e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_198e48:
    // 0x198e48: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x198e48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_198e4c:
    // 0x198e4c: 0x52a78  dsll        $a1, $a1, 9
    ctx->pc = 0x198e4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 9);
label_198e50:
    // 0x198e50: 0x34a501ff  ori         $a1, $a1, 0x1FF
    ctx->pc = 0x198e50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)511);
label_198e54:
    // 0x198e54: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x198e54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_198e58:
    // 0x198e58: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x198e58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_198e5c:
    // 0x198e5c: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x198e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_198e60:
    // 0x198e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198e64:
    // 0x198e64: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x198e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_198e68:
    // 0x198e68: 0xdc621020  ld          $v0, 0x1020($v1)
    ctx->pc = 0x198e68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4128)));
label_198e6c:
    // 0x198e6c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x198e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_198e70:
    // 0x198e70: 0xc061a1e  jal         func_186878
label_198e74:
    if (ctx->pc == 0x198E74u) {
        ctx->pc = 0x198E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E70u;
        // 0x198e74: 0xfc621020  sd          $v0, 0x1020($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 4128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E78u;
        goto label_198e78;
    }
    ctx->pc = 0x198E70u;
    SET_GPR_U32(ctx, 31, 0x198E78u);
    ctx->pc = 0x198E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E70u;
    // 0x198e74: 0xfc621020  sd          $v0, 0x1020($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 4128), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x198E70u, 0x198E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E78u;
label_198e78:
    // 0x198e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198e7c:
    // 0x198e7c: 0xc061a1e  jal         func_186878
label_198e80:
    if (ctx->pc == 0x198E80u) {
        ctx->pc = 0x198E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E7Cu;
        // 0x198e80: 0xac400220  sw          $zero, 0x220($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E84u;
        goto label_198e84;
    }
    ctx->pc = 0x198E7Cu;
    SET_GPR_U32(ctx, 31, 0x198E84u);
    ctx->pc = 0x198E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E7Cu;
    // 0x198e80: 0xac400220  sw          $zero, 0x220($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x198E7Cu, 0x198E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E84u;
label_198e84:
    // 0x198e84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198e88:
    // 0x198e88: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x198e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_198e8c:
    // 0x198e8c: 0xac430158  sw          $v1, 0x158($v0)
    ctx->pc = 0x198e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
label_198e90:
    // 0x198e90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x198e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_198e94:
    // 0x198e94: 0x8c8208d8  lw          $v0, 0x8D8($a0)
    ctx->pc = 0x198e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2264)));
label_198e98:
    // 0x198e98: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_198e9c:
    if (ctx->pc == 0x198E9Cu) {
        ctx->pc = 0x198E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E98u;
        // 0x198e9c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198EA0u;
        goto label_198ea0;
    }
    ctx->pc = 0x198E98u;
    {
        const bool branch_taken_0x198e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x198e98) {
            ctx->pc = 0x198E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198E98u;
            // 0x198e9c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198EA8u;
            goto label_198ea8;
        }
    }
    ctx->pc = 0x198EA0u;
label_198ea0:
    // 0x198ea0: 0x10000013  b           . + 4 + (0x13 << 2)
label_198ea4:
    if (ctx->pc == 0x198EA4u) {
        ctx->pc = 0x198EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EA0u;
        // 0x198ea4: 0xac8008d8  sw          $zero, 0x8D8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198EA8u;
        goto label_198ea8;
    }
    ctx->pc = 0x198EA0u;
    {
        const bool branch_taken_0x198ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EA0u;
        // 0x198ea4: 0xac8008d8  sw          $zero, 0x8D8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ea0) {
            ctx->pc = 0x198EF0u;
            goto label_198ef0;
        }
    }
    ctx->pc = 0x198EA8u;
label_198ea8:
    // 0x198ea8: 0x8c8208dc  lw          $v0, 0x8DC($a0)
    ctx->pc = 0x198ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2268)));
label_198eac:
    // 0x198eac: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_198eb0:
    if (ctx->pc == 0x198EB0u) {
        ctx->pc = 0x198EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EACu;
        // 0x198eb0: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198EB4u;
        goto label_198eb4;
    }
    ctx->pc = 0x198EACu;
    {
        const bool branch_taken_0x198eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x198eac) {
            ctx->pc = 0x198EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198EACu;
            // 0x198eb0: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198EBCu;
            goto label_198ebc;
        }
    }
    ctx->pc = 0x198EB4u;
label_198eb4:
    // 0x198eb4: 0x1000000e  b           . + 4 + (0xE << 2)
label_198eb8:
    if (ctx->pc == 0x198EB8u) {
        ctx->pc = 0x198EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EB4u;
        // 0x198eb8: 0xac8008dc  sw          $zero, 0x8DC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198EBCu;
        goto label_198ebc;
    }
    ctx->pc = 0x198EB4u;
    {
        const bool branch_taken_0x198eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EB4u;
        // 0x198eb8: 0xac8008dc  sw          $zero, 0x8DC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198eb4) {
            ctx->pc = 0x198EF0u;
            goto label_198ef0;
        }
    }
    ctx->pc = 0x198EBCu;
label_198ebc:
    // 0x198ebc: 0x8c8208e0  lw          $v0, 0x8E0($a0)
    ctx->pc = 0x198ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2272)));
label_198ec0:
    // 0x198ec0: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_198ec4:
    if (ctx->pc == 0x198EC4u) {
        ctx->pc = 0x198EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EC0u;
        // 0x198ec4: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198EC8u;
        goto label_198ec8;
    }
    ctx->pc = 0x198EC0u;
    {
        const bool branch_taken_0x198ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x198ec0) {
            ctx->pc = 0x198EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198EC0u;
            // 0x198ec4: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198ED0u;
            goto label_198ed0;
        }
    }
    ctx->pc = 0x198EC8u;
label_198ec8:
    // 0x198ec8: 0x10000009  b           . + 4 + (0x9 << 2)
label_198ecc:
    if (ctx->pc == 0x198ECCu) {
        ctx->pc = 0x198ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EC8u;
        // 0x198ecc: 0xac8008e0  sw          $zero, 0x8E0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198ED0u;
        goto label_198ed0;
    }
    ctx->pc = 0x198EC8u;
    {
        const bool branch_taken_0x198ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EC8u;
        // 0x198ecc: 0xac8008e0  sw          $zero, 0x8E0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ec8) {
            ctx->pc = 0x198EF0u;
            goto label_198ef0;
        }
    }
    ctx->pc = 0x198ED0u;
label_198ed0:
    // 0x198ed0: 0x8c8208e4  lw          $v0, 0x8E4($a0)
    ctx->pc = 0x198ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2276)));
label_198ed4:
    // 0x198ed4: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_198ed8:
    if (ctx->pc == 0x198ED8u) {
        ctx->pc = 0x198ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198ED4u;
        // 0x198ed8: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198EDCu;
        goto label_198edc;
    }
    ctx->pc = 0x198ED4u;
    {
        const bool branch_taken_0x198ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x198ed4) {
            ctx->pc = 0x198ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198ED4u;
            // 0x198ed8: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198EE4u;
            goto label_198ee4;
        }
    }
    ctx->pc = 0x198EDCu;
label_198edc:
    // 0x198edc: 0x10000004  b           . + 4 + (0x4 << 2)
label_198ee0:
    if (ctx->pc == 0x198EE0u) {
        ctx->pc = 0x198EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EDCu;
        // 0x198ee0: 0xac8008e4  sw          $zero, 0x8E4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198EE4u;
        goto label_198ee4;
    }
    ctx->pc = 0x198EDCu;
    {
        const bool branch_taken_0x198edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EDCu;
        // 0x198ee0: 0xac8008e4  sw          $zero, 0x8E4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198edc) {
            ctx->pc = 0x198EF0u;
            goto label_198ef0;
        }
    }
    ctx->pc = 0x198EE4u;
label_198ee4:
    // 0x198ee4: 0x8c8208e8  lw          $v0, 0x8E8($a0)
    ctx->pc = 0x198ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2280)));
label_198ee8:
    // 0x198ee8: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_198eec:
    if (ctx->pc == 0x198EECu) {
        ctx->pc = 0x198EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EE8u;
        // 0x198eec: 0xac8008e8  sw          $zero, 0x8E8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198EF0u;
        goto label_198ef0;
    }
    ctx->pc = 0x198EE8u;
    {
        const bool branch_taken_0x198ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x198ee8) {
            ctx->pc = 0x198EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198EE8u;
            // 0x198eec: 0xac8008e8  sw          $zero, 0x8E8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 2280), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198EF0u;
            goto label_198ef0;
        }
    }
    ctx->pc = 0x198EF0u;
label_198ef0:
    // 0x198ef0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x198ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_198ef4:
    // 0x198ef4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x198ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_198ef8:
    // 0x198ef8: 0x3e00008  jr          $ra
label_198efc:
    if (ctx->pc == 0x198EFCu) {
        ctx->pc = 0x198EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EF8u;
        // 0x198efc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198F00u;
        goto label_fallthrough_0x198ef8;
    }
    ctx->pc = 0x198EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EF8u;
        // 0x198efc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x198ef8:
    ctx->pc = 0x198F00u;
}
