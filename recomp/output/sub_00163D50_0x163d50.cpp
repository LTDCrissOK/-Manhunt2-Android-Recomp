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

// Function: sub_00163D50
// Address: 0x163d50 - 0x163e90
void sub_00163D50_0x163d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163D50_0x163d50");
#endif

    switch (ctx->pc) {
        case 0x163da0u: goto label_163da0;
        case 0x163decu: goto label_163dec;
        case 0x163e08u: goto label_163e08;
        case 0x163e34u: goto label_163e34;
        default: break;
    }

    ctx->pc = 0x163d50u;

    // 0x163d50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x163d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x163d54: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x163d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x163d58: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x163d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x163d5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x163d5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d60: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x163d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x163d64: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x163d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x163d68: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x163d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x163d6c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x163d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x163d70: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x163d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x163d74: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x163d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x163d78: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x163d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x163d7c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x163d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x163d80: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x163d80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x163d84: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x163D84u;
    {
        const bool branch_taken_0x163d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D84u;
        // 0x163d88: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d84) {
            ctx->pc = 0x163E5Cu;
            goto label_163e5c;
        }
    }
    ctx->pc = 0x163D8Cu;
    // 0x163d8c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x163d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x163d90: 0x245e9c14  addiu       $fp, $v0, -0x63EC
    ctx->pc = 0x163d90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x163d94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x163d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d98: 0x3c170049  lui         $s7, 0x49
    ctx->pc = 0x163d98u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)73 << 16));
    // 0x163d9c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x163d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_163da0:
    // 0x163da0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x163da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x163da4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163da8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x163da8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163dac: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x163DACu;
    {
        const bool branch_taken_0x163dac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x163DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DACu;
        // 0x163db0: 0x24960001  addiu       $s6, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163dac) {
            ctx->pc = 0x163E40u;
            goto label_163e40;
        }
    }
    ctx->pc = 0x163DB4u;
    // 0x163db4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x163db4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x163db8: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x163db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x163dbc: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x163dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x163dc0: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x163dc0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x163dc4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x163dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163dc8: 0x90430234  lbu         $v1, 0x234($v0)
    ctx->pc = 0x163dc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 564)));
    // 0x163dcc: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x163DCCu;
    {
        const bool branch_taken_0x163dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DCCu;
        // 0x163dd0: 0x26e4a080  addiu       $a0, $s7, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294942848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163dcc) {
            ctx->pc = 0x163E40u;
            goto label_163e40;
        }
    }
    ctx->pc = 0x163DD4u;
    // 0x163dd4: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x163dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x163dd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x163dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ddc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163de0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x163de0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163de4: 0xc049828  jal         func_1260A0
    ctx->pc = 0x163DE4u;
    SET_GPR_U32(ctx, 31, 0x163DECu);
    ctx->pc = 0x163DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163DE4u;
    // 0x163de8: 0x3c140049  lui         $s4, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)73 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1260A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1260A0u, 0x163DE4u, 0x163DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163DECu;
label_163dec:
    // 0x163dec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x163decu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163df0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x163DF0u;
    {
        const bool branch_taken_0x163df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DF0u;
        // 0x163df4: 0x32c400ff  andi        $a0, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163df0) {
            ctx->pc = 0x163E44u;
            goto label_163e44;
        }
    }
    ctx->pc = 0x163DF8u;
    // 0x163df8: 0x265102f0  addiu       $s1, $s2, 0x2F0
    ctx->pc = 0x163df8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 752));
    // 0x163dfc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x163dfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163e00: 0x8e4202e4  lw          $v0, 0x2E4($s2)
    ctx->pc = 0x163e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 740)));
    // 0x163e04: 0x0  nop
    ctx->pc = 0x163e04u;
    // NOP
label_163e08:
    // 0x163e08: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x163e08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x163e0c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x163e0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x163e10: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x163e10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x163e14: 0xac730020  sw          $s3, 0x20($v1)
    ctx->pc = 0x163e14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 19));
    // 0x163e18: 0x2684a080  addiu       $a0, $s4, -0x5F80
    ctx->pc = 0x163e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294942848));
    // 0x163e1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x163e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163e20: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x163e20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163e24: 0x93a60000  lbu         $a2, 0x0($sp)
    ctx->pc = 0x163e24u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163e28: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x163e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x163e2c: 0xc049828  jal         func_1260A0
    ctx->pc = 0x163E2Cu;
    SET_GPR_U32(ctx, 31, 0x163E34u);
    ctx->pc = 0x163E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163E2Cu;
    // 0x163e30: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1260A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1260A0u, 0x163E2Cu, 0x163E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163E34u;
label_163e34:
    // 0x163e34: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x163e34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163e38: 0x5460fff3  bnel        $v1, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x163E38u;
    {
        const bool branch_taken_0x163e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x163e38) {
            ctx->pc = 0x163E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163E38u;
            // 0x163e3c: 0x8e4202e4  lw          $v0, 0x2E4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 740)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163e08;
        }
    }
    ctx->pc = 0x163E40u;
label_163e40:
    // 0x163e40: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x163e40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_163e44:
    // 0x163e44: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x163e44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x163e48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163E48u;
    {
        const bool branch_taken_0x163e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E48u;
        // 0x163e4c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e48) {
            ctx->pc = 0x163E60u;
            goto label_163e60;
        }
    }
    ctx->pc = 0x163E50u;
    // 0x163e50: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x163e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x163e54: 0x56a2ffd2  bnel        $s5, $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x163E54u;
    {
        const bool branch_taken_0x163e54 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x163e54) {
            ctx->pc = 0x163E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163E54u;
            // 0x163e58: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163da0;
        }
    }
    ctx->pc = 0x163E5Cu;
label_163e5c:
    // 0x163e5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x163e5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_163e60:
    // 0x163e60: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x163e60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x163e64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x163e64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163e68: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x163e68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x163e6c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x163e6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x163e70: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x163e70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x163e74: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x163e74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x163e78: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x163e78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x163e7c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x163e7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x163e80: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x163e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x163e84: 0x3e00008  jr          $ra
    ctx->pc = 0x163E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E84u;
        // 0x163e88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163E8Cu;
    // 0x163e8c: 0x0  nop
    ctx->pc = 0x163e8cu;
    // NOP
    ctx->pc = 0x163e90u;
}
