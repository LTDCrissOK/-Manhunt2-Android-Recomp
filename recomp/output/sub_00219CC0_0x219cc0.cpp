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

// Function: sub_00219CC0
// Address: 0x219cc0 - 0x219e10
void sub_00219CC0_0x219cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219CC0_0x219cc0");
#endif

    switch (ctx->pc) {
        case 0x219ce4u: goto label_219ce4;
        case 0x219cf4u: goto label_219cf4;
        case 0x219d10u: goto label_219d10;
        case 0x219d1cu: goto label_219d1c;
        case 0x219d2cu: goto label_219d2c;
        case 0x219d3cu: goto label_219d3c;
        case 0x219d48u: goto label_219d48;
        case 0x219d50u: goto label_219d50;
        case 0x219d60u: goto label_219d60;
        case 0x219d78u: goto label_219d78;
        case 0x219d80u: goto label_219d80;
        case 0x219d98u: goto label_219d98;
        case 0x219da4u: goto label_219da4;
        case 0x219db4u: goto label_219db4;
        case 0x219dc0u: goto label_219dc0;
        case 0x219dd0u: goto label_219dd0;
        case 0x219dd8u: goto label_219dd8;
        case 0x219de4u: goto label_219de4;
        case 0x219df0u: goto label_219df0;
        default: break;
    }

    ctx->pc = 0x219cc0u;

    // 0x219cc0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x219cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x219cc4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x219cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x219cc8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x219cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x219ccc: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x219cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x219cd0: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x219cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x219cd4: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x219cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x219cd8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x219cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x219cdc: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x219CDCu;
    SET_GPR_U32(ctx, 31, 0x219CE4u);
    ctx->pc = 0x219CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219CDCu;
    // 0x219ce0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x219CDCu, 0x219CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219CE4u;
label_219ce4:
    // 0x219ce4: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x219ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x219ce8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x219ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x219cec: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x219CECu;
    SET_GPR_U32(ctx, 31, 0x219CF4u);
    ctx->pc = 0x219CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219CECu;
    // 0x219cf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x219CECu, 0x219CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219CF4u;
label_219cf4:
    // 0x219cf4: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x219cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x219cf8: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x219cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
    // 0x219cfc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x219cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x219d00: 0x2472fe40  addiu       $s2, $v1, -0x1C0
    ctx->pc = 0x219d00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966848));
    // 0x219d04: 0x26103570  addiu       $s0, $s0, 0x3570
    ctx->pc = 0x219d04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13680));
    // 0x219d08: 0xc09eb20  jal         func_27AC80
    ctx->pc = 0x219D08u;
    SET_GPR_U32(ctx, 31, 0x219D10u);
    ctx->pc = 0x219D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D08u;
    // 0x219d0c: 0x2484edf0  addiu       $a0, $a0, -0x1210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC80u, 0x219D08u, 0x219D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D10u;
label_219d10:
    // 0x219d10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x219d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d14: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x219D14u;
    SET_GPR_U32(ctx, 31, 0x219D1Cu);
    ctx->pc = 0x219D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D14u;
    // 0x219d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x219D14u, 0x219D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D1Cu;
label_219d1c:
    // 0x219d1c: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x219d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x219d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d24: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x219D24u;
    SET_GPR_U32(ctx, 31, 0x219D2Cu);
    ctx->pc = 0x219D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D24u;
    // 0x219d28: 0x24a5eea8  addiu       $a1, $a1, -0x1158 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x219D24u, 0x219D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D2Cu;
label_219d2c:
    // 0x219d2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x219d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d34: 0xc09dd98  jal         func_277660
    ctx->pc = 0x219D34u;
    SET_GPR_U32(ctx, 31, 0x219D3Cu);
    ctx->pc = 0x219D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D34u;
    // 0x219d38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x219D34u, 0x219D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D3Cu;
label_219d3c:
    // 0x219d3c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x219D3Cu;
    {
        const bool branch_taken_0x219d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D3Cu;
        // 0x219d40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d3c) {
            ctx->pc = 0x219DB8u;
            goto label_219db8;
        }
    }
    ctx->pc = 0x219D44u;
    // 0x219d44: 0x0  nop
    ctx->pc = 0x219d44u;
    // NOP
label_219d48:
    // 0x219d48: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x219D48u;
    SET_GPR_U32(ctx, 31, 0x219D50u);
    ctx->pc = 0x219D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D48u;
    // 0x219d4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x219D48u, 0x219D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D50u;
label_219d50:
    // 0x219d50: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x219d50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x219d54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d58: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x219D58u;
    SET_GPR_U32(ctx, 31, 0x219D60u);
    ctx->pc = 0x219D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D58u;
    // 0x219d5c: 0x24a51778  addiu       $a1, $a1, 0x1778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x219D58u, 0x219D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D60u;
label_219d60:
    // 0x219d60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x219d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x219d64: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x219D64u;
    {
        const bool branch_taken_0x219d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x219d64) {
            ctx->pc = 0x219D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219D64u;
            // 0x219d68: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219D88u;
            goto label_219d88;
        }
    }
    ctx->pc = 0x219D6Cu;
    // 0x219d6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d70: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x219D70u;
    SET_GPR_U32(ctx, 31, 0x219D78u);
    ctx->pc = 0x219D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D70u;
    // 0x219d74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x219D70u, 0x219D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D78u;
label_219d78:
    // 0x219d78: 0xc083448  jal         func_20D120
    ctx->pc = 0x219D78u;
    SET_GPR_U32(ctx, 31, 0x219D80u);
    ctx->pc = 0x219D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D78u;
    // 0x219d7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D120u, 0x219D78u, 0x219D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D80u;
label_219d80:
    // 0x219d80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x219D80u;
    {
        const bool branch_taken_0x219d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D80u;
        // 0x219d84: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d80) {
            ctx->pc = 0x219D98u;
            goto label_219d98;
        }
    }
    ctx->pc = 0x219D88u;
label_219d88:
    // 0x219d88: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x219d88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219d8c: 0x24a51780  addiu       $a1, $a1, 0x1780
    ctx->pc = 0x219d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6016));
    // 0x219d90: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x219D90u;
    SET_GPR_U32(ctx, 31, 0x219D98u);
    ctx->pc = 0x219D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D90u;
    // 0x219d94: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x219D90u, 0x219D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D98u;
label_219d98:
    // 0x219d98: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x219d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219d9c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x219D9Cu;
    SET_GPR_U32(ctx, 31, 0x219DA4u);
    ctx->pc = 0x219DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D9Cu;
    // 0x219da0: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x219D9Cu, 0x219DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219DA4u;
label_219da4:
    // 0x219da4: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x219da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x219da8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x219da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219dac: 0xc0f78a0  jal         func_3DE280
    ctx->pc = 0x219DACu;
    SET_GPR_U32(ctx, 31, 0x219DB4u);
    ctx->pc = 0x219DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219DACu;
    // 0x219db0: 0x24843540  addiu       $a0, $a0, 0x3540 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE280u, 0x219DACu, 0x219DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219DB4u;
label_219db4:
    // 0x219db4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_219db8:
    // 0x219db8: 0xc09de3a  jal         func_2778E8
    ctx->pc = 0x219DB8u;
    SET_GPR_U32(ctx, 31, 0x219DC0u);
    ctx->pc = 0x219DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219DB8u;
    // 0x219dbc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x219DB8u, 0x219DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219DC0u;
label_219dc0:
    // 0x219dc0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x219DC0u;
    {
        const bool branch_taken_0x219dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DC0u;
        // 0x219dc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219dc0) {
            ctx->pc = 0x219D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219d48;
        }
    }
    ctx->pc = 0x219DC8u;
    // 0x219dc8: 0xc09dd92  jal         func_277648
    ctx->pc = 0x219DC8u;
    SET_GPR_U32(ctx, 31, 0x219DD0u);
    ctx->pc = 0x219DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219DC8u;
    // 0x219dcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277648u, 0x219DC8u, 0x219DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219DD0u;
label_219dd0:
    // 0x219dd0: 0xc086784  jal         func_219E10
    ctx->pc = 0x219DD0u;
    SET_GPR_U32(ctx, 31, 0x219DD8u);
    ctx->pc = 0x219DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219DD0u;
    // 0x219dd4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219E10u, 0x219DD0u, 0x219DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219DD8u;
label_219dd8:
    // 0x219dd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ddc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x219DDCu;
    SET_GPR_U32(ctx, 31, 0x219DE4u);
    ctx->pc = 0x219DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219DDCu;
    // 0x219de0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x219DDCu, 0x219DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219DE4u;
label_219de4:
    // 0x219de4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x219de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219de8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x219DE8u;
    SET_GPR_U32(ctx, 31, 0x219DF0u);
    ctx->pc = 0x219DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219DE8u;
    // 0x219dec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x219DE8u, 0x219DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219DF0u;
label_219df0:
    // 0x219df0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x219df0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x219df4: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x219df4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x219df8: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x219df8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x219dfc: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x219dfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x219e00: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x219e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x219e04: 0x3e00008  jr          $ra
    ctx->pc = 0x219E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E04u;
        // 0x219e08: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219E0Cu;
    // 0x219e0c: 0x0  nop
    ctx->pc = 0x219e0cu;
    // NOP
    ctx->pc = 0x219e10u;
}
