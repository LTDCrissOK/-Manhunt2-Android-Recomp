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

// Function: sub_00391D08
// Address: 0x391d08 - 0x392598
void sub_00391D08_0x391d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391D08_0x391d08");
#endif

    switch (ctx->pc) {
        case 0x391e84u: goto label_391e84;
        case 0x391e94u: goto label_391e94;
        case 0x391f18u: goto label_391f18;
        case 0x391f60u: goto label_391f60;
        case 0x392554u: goto label_392554;
        default: break;
    }

    ctx->pc = 0x391d08u;

    // 0x391d08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x391d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x391d0c: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x391d0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x391d10: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x391d10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x391d14: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x391d14u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x391d18: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x391d18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x391d1c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x391d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x391d20: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x391d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x391d24: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x391d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x391d28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x391d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x391d2c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x391d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x391d30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x391d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x391d34: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x391d34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x391d38: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x391d38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391d3c: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x391d3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x391d40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x391d40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391d44: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x391d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x391d48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x391d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x391d4c: 0x2428824  and         $s1, $s2, $v0
    ctx->pc = 0x391d4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x391d50: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x391D50u;
    {
        const bool branch_taken_0x391d50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x391D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391D50u;
        // 0x391d54: 0x2628024  and         $s0, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391d50) {
            ctx->pc = 0x391D68u;
            goto label_391d68;
        }
    }
    ctx->pc = 0x391D58u;
    // 0x391d58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x391d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x391d5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x391d5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391d60: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x391D60u;
    {
        const bool branch_taken_0x391d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391D60u;
        // 0x391d64: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391d60) {
            ctx->pc = 0x392570u;
            goto label_392570;
        }
    }
    ctx->pc = 0x391D68u;
label_391d68:
    // 0x391d68: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x391d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x391d6c: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x391d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x391d70: 0x544001fe  bnel        $v0, $zero, . + 4 + (0x1FE << 2)
    ctx->pc = 0x391D70u;
    {
        const bool branch_taken_0x391d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x391d70) {
            ctx->pc = 0x391D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391D70u;
            // 0x391d74: 0x4615a000  add.s       $f0, $f20, $f21 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39256Cu;
            goto label_39256c;
        }
    }
    ctx->pc = 0x391D78u;
    // 0x391d78: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x391d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x391d7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x391D7Cu;
    {
        const bool branch_taken_0x391d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x391d7c) {
            ctx->pc = 0x391D8Cu;
            goto label_391d8c;
        }
    }
    ctx->pc = 0x391D84u;
    // 0x391d84: 0x100001f9  b           . + 4 + (0x1F9 << 2)
    ctx->pc = 0x391D84u;
    {
        const bool branch_taken_0x391d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391D84u;
        // 0x391d88: 0x4615a000  add.s       $f0, $f20, $f21 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391d84) {
            ctx->pc = 0x39256Cu;
            goto label_39256c;
        }
    }
    ctx->pc = 0x391D8Cu;
label_391d8c:
    // 0x391d8c: 0x6610015  bgez        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x391D8Cu;
    {
        const bool branch_taken_0x391d8c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x391D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391D8Cu;
        // 0x391d90: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391d8c) {
            ctx->pc = 0x391DE4u;
            goto label_391de4;
        }
    }
    ctx->pc = 0x391D94u;
    // 0x391d94: 0x3c024b7f  lui         $v0, 0x4B7F
    ctx->pc = 0x391d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19327 << 16));
    // 0x391d98: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x391d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x391d9c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x391d9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x391da0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x391DA0u;
    {
        const bool branch_taken_0x391da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391DA0u;
        // 0x391da4: 0x3c023f7f  lui         $v0, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391da0) {
            ctx->pc = 0x391DB0u;
            goto label_391db0;
        }
    }
    ctx->pc = 0x391DA8u;
    // 0x391da8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x391DA8u;
    {
        const bool branch_taken_0x391da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391DA8u;
        // 0x391dac: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391da8) {
            ctx->pc = 0x391DE4u;
            goto label_391de4;
        }
    }
    ctx->pc = 0x391DB0u;
label_391db0:
    // 0x391db0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x391db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x391db4: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x391db4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x391db8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x391DB8u;
    {
        const bool branch_taken_0x391db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391DB8u;
        // 0x391dbc: 0x111dc3  sra         $v1, $s1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391db8) {
            ctx->pc = 0x391DE4u;
            goto label_391de4;
        }
    }
    ctx->pc = 0x391DC0u;
    // 0x391dc0: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x391dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x391dc4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x391dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x391dc8: 0x512807  srav        $a1, $s1, $v0
    ctx->pc = 0x391dc8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
    // 0x391dcc: 0x451004  sllv        $v0, $a1, $v0
    ctx->pc = 0x391dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x391dd0: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x391DD0u;
    {
        const bool branch_taken_0x391dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x391DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391DD0u;
        // 0x391dd4: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391dd0) {
            ctx->pc = 0x391DE8u;
            goto label_391de8;
        }
    }
    ctx->pc = 0x391DD8u;
    // 0x391dd8: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x391dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x391ddc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x391ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x391de0: 0x43a023  subu        $s4, $v0, $v1
    ctx->pc = 0x391de0u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_391de4:
    // 0x391de4: 0x3c027f80  lui         $v0, 0x7F80
    ctx->pc = 0x391de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
label_391de8:
    // 0x391de8: 0x16220011  bne         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x391DE8u;
    {
        const bool branch_taken_0x391de8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x391DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391DE8u;
        // 0x391dec: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391de8) {
            ctx->pc = 0x391E30u;
            goto label_391e30;
        }
    }
    ctx->pc = 0x391DF0u;
    // 0x391df0: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x391DF0u;
    {
        const bool branch_taken_0x391df0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x391DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391DF0u;
        // 0x391df4: 0x50102a  slt         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391df0) {
            ctx->pc = 0x391E00u;
            goto label_391e00;
        }
    }
    ctx->pc = 0x391DF8u;
    // 0x391df8: 0x100001dc  b           . + 4 + (0x1DC << 2)
    ctx->pc = 0x391DF8u;
    {
        const bool branch_taken_0x391df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391DF8u;
        // 0x391dfc: 0x4615a801  sub.s       $f0, $f21, $f21 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391df8) {
            ctx->pc = 0x39256Cu;
            goto label_39256c;
        }
    }
    ctx->pc = 0x391E00u;
label_391e00:
    // 0x391e00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x391E00u;
    {
        const bool branch_taken_0x391e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x391e00) {
            ctx->pc = 0x391E1Cu;
            goto label_391e1c;
        }
    }
    ctx->pc = 0x391E08u;
    // 0x391e08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x391e08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391e0c: 0x64301d7  bgezl       $s2, . + 4 + (0x1D7 << 2)
    ctx->pc = 0x391E0Cu;
    {
        const bool branch_taken_0x391e0c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x391e0c) {
            ctx->pc = 0x391E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391E0Cu;
            // 0x391e10: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39256Cu;
            goto label_39256c;
        }
    }
    ctx->pc = 0x391E14u;
    // 0x391e14: 0x100001d6  b           . + 4 + (0x1D6 << 2)
    ctx->pc = 0x391E14u;
    {
        const bool branch_taken_0x391e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E14u;
        // 0x391e18: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391e14) {
            ctx->pc = 0x392570u;
            goto label_392570;
        }
    }
    ctx->pc = 0x391E1Cu;
label_391e1c:
    // 0x391e1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x391e1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391e20: 0x64201d2  bltzl       $s2, . + 4 + (0x1D2 << 2)
    ctx->pc = 0x391E20u;
    {
        const bool branch_taken_0x391e20 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x391e20) {
            ctx->pc = 0x391E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391E20u;
            // 0x391e24: 0x4600a807  neg.s       $f0, $f21 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39256Cu;
            goto label_39256c;
        }
    }
    ctx->pc = 0x391E28u;
    // 0x391e28: 0x100001d1  b           . + 4 + (0x1D1 << 2)
    ctx->pc = 0x391E28u;
    {
        const bool branch_taken_0x391e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E28u;
        // 0x391e2c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391e28) {
            ctx->pc = 0x392570u;
            goto label_392570;
        }
    }
    ctx->pc = 0x391E30u;
label_391e30:
    // 0x391e30: 0x5622000a  bnel        $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x391E30u;
    {
        const bool branch_taken_0x391e30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x391e30) {
            ctx->pc = 0x391E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391E30u;
            // 0x391e34: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x391E5Cu;
            goto label_391e5c;
        }
    }
    ctx->pc = 0x391E38u;
    // 0x391e38: 0x64101cc  bgez        $s2, . + 4 + (0x1CC << 2)
    ctx->pc = 0x391E38u;
    {
        const bool branch_taken_0x391e38 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x391E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E38u;
        // 0x391e3c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391e38) {
            ctx->pc = 0x39256Cu;
            goto label_39256c;
        }
    }
    ctx->pc = 0x391E40u;
    // 0x391e40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x391e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x391e44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x391e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391e48: 0x0  nop
    ctx->pc = 0x391e48u;
    // NOP
    // 0x391e4c: 0x0  nop
    ctx->pc = 0x391e4cu;
    // NOP
    // 0x391e50: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x391e50u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x391e54: 0x100001c6  b           . + 4 + (0x1C6 << 2)
    ctx->pc = 0x391E54u;
    {
        const bool branch_taken_0x391e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E54u;
        // 0x391e58: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391e54) {
            ctx->pc = 0x392570u;
            goto label_392570;
        }
    }
    ctx->pc = 0x391E5Cu;
label_391e5c:
    // 0x391e5c: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x391E5Cu;
    {
        const bool branch_taken_0x391e5c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x391E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E5Cu;
        // 0x391e60: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391e5c) {
            ctx->pc = 0x391E6Cu;
            goto label_391e6c;
        }
    }
    ctx->pc = 0x391E64u;
    // 0x391e64: 0x100001c1  b           . + 4 + (0x1C1 << 2)
    ctx->pc = 0x391E64u;
    {
        const bool branch_taken_0x391e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E64u;
        // 0x391e68: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391e64) {
            ctx->pc = 0x39256Cu;
            goto label_39256c;
        }
    }
    ctx->pc = 0x391E6Cu;
label_391e6c:
    // 0x391e6c: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x391E6Cu;
    {
        const bool branch_taken_0x391e6c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x391e6c) {
            ctx->pc = 0x391E8Cu;
            goto label_391e8c;
        }
    }
    ctx->pc = 0x391E74u;
    // 0x391e74: 0x6600005  bltz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x391E74u;
    {
        const bool branch_taken_0x391e74 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x391e74) {
            ctx->pc = 0x391E8Cu;
            goto label_391e8c;
        }
    }
    ctx->pc = 0x391E7Cu;
    // 0x391e7c: 0xc0e4a5e  jal         func_392978
    ctx->pc = 0x391E7Cu;
    SET_GPR_U32(ctx, 31, 0x391E84u);
    ctx->pc = 0x391E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391E7Cu;
    // 0x391e80: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x392978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392978u, 0x391E7Cu, 0x391E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391E84u;
label_391e84:
    // 0x391e84: 0x100001ba  b           . + 4 + (0x1BA << 2)
    ctx->pc = 0x391E84u;
    {
        const bool branch_taken_0x391e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E84u;
        // 0x391e88: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391e84) {
            ctx->pc = 0x392570u;
            goto label_392570;
        }
    }
    ctx->pc = 0x391E8Cu;
label_391e8c:
    // 0x391e8c: 0xc0e3f56  jal         func_38FD58
    ctx->pc = 0x391E8Cu;
    SET_GPR_U32(ctx, 31, 0x391E94u);
    ctx->pc = 0x391E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391E8Cu;
    // 0x391e90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD58u, 0x391E8Cu, 0x391E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391E94u;
label_391e94:
    // 0x391e94: 0x3c027f80  lui         $v0, 0x7F80
    ctx->pc = 0x391e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
    // 0x391e98: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x391E98u;
    {
        const bool branch_taken_0x391e98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x391E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391E98u;
        // 0x391e9c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391e98) {
            ctx->pc = 0x391EB4u;
            goto label_391eb4;
        }
    }
    ctx->pc = 0x391EA0u;
    // 0x391ea0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x391EA0u;
    {
        const bool branch_taken_0x391ea0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x391ea0) {
            ctx->pc = 0x391EB4u;
            goto label_391eb4;
        }
    }
    ctx->pc = 0x391EA8u;
    // 0x391ea8: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x391ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x391eac: 0x16060019  bne         $s0, $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x391EACu;
    {
        const bool branch_taken_0x391eac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 6));
        ctx->pc = 0x391EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391EACu;
        // 0x391eb0: 0x1357c2  srl         $t2, $s3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391eac) {
            ctx->pc = 0x391F14u;
            goto label_391f14;
        }
    }
    ctx->pc = 0x391EB4u;
label_391eb4:
    // 0x391eb4: 0x6410006  bgez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x391EB4u;
    {
        const bool branch_taken_0x391eb4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x391EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391EB4u;
        // 0x391eb8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391eb4) {
            ctx->pc = 0x391ED0u;
            goto label_391ed0;
        }
    }
    ctx->pc = 0x391EBCu;
    // 0x391ebc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x391ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x391ec0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x391ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391ec4: 0x0  nop
    ctx->pc = 0x391ec4u;
    // NOP
    // 0x391ec8: 0x0  nop
    ctx->pc = 0x391ec8u;
    // NOP
    // 0x391ecc: 0x460d0343  div.s       $f13, $f0, $f13
    ctx->pc = 0x391eccu;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[0], ctx->f[13]); }
label_391ed0:
    // 0x391ed0: 0x66101a6  bgez        $s3, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x391ED0u;
    {
        const bool branch_taken_0x391ed0 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x391ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391ED0u;
        // 0x391ed4: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391ed0) {
            ctx->pc = 0x39256Cu;
            goto label_39256c;
        }
    }
    ctx->pc = 0x391ED8u;
    // 0x391ed8: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x391ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x391edc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x391edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x391ee0: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x391ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x391ee4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x391EE4u;
    {
        const bool branch_taken_0x391ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391EE4u;
        // 0x391ee8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391ee4) {
            ctx->pc = 0x391F04u;
            goto label_391f04;
        }
    }
    ctx->pc = 0x391EECu;
    // 0x391eec: 0x460d6801  sub.s       $f0, $f13, $f13
    ctx->pc = 0x391eecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[13]);
    // 0x391ef0: 0x0  nop
    ctx->pc = 0x391ef0u;
    // NOP
    // 0x391ef4: 0x0  nop
    ctx->pc = 0x391ef4u;
    // NOP
    // 0x391ef8: 0x46000343  div.s       $f13, $f0, $f0
    ctx->pc = 0x391ef8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
    // 0x391efc: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x391EFCu;
    {
        const bool branch_taken_0x391efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391EFCu;
        // 0x391f00: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391efc) {
            ctx->pc = 0x39256Cu;
            goto label_39256c;
        }
    }
    ctx->pc = 0x391F04u;
label_391f04:
    // 0x391f04: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x391F04u;
    {
        const bool branch_taken_0x391f04 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x391f04) {
            ctx->pc = 0x391F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391F04u;
            // 0x391f08: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
            ctx->f[13] = FPU_NEG_S(ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x391F0Cu;
            goto label_391f0c;
        }
    }
    ctx->pc = 0x391F0Cu;
label_391f0c:
    // 0x391f0c: 0x10000197  b           . + 4 + (0x197 << 2)
    ctx->pc = 0x391F0Cu;
    {
        const bool branch_taken_0x391f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F0Cu;
        // 0x391f10: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x391f0c) {
            ctx->pc = 0x39256Cu;
            goto label_39256c;
        }
    }
    ctx->pc = 0x391F14u;
label_391f14:
    // 0x391f14: 0x2542ffff  addiu       $v0, $t2, -0x1
    ctx->pc = 0x391f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_391f18:
    // 0x391f18: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x391f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x391f1c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x391F1Cu;
    {
        const bool branch_taken_0x391f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F1Cu;
        // 0x391f20: 0x3c024d00  lui         $v0, 0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19712 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391f1c) {
            ctx->pc = 0x391F3Cu;
            goto label_391f3c;
        }
    }
    ctx->pc = 0x391F24u;
    // 0x391f24: 0x4614a001  sub.s       $f0, $f20, $f20
    ctx->pc = 0x391f24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[20]);
    // 0x391f28: 0x0  nop
    ctx->pc = 0x391f28u;
    // NOP
    // 0x391f2c: 0x0  nop
    ctx->pc = 0x391f2cu;
    // NOP
    // 0x391f30: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x391f30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
    // 0x391f34: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x391F34u;
    {
        const bool branch_taken_0x391f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F34u;
        // 0x391f38: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391f34) {
            ctx->pc = 0x392570u;
            goto label_392570;
        }
    }
    ctx->pc = 0x391F3Cu;
label_391f3c:
    // 0x391f3c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x391f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x391f40: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x391F40u;
    {
        const bool branch_taken_0x391f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F40u;
        // 0x391f44: 0x3c023f7f  lui         $v0, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391f40) {
            ctx->pc = 0x392028u;
            goto label_392028;
        }
    }
    ctx->pc = 0x391F48u;
    // 0x391f48: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x391f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x391f4c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x391f4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x391f50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x391F50u;
    {
        const bool branch_taken_0x391f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F50u;
        // 0x391f54: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391f50) {
            ctx->pc = 0x391F68u;
            goto label_391f68;
        }
    }
    ctx->pc = 0x391F58u;
    // 0x391f58: 0x6410009  bgez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x391F58u;
    {
        const bool branch_taken_0x391f58 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x391F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F58u;
        // 0x391f5c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391f58) {
            ctx->pc = 0x391F80u;
            goto label_391f80;
        }
    }
    ctx->pc = 0x391F60u;
label_391f60:
    // 0x391f60: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x391F60u;
    {
        const bool branch_taken_0x391f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F60u;
        // 0x391f64: 0xc4409ebc  lwc1        $f0, -0x6144($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x391f60) {
            ctx->pc = 0x39256Cu;
            goto label_39256c;
        }
    }
    ctx->pc = 0x391F68u;
label_391f68:
    // 0x391f68: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x391f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x391f6c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x391f6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x391f70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x391F70u;
    {
        const bool branch_taken_0x391f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x391f70) {
            ctx->pc = 0x391F8Cu;
            goto label_391f8c;
        }
    }
    ctx->pc = 0x391F78u;
    // 0x391f78: 0x1e40fff9  bgtz        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x391F78u;
    {
        const bool branch_taken_0x391f78 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x391F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F78u;
        // 0x391f7c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391f78) {
            ctx->pc = 0x391F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391f60;
        }
    }
    ctx->pc = 0x391F80u;
label_391f80:
    // 0x391f80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x391f80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391f84: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x391F84u;
    {
        const bool branch_taken_0x391f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F84u;
        // 0x391f88: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391f84) {
            ctx->pc = 0x392570u;
            goto label_392570;
        }
    }
    ctx->pc = 0x391F8Cu;
label_391f8c:
    // 0x391f8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x391f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x391f90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x391f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x391f94: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x391f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x391f98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x391f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x391f9c: 0x4601a301  sub.s       $f12, $f20, $f1
    ctx->pc = 0x391f9cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x391fa0: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x391fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x391fa4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x391fa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x391fa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x391fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391fac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x391facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x391fb0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x391fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x391fb4: 0x3c0136ec  lui         $at, 0x36EC
    ctx->pc = 0x391fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14060 << 16));
    // 0x391fb8: 0x3421a570  ori         $at, $at, 0xA570
    ctx->pc = 0x391fb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42352);
    // 0x391fbc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x391fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x391fc0: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x391fc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x391fc4: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x391fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
    // 0x391fc8: 0x3421aa3b  ori         $at, $at, 0xAA3B
    ctx->pc = 0x391fc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43579);
    // 0x391fcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x391fccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x391fd0: 0x460c6182  mul.s       $f6, $f12, $f12
    ctx->pc = 0x391fd0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x391fd4: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x391fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
    // 0x391fd8: 0x3421aa00  ori         $at, $at, 0xAA00
    ctx->pc = 0x391fd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43520);
    // 0x391fdc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x391fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x391fe0: 0x46046102  mul.s       $f4, $f12, $f4
    ctx->pc = 0x391fe0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x391fe4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x391fe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x391fe8: 0x460563c2  mul.s       $f15, $f12, $f5
    ctx->pc = 0x391fe8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x391fec: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x391fecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x391ff0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x391ff0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x391ff4: 0x46033242  mul.s       $f9, $f6, $f3
    ctx->pc = 0x391ff4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x391ff8: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x391ff8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x391ffc: 0x46012381  sub.s       $f14, $f4, $f1
    ctx->pc = 0x391ffcu;
    ctx->f[14] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x392000: 0x460e7800  add.s       $f0, $f15, $f14
    ctx->pc = 0x392000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x392004: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x392004u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x392008: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x392008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x39200c: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x39200cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x392010: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x392010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x392014: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x392014u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x392018: 0x460f0801  sub.s       $f0, $f1, $f15
    ctx->pc = 0x392018u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[15]);
    // 0x39201c: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x39201Cu;
    {
        const bool branch_taken_0x39201c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39201Cu;
        // 0x392020: 0x46007041  sub.s       $f1, $f14, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39201c) {
            ctx->pc = 0x392298u;
            goto label_392298;
        }
    }
    ctx->pc = 0x392024u;
    // 0x392024: 0x0  nop
    ctx->pc = 0x392024u;
    // NOP
label_392028:
    // 0x392028: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x392028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x39202c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x39202cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x392030: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x392030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x392034: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x392034u;
    {
        const bool branch_taken_0x392034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392034u;
        // 0x392038: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392034) {
            ctx->pc = 0x392050u;
            goto label_392050;
        }
    }
    ctx->pc = 0x39203Cu;
    // 0x39203c: 0x3c014b80  lui         $at, 0x4B80
    ctx->pc = 0x39203cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19328 << 16));
    // 0x392040: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x392040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392044: 0x2409ffe8  addiu       $t1, $zero, -0x18
    ctx->pc = 0x392044u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967272));
    // 0x392048: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x392048u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x39204c: 0x44106000  mfc1        $s0, $f12
    ctx->pc = 0x39204cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_392050:
    // 0x392050: 0x2032824  and         $a1, $s0, $v1
    ctx->pc = 0x392050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x392054: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x392054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x392058: 0x101dc3  sra         $v1, $s0, 23
    ctx->pc = 0x392058u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 23));
    // 0x39205c: 0x2524ff81  addiu       $a0, $t1, -0x7F
    ctx->pc = 0x39205cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967169));
    // 0x392060: 0x3442c471  ori         $v0, $v0, 0xC471
    ctx->pc = 0x392060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50289);
    // 0x392064: 0x834821  addu        $t1, $a0, $v1
    ctx->pc = 0x392064u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x392068: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x392068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x39206c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39206Cu;
    {
        const bool branch_taken_0x39206c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39206Cu;
        // 0x392070: 0xa68025  or          $s0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39206c) {
            ctx->pc = 0x39207Cu;
            goto label_39207c;
        }
    }
    ctx->pc = 0x392074u;
    // 0x392074: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x392074u;
    {
        const bool branch_taken_0x392074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392074u;
        // 0x392078: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392074) {
            ctx->pc = 0x3920A0u;
            goto label_3920a0;
        }
    }
    ctx->pc = 0x39207Cu;
label_39207c:
    // 0x39207c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x39207cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x392080: 0x3442b3d6  ori         $v0, $v0, 0xB3D6
    ctx->pc = 0x392080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46038);
    // 0x392084: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x392084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x392088: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x392088u;
    {
        const bool branch_taken_0x392088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392088u;
        // 0x39208c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392088) {
            ctx->pc = 0x3920A0u;
            goto label_3920a0;
        }
    }
    ctx->pc = 0x392090u;
    // 0x392090: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x392090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
    // 0x392094: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x392094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392098: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x392098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x39209c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x39209cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_3920a0:
    // 0x3920a0: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x3920a0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3920a4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3920a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3920a8: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x3920a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3920ac: 0x24429e38  addiu       $v0, $v0, -0x61C8
    ctx->pc = 0x3920acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942264));
    // 0x3920b0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3920b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3920b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3920b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3920b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3920b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3920bc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3920bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3920c0: 0x46026000  add.s       $f0, $f12, $f2
    ctx->pc = 0x3920c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x3920c4: 0x460263c1  sub.s       $f15, $f12, $f2
    ctx->pc = 0x3920c4u;
    ctx->f[15] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x3920c8: 0x0  nop
    ctx->pc = 0x3920c8u;
    // NOP
    // 0x3920cc: 0x0  nop
    ctx->pc = 0x3920ccu;
    // NOP
    // 0x3920d0: 0x46000b83  div.s       $f14, $f1, $f0
    ctx->pc = 0x3920d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3920d4: 0x460e7d02  mul.s       $f20, $f15, $f14
    ctx->pc = 0x3920d4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[15], ctx->f[14]);
    // 0x3920d8: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x3920d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3920dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3920dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3920e0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x3920e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x3920e4: 0x34c6f000  ori         $a2, $a2, 0xF000
    ctx->pc = 0x3920e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)61440);
    // 0x3920e8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x3920e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x3920ec: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x3920ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3920f0: 0x101843  sra         $v1, $s0, 1
    ctx->pc = 0x3920f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 1));
    // 0x3920f4: 0x81540  sll         $v0, $t0, 21
    ctx->pc = 0x3920f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 21));
    // 0x3920f8: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x3920f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x3920fc: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x3920fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x392100: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x392100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x392104: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x392104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x392108: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x392108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39210c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39210cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392110: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x392110u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x392114: 0x3c013e53  lui         $at, 0x3E53
    ctx->pc = 0x392114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15955 << 16));
    // 0x392118: 0x3421f142  ori         $at, $at, 0xF142
    ctx->pc = 0x392118u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61762);
    // 0x39211c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39211cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392120: 0x3c013e6c  lui         $at, 0x3E6C
    ctx->pc = 0x392120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15980 << 16));
    // 0x392124: 0x34213255  ori         $at, $at, 0x3255
    ctx->pc = 0x392124u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12885);
    // 0x392128: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x392128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39212c: 0x4614a2c2  mul.s       $f11, $f20, $f20
    ctx->pc = 0x39212cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x392130: 0x3c013e8b  lui         $at, 0x3E8B
    ctx->pc = 0x392130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16011 << 16));
    // 0x392134: 0x3421a305  ori         $at, $at, 0xA305
    ctx->pc = 0x392134u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41733);
    // 0x392138: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x392138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x39213c: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x39213cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x392140: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x392140u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x392144: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x392144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x392148: 0x46026081  sub.s       $f2, $f12, $f2
    ctx->pc = 0x392148u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x39214c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x39214cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x392150: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x392150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x392154: 0x3c013edb  lui         $at, 0x3EDB
    ctx->pc = 0x392154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16091 << 16));
    // 0x392158: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x392158u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
    // 0x39215c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x39215cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x392160: 0x46042842  mul.s       $f1, $f5, $f4
    ctx->pc = 0x392160u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x392164: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x392164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x392168: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x392168u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x39216c: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x39216cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x392170: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x392170u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x392174: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x392174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x392178: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x392178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x39217c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x39217cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x392180: 0x46017841  sub.s       $f1, $f15, $f1
    ctx->pc = 0x392180u;
    ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
    // 0x392184: 0x460b5982  mul.s       $f6, $f11, $f11
    ctx->pc = 0x392184u;
    ctx->f[6] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x392188: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x392188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x39218c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x39218cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x392190: 0x461428c0  add.s       $f3, $f5, $f20
    ctx->pc = 0x392190u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[20]);
    // 0x392194: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x392194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x392198: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x392198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x39219c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x39219cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3921a0: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x3921a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3921a4: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x3921a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x3921a8: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3921a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3921ac: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x3921acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x3921b0: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3921b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3921b4: 0x46052ac2  mul.s       $f11, $f5, $f5
    ctx->pc = 0x3921b4u;
    ctx->f[11] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x3921b8: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x3921b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x3921bc: 0x46045880  add.s       $f2, $f11, $f4
    ctx->pc = 0x3921bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x3921c0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x3921c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x3921c4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3921c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3921c8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3921c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3921cc: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x3921ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3921d0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x3921d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x3921d4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3921d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3921d8: 0x46041101  sub.s       $f4, $f2, $f4
    ctx->pc = 0x3921d8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x3921dc: 0x460b2101  sub.s       $f4, $f4, $f11
    ctx->pc = 0x3921dcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[11]);
    // 0x3921e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3921e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3921e4: 0x46022bc2  mul.s       $f15, $f5, $f2
    ctx->pc = 0x3921e4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x3921e8: 0x46040081  sub.s       $f2, $f0, $f4
    ctx->pc = 0x3921e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x3921ec: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x3921ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x3921f0: 0x46000b80  add.s       $f14, $f1, $f0
    ctx->pc = 0x3921f0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3921f4: 0x460e78c0  add.s       $f3, $f15, $f14
    ctx->pc = 0x3921f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x3921f8: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x3921f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3921fc: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x3921fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x392200: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x392200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x392204: 0x460f3881  sub.s       $f2, $f7, $f15
    ctx->pc = 0x392204u;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[15]);
    // 0x392208: 0x3c01369d  lui         $at, 0x369D
    ctx->pc = 0x392208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13981 << 16));
    // 0x39220c: 0x3421c3a0  ori         $at, $at, 0xC3A0
    ctx->pc = 0x39220cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50080);
    // 0x392210: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x392210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x392214: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x392214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x392218: 0x3c013f76  lui         $at, 0x3F76
    ctx->pc = 0x392218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16246 << 16));
    // 0x39221c: 0x3421384f  ori         $at, $at, 0x384F
    ctx->pc = 0x39221cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14415);
    // 0x392220: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x392220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392224: 0x24429e48  addiu       $v0, $v0, -0x61B8
    ctx->pc = 0x392224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942280));
    // 0x392228: 0x46027181  sub.s       $f6, $f14, $f2
    ctx->pc = 0x392228u;
    ctx->f[6] = FPU_SUB_S(ctx->f[14], ctx->f[2]);
    // 0x39222c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x39222cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x392230: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x392230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x392234: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x392234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x392238: 0x3c013f76  lui         $at, 0x3F76
    ctx->pc = 0x392238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16246 << 16));
    // 0x39223c: 0x34213800  ori         $at, $at, 0x3800
    ctx->pc = 0x39223cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14336);
    // 0x392240: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x392240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x392244: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x392244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x392248: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x392248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x39224c: 0x24429e40  addiu       $v0, $v0, -0x61C0
    ctx->pc = 0x39224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942272));
    // 0x392250: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x392250u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x392254: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x392254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x392258: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x392258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x39225c: 0x44896000  mtc1        $t1, $f12
    ctx->pc = 0x39225cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x392260: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x392260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x392264: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x392264u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x392268: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x392268u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x39226c: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x39226cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x392270: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x392270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x392274: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x392274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x392278: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x392278u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39227c: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x39227cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x392280: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x392280u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x392284: 0x460c2001  sub.s       $f0, $f4, $f12
    ctx->pc = 0x392284u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
    // 0x392288: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x392288u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x39228c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x39228cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x392290: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x392290u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x392294: 0x0  nop
    ctx->pc = 0x392294u;
    // NOP
label_392298:
    // 0x392298: 0x2542ffff  addiu       $v0, $t2, -0x1
    ctx->pc = 0x392298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x39229c: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x39229cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3922a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3922a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3922a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3922a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3922a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3922a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3922ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3922ACu;
    {
        const bool branch_taken_0x3922ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3922ac) {
            ctx->pc = 0x3922BCu;
            goto label_3922bc;
        }
    }
    ctx->pc = 0x3922B4u;
    // 0x3922b4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3922b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3922b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3922b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3922bc:
    // 0x3922bc: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x3922bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3922c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3922c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3922c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3922c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3922c8: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x3922c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x3922cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3922ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3922d0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3922d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3922d4: 0x4602a801  sub.s       $f0, $f21, $f2
    ctx->pc = 0x3922d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x3922d8: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x3922d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3922dc: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x3922dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x3922e0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3922e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3922e4: 0x460311c2  mul.s       $f7, $f2, $f3
    ctx->pc = 0x3922e4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3922e8: 0x46010180  add.s       $f6, $f0, $f1
    ctx->pc = 0x3922e8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3922ec: 0x46073340  add.s       $f13, $f6, $f7
    ctx->pc = 0x3922ecu;
    ctx->f[13] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x3922f0: 0x44076800  mfc1        $a3, $f13
    ctx->pc = 0x3922f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x3922f4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3922f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3922f8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x3922f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x3922fc: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x3922fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x392300: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x392300u;
    {
        const bool branch_taken_0x392300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x392300) {
            ctx->pc = 0x392320u;
            goto label_392320;
        }
    }
    ctx->pc = 0x392308u;
    // 0x392308: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x392308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x39230c: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x39230cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x392310: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x392310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x392314: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x392314u;
    {
        const bool branch_taken_0x392314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392314u;
        // 0x392318: 0x4601a002  mul.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392314) {
            ctx->pc = 0x3923A8u;
            goto label_3923a8;
        }
    }
    ctx->pc = 0x39231Cu;
    // 0x39231c: 0x0  nop
    ctx->pc = 0x39231cu;
    // NOP
label_392320:
    // 0x392320: 0x14a3000f  bne         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x392320u;
    {
        const bool branch_taken_0x392320 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x392324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392320u;
        // 0x392324: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392320) {
            ctx->pc = 0x392360u;
            goto label_392360;
        }
    }
    ctx->pc = 0x392328u;
    // 0x392328: 0x3c013338  lui         $at, 0x3338
    ctx->pc = 0x392328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13112 << 16));
    // 0x39232c: 0x3421aa3c  ori         $at, $at, 0xAA3C
    ctx->pc = 0x39232cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43580);
    // 0x392330: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x392330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392334: 0x46076841  sub.s       $f1, $f13, $f7
    ctx->pc = 0x392334u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[7]);
    // 0x392338: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x392338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x39233c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x39233cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x392340: 0x0  nop
    ctx->pc = 0x392340u;
    // NOP
    // 0x392344: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x392344u;
    {
        const bool branch_taken_0x392344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x392348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392344u;
        // 0x392348: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392344) {
            ctx->pc = 0x3923B0u;
            goto label_3923b0;
        }
    }
    ctx->pc = 0x39234Cu;
    // 0x39234c: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x39234cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x392350: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x392350u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x392354: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x392354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x392358: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x392358u;
    {
        const bool branch_taken_0x392358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392358u;
        // 0x39235c: 0x4601a002  mul.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392358) {
            ctx->pc = 0x3923A8u;
            goto label_3923a8;
        }
    }
    ctx->pc = 0x392360u;
label_392360:
    // 0x392360: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x392360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x392364: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x392364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x392368: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x392368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x39236c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x39236cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x392370: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x392370u;
    {
        const bool branch_taken_0x392370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x392370) {
            ctx->pc = 0x392398u;
            goto label_392398;
        }
    }
    ctx->pc = 0x392378u;
    // 0x392378: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x392378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x39237c: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x39237Cu;
    {
        const bool branch_taken_0x39237c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x392380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39237Cu;
        // 0x392380: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39237c) {
            ctx->pc = 0x3923B0u;
            goto label_3923b0;
        }
    }
    ctx->pc = 0x392384u;
    // 0x392384: 0x46076801  sub.s       $f0, $f13, $f7
    ctx->pc = 0x392384u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[7]);
    // 0x392388: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x392388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39238c: 0x0  nop
    ctx->pc = 0x39238cu;
    // NOP
    // 0x392390: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x392390u;
    {
        const bool branch_taken_0x392390 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x392394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392390u;
        // 0x392394: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392390) {
            ctx->pc = 0x3923B4u;
            goto label_3923b4;
        }
    }
    ctx->pc = 0x392398u;
label_392398:
    // 0x392398: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x392398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x39239c: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x39239cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x3923a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3923a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3923a4: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x3923a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_3923a8:
    // 0x3923a8: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x3923A8u;
    {
        const bool branch_taken_0x3923a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3923ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3923A8u;
        // 0x3923ac: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3923a8) {
            ctx->pc = 0x39256Cu;
            goto label_39256c;
        }
    }
    ctx->pc = 0x3923B0u;
label_3923b0:
    // 0x3923b0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3923b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_3923b4:
    // 0x3923b4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3923b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x3923b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3923b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3923bc: 0xa61024  and         $v0, $a1, $a2
    ctx->pc = 0x3923bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x3923c0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3923c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3923c4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3923C4u;
    {
        const bool branch_taken_0x3923c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3923C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3923C4u;
        // 0x3923c8: 0x225c3  sra         $a0, $v0, 23 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3923c4) {
            ctx->pc = 0x392430u;
            goto label_392430;
        }
    }
    ctx->pc = 0x3923CCu;
    // 0x3923cc: 0x2483ff82  addiu       $v1, $a0, -0x7E
    ctx->pc = 0x3923ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967170));
    // 0x3923d0: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x3923d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x3923d4: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x3923d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x3923d8: 0xa34821  addu        $t1, $a1, $v1
    ctx->pc = 0x3923d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3923dc: 0x1261024  and         $v0, $t1, $a2
    ctx->pc = 0x3923dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
    // 0x3923e0: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x3923e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x3923e4: 0x2448ff81  addiu       $t0, $v0, -0x7F
    ctx->pc = 0x3923e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x3923e8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x3923e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x3923ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3923ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3923f0: 0x1031007  srav        $v0, $v1, $t0
    ctx->pc = 0x3923f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 8) & 0x1F));
    // 0x3923f4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3923f4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3923f8: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x3923f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x3923fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3923fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x392400: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x392400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x392404: 0x460c39c1  sub.s       $f7, $f7, $f12
    ctx->pc = 0x392404u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[12]);
    // 0x392408: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x392408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x39240c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x39240cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x392410: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x392410u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x392414: 0x434807  srav        $t1, $v1, $v0
    ctx->pc = 0x392414u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x392418: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x392418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39241c: 0x46073100  add.s       $f4, $f6, $f7
    ctx->pc = 0x39241cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x392420: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x392420u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x392424: 0x91023  negu        $v0, $t1
    ctx->pc = 0x392424u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x392428: 0x44480a  movz        $t1, $v0, $a0
    ctx->pc = 0x392428u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
    // 0x39242c: 0x44072000  mfc1        $a3, $f4
    ctx->pc = 0x39242cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_392430:
    // 0x392430: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x392430u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392434: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x392434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x392438: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x392438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x39243c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x39243cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x392440: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x392440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x392444: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x392444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x392448: 0x34217200  ori         $at, $at, 0x7200
    ctx->pc = 0x392448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29184);
    // 0x39244c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x39244cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x392450: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x392450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x392454: 0x34217218  ori         $at, $at, 0x7218
    ctx->pc = 0x392454u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29208);
    // 0x392458: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x392458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x39245c: 0x46076041  sub.s       $f1, $f12, $f7
    ctx->pc = 0x39245cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[7]);
    // 0x392460: 0x3c0135bf  lui         $at, 0x35BF
    ctx->pc = 0x392460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13759 << 16));
    // 0x392464: 0x3421be8c  ori         $at, $at, 0xBE8C
    ctx->pc = 0x392464u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48780);
    // 0x392468: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x392468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x39246c: 0x460363c2  mul.s       $f15, $f12, $f3
    ctx->pc = 0x39246cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x392470: 0x3c013331  lui         $at, 0x3331
    ctx->pc = 0x392470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13105 << 16));
    // 0x392474: 0x3421bb4c  ori         $at, $at, 0xBB4C
    ctx->pc = 0x392474u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47948);
    // 0x392478: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x392478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39247c: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x39247cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x392480: 0x3c01b5dd  lui         $at, 0xB5DD
    ctx->pc = 0x392480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46557 << 16));
    // 0x392484: 0x3421ea0e  ori         $at, $at, 0xEA0E
    ctx->pc = 0x392484u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59918);
    // 0x392488: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x392488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x39248c: 0x46013041  sub.s       $f1, $f6, $f1
    ctx->pc = 0x39248cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x392490: 0x3c01bb36  lui         $at, 0xBB36
    ctx->pc = 0x392490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47926 << 16));
    // 0x392494: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x392494u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x392498: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x392498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x39249c: 0x3c01388a  lui         $at, 0x388A
    ctx->pc = 0x39249cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14474 << 16));
    // 0x3924a0: 0x3421b355  ori         $at, $at, 0xB355
    ctx->pc = 0x3924a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45909);
    // 0x3924a4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x3924a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3924a8: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x3924a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x3924ac: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x3924acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x3924b0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x3924b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x3924b4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3924b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3924b8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3924b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x3924bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3924bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3924c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3924c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3924c4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3924c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3924c8: 0x46020b80  add.s       $f14, $f1, $f2
    ctx->pc = 0x3924c8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3924cc: 0x460e7b40  add.s       $f13, $f15, $f14
    ctx->pc = 0x3924ccu;
    ctx->f[13] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x3924d0: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x3924d0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x3924d4: 0x460f6841  sub.s       $f1, $f13, $f15
    ctx->pc = 0x3924d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[15]);
    // 0x3924d8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3924d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3924dc: 0x46017241  sub.s       $f9, $f14, $f1
    ctx->pc = 0x3924dcu;
    ctx->f[9] = FPU_SUB_S(ctx->f[14], ctx->f[1]);
    // 0x3924e0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3924e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3924e4: 0x46096882  mul.s       $f2, $f13, $f9
    ctx->pc = 0x3924e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[9]);
    // 0x3924e8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3924e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3924ec: 0x46024880  add.s       $f2, $f9, $f2
    ctx->pc = 0x3924ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[9], ctx->f[2]);
    // 0x3924f0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x3924f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x3924f4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3924f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3924f8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x3924f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x3924fc: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3924fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x392500: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x392500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x392504: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x392504u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x392508: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x392508u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x39250c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x39250cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x392510: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x392510u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x392514: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x392514u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x392518: 0x0  nop
    ctx->pc = 0x392518u;
    // NOP
    // 0x39251c: 0x0  nop
    ctx->pc = 0x39251cu;
    // NOP
    // 0x392520: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x392520u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x392524: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x392524u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x392528: 0x460d0041  sub.s       $f1, $f0, $f13
    ctx->pc = 0x392528u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x39252c: 0x46012341  sub.s       $f13, $f4, $f1
    ctx->pc = 0x39252cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x392530: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x392530u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x392534: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x392534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392538: 0x915c0  sll         $v0, $t1, 23
    ctx->pc = 0x392538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 23));
    // 0x39253c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x39253cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x392540: 0x51dc3  sra         $v1, $a1, 23
    ctx->pc = 0x392540u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 23));
    // 0x392544: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x392544u;
    {
        const bool branch_taken_0x392544 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x392548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392544u;
        // 0x392548: 0x46006b06  mov.s       $f12, $f13 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392544) {
            ctx->pc = 0x392560u;
            goto label_392560;
        }
    }
    ctx->pc = 0x39254Cu;
    // 0x39254c: 0xc0e4eea  jal         func_393BA8
    ctx->pc = 0x39254Cu;
    SET_GPR_U32(ctx, 31, 0x392554u);
    ctx->pc = 0x392550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39254Cu;
    // 0x392550: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393BA8u, 0x39254Cu, 0x392554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392554u;
label_392554:
    // 0x392554: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x392554u;
    {
        const bool branch_taken_0x392554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392554u;
        // 0x392558: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392554) {
            ctx->pc = 0x392568u;
            goto label_392568;
        }
    }
    ctx->pc = 0x39255Cu;
    // 0x39255c: 0x0  nop
    ctx->pc = 0x39255cu;
    // NOP
label_392560:
    // 0x392560: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x392560u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x392564: 0x0  nop
    ctx->pc = 0x392564u;
    // NOP
label_392568:
    // 0x392568: 0x460da002  mul.s       $f0, $f20, $f13
    ctx->pc = 0x392568u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
label_39256c:
    // 0x39256c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x39256cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_392570:
    // 0x392570: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x392570u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x392574: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x392574u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x392578: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x392578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39257c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x39257cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x392580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x392580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x392584: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x392584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x392588: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x392588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x39258c: 0x3e00008  jr          $ra
    ctx->pc = 0x39258Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39258Cu;
        // 0x392590: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39258Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x392594u;
    // 0x392594: 0x0  nop
    ctx->pc = 0x392594u;
    // NOP
    ctx->pc = 0x392598u;
}
