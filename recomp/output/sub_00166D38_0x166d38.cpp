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

// Function: sub_00166D38
// Address: 0x166d38 - 0x166ed0
void sub_00166D38_0x166d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166D38_0x166d38");
#endif

    switch (ctx->pc) {
        case 0x166d8cu: goto label_166d8c;
        case 0x166da4u: goto label_166da4;
        case 0x166dccu: goto label_166dcc;
        case 0x166ddcu: goto label_166ddc;
        case 0x166df0u: goto label_166df0;
        case 0x166e00u: goto label_166e00;
        case 0x166e08u: goto label_166e08;
        case 0x166e28u: goto label_166e28;
        case 0x166e3cu: goto label_166e3c;
        case 0x166e4cu: goto label_166e4c;
        case 0x166e5cu: goto label_166e5c;
        case 0x166e68u: goto label_166e68;
        case 0x166ea0u: goto label_166ea0;
        default: break;
    }

    ctx->pc = 0x166d38u;

    // 0x166d38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x166d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x166d3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x166d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x166d40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x166d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x166d44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x166d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x166d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x166d4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x166d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x166d50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x166d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x166d54: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x166d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x166d58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x166d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x166d5c: 0x8e02039c  lw          $v0, 0x39C($s0)
    ctx->pc = 0x166d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 924)));
    // 0x166d60: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x166D60u;
    {
        const bool branch_taken_0x166d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166d60) {
            ctx->pc = 0x166D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166D60u;
            // 0x166d64: 0x8e02021c  lw          $v0, 0x21C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166D78u;
            goto label_166d78;
        }
    }
    ctx->pc = 0x166D68u;
    // 0x166d68: 0x8e0203a4  lw          $v0, 0x3A4($s0)
    ctx->pc = 0x166d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 932)));
    // 0x166d6c: 0x5040004d  beql        $v0, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x166D6Cu;
    {
        const bool branch_taken_0x166d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166d6c) {
            ctx->pc = 0x166D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166D6Cu;
            // 0x166d70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166EA4u;
            goto label_166ea4;
        }
    }
    ctx->pc = 0x166D74u;
    // 0x166d74: 0x8e02021c  lw          $v0, 0x21C($s0)
    ctx->pc = 0x166d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
label_166d78:
    // 0x166d78: 0x5040004a  beql        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x166D78u;
    {
        const bool branch_taken_0x166d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166d78) {
            ctx->pc = 0x166D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166D78u;
            // 0x166d7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166EA4u;
            goto label_166ea4;
        }
    }
    ctx->pc = 0x166D80u;
    // 0x166d80: 0xae00021c  sw          $zero, 0x21C($s0)
    ctx->pc = 0x166d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
    // 0x166d84: 0xc04f0a8  jal         func_13C2A0
    ctx->pc = 0x166D84u;
    SET_GPR_U32(ctx, 31, 0x166D8Cu);
    ctx->pc = 0x166D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D84u;
    // 0x166d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2A0u, 0x166D84u, 0x166D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D8Cu;
label_166d8c:
    // 0x166d8c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x166d8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d90: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x166d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x166d94: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x166d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x166d98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x166d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d9c: 0xc045612  jal         func_115848
    ctx->pc = 0x166D9Cu;
    SET_GPR_U32(ctx, 31, 0x166DA4u);
    ctx->pc = 0x166DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D9Cu;
    // 0x166da0: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x166D9Cu, 0x166DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166DA4u;
label_166da4:
    // 0x166da4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x166da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x166da8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x166da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x166dac: 0x8c8207a0  lw          $v0, 0x7A0($a0)
    ctx->pc = 0x166dacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F07A0u));
    // 0x166db0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x166db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x166db4: 0xac8207a0  sw          $v0, 0x7A0($a0)
    ctx->pc = 0x166db4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F07A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F07A0u, _value); } while (0);
    // 0x166db8: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x166db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x166dbc: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x166DBCu;
    {
        const bool branch_taken_0x166dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x166DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166DBCu;
        // 0x166dc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166dbc) {
            ctx->pc = 0x166DD4u;
            goto label_166dd4;
        }
    }
    ctx->pc = 0x166DC4u;
    // 0x166dc4: 0xc045668  jal         func_1159A0
    ctx->pc = 0x166DC4u;
    SET_GPR_U32(ctx, 31, 0x166DCCu);
    ctx->pc = 0x166DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166DC4u;
    // 0x166dc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x166DC4u, 0x166DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166DCCu;
label_166dcc:
    // 0x166dcc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x166DCCu;
    {
        const bool branch_taken_0x166dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166DCCu;
        // 0x166dd0: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166dcc) {
            ctx->pc = 0x166DE0u;
            goto label_166de0;
        }
    }
    ctx->pc = 0x166DD4u;
label_166dd4:
    // 0x166dd4: 0xc045668  jal         func_1159A0
    ctx->pc = 0x166DD4u;
    SET_GPR_U32(ctx, 31, 0x166DDCu);
    ctx->pc = 0x166DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166DD4u;
    // 0x166dd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x166DD4u, 0x166DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166DDCu;
label_166ddc:
    // 0x166ddc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x166ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_166de0:
    // 0x166de0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x166de0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166de4: 0x2484b530  addiu       $a0, $a0, -0x4AD0
    ctx->pc = 0x166de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
    // 0x166de8: 0xc04b2a2  jal         func_12CA88
    ctx->pc = 0x166DE8u;
    SET_GPR_U32(ctx, 31, 0x166DF0u);
    ctx->pc = 0x166DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166DE8u;
    // 0x166dec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CA88u, 0x166DE8u, 0x166DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166DF0u;
label_166df0:
    // 0x166df0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x166df0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166df4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x166df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166df8: 0xc0456a0  jal         func_115A80
    ctx->pc = 0x166DF8u;
    SET_GPR_U32(ctx, 31, 0x166E00u);
    ctx->pc = 0x166DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166DF8u;
    // 0x166dfc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115A80u, 0x166DF8u, 0x166E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166E00u;
label_166e00:
    // 0x166e00: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x166e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x166e04: 0x0  nop
    ctx->pc = 0x166e04u;
    // NOP
label_166e08:
    // 0x166e08: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x166e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x166e0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x166e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x166e10: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x166e10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166e14: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x166E14u;
    {
        const bool branch_taken_0x166e14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x166E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E14u;
        // 0x166e18: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e14) {
            ctx->pc = 0x166E80u;
            goto label_166e80;
        }
    }
    ctx->pc = 0x166E1Cu;
    // 0x166e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e20: 0xc04f148  jal         func_13C520
    ctx->pc = 0x166E20u;
    SET_GPR_U32(ctx, 31, 0x166E28u);
    ctx->pc = 0x166E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166E20u;
    // 0x166e24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C520u, 0x166E20u, 0x166E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166E28u;
label_166e28:
    // 0x166e28: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x166E28u;
    {
        const bool branch_taken_0x166e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166E28u;
        // 0x166e2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166e28) {
            ctx->pc = 0x166E7Cu;
            goto label_166e7c;
        }
    }
    ctx->pc = 0x166E30u;
    // 0x166e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e34: 0xc04f142  jal         func_13C508
    ctx->pc = 0x166E34u;
    SET_GPR_U32(ctx, 31, 0x166E3Cu);
    ctx->pc = 0x166E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166E34u;
    // 0x166e38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C508u, 0x166E34u, 0x166E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166E3Cu;
label_166e3c:
    // 0x166e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x166e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e44: 0xc04f136  jal         func_13C4D8
    ctx->pc = 0x166E44u;
    SET_GPR_U32(ctx, 31, 0x166E4Cu);
    ctx->pc = 0x166E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166E44u;
    // 0x166e48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4D8u, 0x166E44u, 0x166E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166E4Cu;
label_166e4c:
    // 0x166e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x166e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e54: 0xc04f14e  jal         func_13C538
    ctx->pc = 0x166E54u;
    SET_GPR_U32(ctx, 31, 0x166E5Cu);
    ctx->pc = 0x166E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166E54u;
    // 0x166e58: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C538u, 0x166E54u, 0x166E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166E5Cu;
label_166e5c:
    // 0x166e5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x166e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e60: 0xc045642  jal         func_115908
    ctx->pc = 0x166E60u;
    SET_GPR_U32(ctx, 31, 0x166E68u);
    ctx->pc = 0x166E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166E60u;
    // 0x166e64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115908u, 0x166E60u, 0x166E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166E68u;
label_166e68:
    // 0x166e68: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x166e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x166e6c: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x166e6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x166e70: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x166e70u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x166e74: 0x52a30007  beql        $s5, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x166E74u;
    {
        const bool branch_taken_0x166e74 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x166e74) {
            ctx->pc = 0x166E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166E74u;
            // 0x166e78: 0x8e040214  lw          $a0, 0x214($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166E94u;
            goto label_166e94;
        }
    }
    ctx->pc = 0x166E7Cu;
label_166e7c:
    // 0x166e7c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x166e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_166e80:
    // 0x166e80: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x166e80u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x166e84: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x166e84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x166e88: 0x5460ffdf  bnel        $v1, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x166E88u;
    {
        const bool branch_taken_0x166e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x166e88) {
            ctx->pc = 0x166E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166E88u;
            // 0x166e8c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166e08;
        }
    }
    ctx->pc = 0x166E90u;
    // 0x166e90: 0x8e040214  lw          $a0, 0x214($s0)
    ctx->pc = 0x166e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_166e94:
    // 0x166e94: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x166e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e98: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x166E98u;
    SET_GPR_U32(ctx, 31, 0x166EA0u);
    ctx->pc = 0x166E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166E98u;
    // 0x166e9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x166E98u, 0x166EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166EA0u;
label_166ea0:
    // 0x166ea0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x166ea0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_166ea4:
    // 0x166ea4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x166ea4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166ea8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x166ea8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166eac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x166eacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x166eb0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x166eb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166eb4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x166eb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x166eb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x166eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x166EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166EBCu;
        // 0x166ec0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166EC4u;
    // 0x166ec4: 0x0  nop
    ctx->pc = 0x166ec4u;
    // NOP
    // 0x166ec8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x166ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x166ecc: 0x0  nop
    ctx->pc = 0x166eccu;
    // NOP
    ctx->pc = 0x166ed0u;
}
