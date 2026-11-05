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

// Function: sub_00244D08
// Address: 0x244d08 - 0x244e90
void sub_00244D08_0x244d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244D08_0x244d08");
#endif

    switch (ctx->pc) {
        case 0x244d40u: goto label_244d40;
        case 0x244d4cu: goto label_244d4c;
        case 0x244dd0u: goto label_244dd0;
        case 0x244df4u: goto label_244df4;
        case 0x244e0cu: goto label_244e0c;
        case 0x244e1cu: goto label_244e1c;
        case 0x244e24u: goto label_244e24;
        case 0x244e3cu: goto label_244e3c;
        case 0x244e4cu: goto label_244e4c;
        case 0x244e60u: goto label_244e60;
        case 0x244e74u: goto label_244e74;
        default: break;
    }

    ctx->pc = 0x244d08u;

    // 0x244d08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x244d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x244d0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x244d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x244d10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x244d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x244d14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x244d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244d18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x244d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x244d1c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x244d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x244d20: 0x8e020338  lw          $v0, 0x338($s0)
    ctx->pc = 0x244d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x244d24: 0x8c5200a0  lw          $s2, 0xA0($v0)
    ctx->pc = 0x244d24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x244d28: 0x12400052  beqz        $s2, . + 4 + (0x52 << 2)
    ctx->pc = 0x244D28u;
    {
        const bool branch_taken_0x244d28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x244D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D28u;
        // 0x244d2c: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d28) {
            ctx->pc = 0x244E74u;
            goto label_244e74;
        }
    }
    ctx->pc = 0x244D30u;
    // 0x244d30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x244d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244d34: 0x24a56c88  addiu       $a1, $a1, 0x6C88
    ctx->pc = 0x244d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27784));
    // 0x244d38: 0xc073fde  jal         func_1CFF78
    ctx->pc = 0x244D38u;
    SET_GPR_U32(ctx, 31, 0x244D40u);
    ctx->pc = 0x244D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244D38u;
    // 0x244d3c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x244D38u, 0x244D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D40u;
label_244d40:
    // 0x244d40: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x244d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x244d44: 0xc0c3254  jal         func_30C950
    ctx->pc = 0x244D44u;
    SET_GPR_U32(ctx, 31, 0x244D4Cu);
    ctx->pc = 0x244D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244D44u;
    // 0x244d48: 0x24050445  addiu       $a1, $zero, 0x445 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1093));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C950u, 0x244D44u, 0x244D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D4Cu;
label_244d4c:
    // 0x244d4c: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x244d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244d50: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x244d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x244d54: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x244d54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x244d58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x244d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244d5c: 0x0  nop
    ctx->pc = 0x244d5cu;
    // NOP
    // 0x244d60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x244d60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244d64: 0x0  nop
    ctx->pc = 0x244d64u;
    // NOP
    // 0x244d68: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x244D68u;
    {
        const bool branch_taken_0x244d68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D68u;
        // 0x244d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d68) {
            ctx->pc = 0x244E68u;
            goto label_244e68;
        }
    }
    ctx->pc = 0x244D70u;
    // 0x244d70: 0x8e020224  lw          $v0, 0x224($s0)
    ctx->pc = 0x244d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x244d74: 0x8e030424  lw          $v1, 0x424($s0)
    ctx->pc = 0x244d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1060)));
    // 0x244d78: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x244d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x244d7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x244d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x244d80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x244d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x244d84: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x244d84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x244d88: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
    ctx->pc = 0x244D88u;
    {
        const bool branch_taken_0x244d88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x244D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D88u;
        // 0x244d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d88) {
            ctx->pc = 0x244E54u;
            goto label_244e54;
        }
    }
    ctx->pc = 0x244D90u;
    // 0x244d90: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x244d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x244d94: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x244d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244d98: 0xc440024c  lwc1        $f0, 0x24C($v0)
    ctx->pc = 0x244d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244d9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x244d9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244da0: 0x0  nop
    ctx->pc = 0x244da0u;
    // NOP
    // 0x244da4: 0x4502002c  bc1fl       . + 4 + (0x2C << 2)
    ctx->pc = 0x244DA4u;
    {
        const bool branch_taken_0x244da4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244da4) {
            ctx->pc = 0x244DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244DA4u;
            // 0x244da8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244E58u;
            goto label_244e58;
        }
    }
    ctx->pc = 0x244DACu;
    // 0x244dac: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x244dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x244db0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x244db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x244db4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x244DB4u;
    {
        const bool branch_taken_0x244db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244db4) {
            ctx->pc = 0x244E1Cu;
            goto label_244e1c;
        }
    }
    ctx->pc = 0x244DBCu;
    // 0x244dbc: 0x8e060334  lw          $a2, 0x334($s0)
    ctx->pc = 0x244dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x244dc0: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x244dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
    // 0x244dc4: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x244DC4u;
    {
        const bool branch_taken_0x244dc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x244DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DC4u;
        // 0x244dc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244dc4) {
            ctx->pc = 0x244DECu;
            goto label_244dec;
        }
    }
    ctx->pc = 0x244DCCu;
    // 0x244dcc: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x244dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_244dd0:
    // 0x244dd0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x244dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x244dd4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x244DD4u;
    {
        const bool branch_taken_0x244dd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x244DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DD4u;
        // 0x244dd8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244dd4) {
            ctx->pc = 0x244DECu;
            goto label_244dec;
        }
    }
    ctx->pc = 0x244DDCu;
    // 0x244ddc: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x244ddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x244de0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x244DE0u;
    {
        const bool branch_taken_0x244de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DE0u;
        // 0x244de4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244de0) {
            ctx->pc = 0x244DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244dd0;
        }
    }
    ctx->pc = 0x244DE8u;
    // 0x244de8: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x244de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_244dec:
    // 0x244dec: 0xc091b22  jal         func_246C88
    ctx->pc = 0x244DECu;
    SET_GPR_U32(ctx, 31, 0x244DF4u);
    ctx->pc = 0x244DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244DECu;
    // 0x244df0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246C88u, 0x244DECu, 0x244DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244DF4u;
label_244df4:
    // 0x244df4: 0x8e250264  lw          $a1, 0x264($s1)
    ctx->pc = 0x244df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x244df8: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x244DF8u;
    {
        const bool branch_taken_0x244df8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x244df8) {
            ctx->pc = 0x244DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244DF8u;
            // 0x244dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244E10u;
            goto label_244e10;
        }
    }
    ctx->pc = 0x244E00u;
    // 0x244e00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x244e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244e04: 0xc0984bc  jal         func_2612F0
    ctx->pc = 0x244E04u;
    SET_GPR_U32(ctx, 31, 0x244E0Cu);
    ctx->pc = 0x244E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244E04u;
    // 0x244e08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2612F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612F0u, 0x244E04u, 0x244E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E0Cu;
label_244e0c:
    // 0x244e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244e10:
    // 0x244e10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x244e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x244e14: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x244E14u;
    SET_GPR_U32(ctx, 31, 0x244E1Cu);
    ctx->pc = 0x244E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244E14u;
    // 0x244e18: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x244E14u, 0x244E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E1Cu;
label_244e1c:
    // 0x244e1c: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x244E1Cu;
    SET_GPR_U32(ctx, 31, 0x244E24u);
    ctx->pc = 0x244E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244E1Cu;
    // 0x244e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x244E1Cu, 0x244E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E24u;
label_244e24:
    // 0x244e24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x244e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244e28: 0x8e24025c  lw          $a0, 0x25C($s1)
    ctx->pc = 0x244e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x244e2c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x244E2Cu;
    {
        const bool branch_taken_0x244e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x244E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E2Cu;
        // 0x244e30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e2c) {
            ctx->pc = 0x244E78u;
            goto label_244e78;
        }
    }
    ctx->pc = 0x244E34u;
    // 0x244e34: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x244E34u;
    SET_GPR_U32(ctx, 31, 0x244E3Cu);
    ctx->pc = 0x244E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244E34u;
    // 0x244e38: 0xc64c001c  lwc1        $f12, 0x1C($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x244E34u, 0x244E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E3Cu;
label_244e3c:
    // 0x244e3c: 0x8e24025c  lw          $a0, 0x25C($s1)
    ctx->pc = 0x244e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x244e40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x244e40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x244e44: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x244E44u;
    SET_GPR_U32(ctx, 31, 0x244E4Cu);
    ctx->pc = 0x244E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244E44u;
    // 0x244e48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x244E44u, 0x244E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E4Cu;
label_244e4c:
    // 0x244e4c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x244E4Cu;
    {
        const bool branch_taken_0x244e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E4Cu;
        // 0x244e50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e4c) {
            ctx->pc = 0x244E78u;
            goto label_244e78;
        }
    }
    ctx->pc = 0x244E54u;
label_244e54:
    // 0x244e54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x244e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_244e58:
    // 0x244e58: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x244E58u;
    SET_GPR_U32(ctx, 31, 0x244E60u);
    ctx->pc = 0x244E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244E58u;
    // 0x244e5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x244E58u, 0x244E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E60u;
label_244e60:
    // 0x244e60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x244E60u;
    {
        const bool branch_taken_0x244e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E60u;
        // 0x244e64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e60) {
            ctx->pc = 0x244E78u;
            goto label_244e78;
        }
    }
    ctx->pc = 0x244E68u;
label_244e68:
    // 0x244e68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x244e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x244e6c: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x244E6Cu;
    SET_GPR_U32(ctx, 31, 0x244E74u);
    ctx->pc = 0x244E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244E6Cu;
    // 0x244e70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x244E6Cu, 0x244E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E74u;
label_244e74:
    // 0x244e74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244e74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_244e78:
    // 0x244e78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x244e78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x244e7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x244e7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244e80: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x244e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244e84: 0x3e00008  jr          $ra
    ctx->pc = 0x244E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E84u;
        // 0x244e88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244E8Cu;
    // 0x244e8c: 0x0  nop
    ctx->pc = 0x244e8cu;
    // NOP
    ctx->pc = 0x244e90u;
}
