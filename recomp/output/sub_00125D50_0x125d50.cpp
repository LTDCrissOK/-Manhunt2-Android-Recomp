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

// Function: sub_00125D50
// Address: 0x125d50 - 0x125f80
void sub_00125D50_0x125d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125D50_0x125d50");
#endif

    switch (ctx->pc) {
        case 0x125de8u: goto label_125de8;
        case 0x125e60u: goto label_125e60;
        case 0x125e78u: goto label_125e78;
        case 0x125ea0u: goto label_125ea0;
        case 0x125ec8u: goto label_125ec8;
        default: break;
    }

    ctx->pc = 0x125d50u;

    // 0x125d50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x125d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x125d54: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x125d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x125d58: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x125d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x125d5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x125d5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d60: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x125d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x125d64: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x125d64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d68: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x125d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x125d6c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x125d6cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d70: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x125d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x125d74: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x125d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x125d78: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x125d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x125d7c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x125d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x125d80: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x125d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x125d84: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x125d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x125d88: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x125d88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x125d8c: 0x92440a70  lbu         $a0, 0xA70($s2)
    ctx->pc = 0x125d8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2672)));
    // 0x125d90: 0x1080006e  beqz        $a0, . + 4 + (0x6E << 2)
    ctx->pc = 0x125D90u;
    {
        const bool branch_taken_0x125d90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x125D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D90u;
        // 0x125d94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d90) {
            ctx->pc = 0x125F4Cu;
            goto label_125f4c;
        }
    }
    ctx->pc = 0x125D98u;
    // 0x125d98: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x125d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x125d9c: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x125d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x125da0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x125da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x125da4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x125da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x125da8: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x125da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x125dac: 0x50400067  beql        $v0, $zero, . + 4 + (0x67 << 2)
    ctx->pc = 0x125DACu;
    {
        const bool branch_taken_0x125dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125dac) {
            ctx->pc = 0x125DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125DACu;
            // 0x125db0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125F4Cu;
            goto label_125f4c;
        }
    }
    ctx->pc = 0x125DB4u;
    // 0x125db4: 0x90420234  lbu         $v0, 0x234($v0)
    ctx->pc = 0x125db4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 564)));
    // 0x125db8: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x125DB8u;
    {
        const bool branch_taken_0x125db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DB8u;
        // 0x125dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125db8) {
            ctx->pc = 0x125F4Cu;
            goto label_125f4c;
        }
    }
    ctx->pc = 0x125DC0u;
    // 0x125dc0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x125dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x125dc4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x125dc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125dc8: 0x8c53a9d4  lw          $s3, -0x562C($v0)
    ctx->pc = 0x125dc8u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x125dcc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x125dccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125dd0: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x125dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125dd4: 0x284182b  sltu        $v1, $s4, $a0
    ctx->pc = 0x125dd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x125dd8: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x125dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x125ddc: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x125DDCu;
    {
        const bool branch_taken_0x125ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DDCu;
        // 0x125de0: 0x53980b  movn        $s3, $v0, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ddc) {
            ctx->pc = 0x125E40u;
            goto label_125e40;
        }
    }
    ctx->pc = 0x125DE4u;
    // 0x125de4: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x125de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
label_125de8:
    // 0x125de8: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x125de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x125dec: 0x8e030870  lw          $v1, 0x870($s0)
    ctx->pc = 0x125decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2160)));
    // 0x125df0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x125DF0u;
    {
        const bool branch_taken_0x125df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DF0u;
        // 0x125df4: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125df0) {
            ctx->pc = 0x125E30u;
            goto label_125e30;
        }
    }
    ctx->pc = 0x125DF8u;
    // 0x125df8: 0x8e020894  lw          $v0, 0x894($s0)
    ctx->pc = 0x125df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2196)));
    // 0x125dfc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x125DFCu;
    {
        const bool branch_taken_0x125dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DFCu;
        // 0x125e00: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125dfc) {
            ctx->pc = 0x125E30u;
            goto label_125e30;
        }
    }
    ctx->pc = 0x125E04u;
    // 0x125e04: 0x8e0208a4  lw          $v0, 0x8A4($s0)
    ctx->pc = 0x125e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2212)));
    // 0x125e08: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x125e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x125e0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x125E0Cu;
    {
        const bool branch_taken_0x125e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E0Cu;
        // 0x125e10: 0x3b41021  addu        $v0, $sp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e0c) {
            ctx->pc = 0x125E20u;
            goto label_125e20;
        }
    }
    ctx->pc = 0x125E14u;
    // 0x125e14: 0x8e02089c  lw          $v0, 0x89C($s0)
    ctx->pc = 0x125e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2204)));
    // 0x125e18: 0x1055000d  beq         $v0, $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x125E18u;
    {
        const bool branch_taken_0x125e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x125E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E18u;
        // 0x125e1c: 0x3b41021  addu        $v0, $sp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e18) {
            ctx->pc = 0x125E50u;
            goto label_125e50;
        }
    }
    ctx->pc = 0x125E20u;
label_125e20:
    // 0x125e20: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x125e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x125e24: 0xa0510000  sb          $s1, 0x0($v0)
    ctx->pc = 0x125e24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x125e28: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x125e28u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x125e2c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x125e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_125e30:
    // 0x125e30: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x125e30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x125e34: 0x224182b  sltu        $v1, $s1, $a0
    ctx->pc = 0x125e34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x125e38: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x125E38u;
    {
        const bool branch_taken_0x125e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x125E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E38u;
        // 0x125e3c: 0x111180  sll         $v0, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e38) {
            ctx->pc = 0x125DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125de8;
        }
    }
    ctx->pc = 0x125E40u;
label_125e40:
    // 0x125e40: 0x1680000f  bnez        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x125E40u;
    {
        const bool branch_taken_0x125e40 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x125E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E40u;
        // 0x125e44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e40) {
            ctx->pc = 0x125E80u;
            goto label_125e80;
        }
    }
    ctx->pc = 0x125E48u;
    // 0x125e48: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x125E48u;
    {
        const bool branch_taken_0x125e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E48u;
        // 0x125e4c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e48) {
            ctx->pc = 0x125F50u;
            goto label_125f50;
        }
    }
    ctx->pc = 0x125E50u;
label_125e50:
    // 0x125e50: 0xae150894  sw          $s5, 0x894($s0)
    ctx->pc = 0x125e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2196), GPR_U32(ctx, 21));
    // 0x125e54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x125e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e58: 0xc049f6a  jal         func_127DA8
    ctx->pc = 0x125E58u;
    SET_GPR_U32(ctx, 31, 0x125E60u);
    ctx->pc = 0x125E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125E58u;
    // 0x125e5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127DA8u, 0x125E58u, 0x125E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E60u;
label_125e60:
    // 0x125e60: 0xae0008a4  sw          $zero, 0x8A4($s0)
    ctx->pc = 0x125e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2212), GPR_U32(ctx, 0));
    // 0x125e64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x125e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e68: 0xae00089c  sw          $zero, 0x89C($s0)
    ctx->pc = 0x125e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2204), GPR_U32(ctx, 0));
    // 0x125e6c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x125e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e70: 0xc049f74  jal         func_127DD0
    ctx->pc = 0x125E70u;
    SET_GPR_U32(ctx, 31, 0x125E78u);
    ctx->pc = 0x125E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125E70u;
    // 0x125e74: 0xae0008a0  sw          $zero, 0x8A0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2208), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127DD0u, 0x125E70u, 0x125E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125E78u;
label_125e78:
    // 0x125e78: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x125E78u;
    {
        const bool branch_taken_0x125e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E78u;
        // 0x125e7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e78) {
            ctx->pc = 0x125F4Cu;
            goto label_125f4c;
        }
    }
    ctx->pc = 0x125E80u;
label_125e80:
    // 0x125e80: 0x12800031  beqz        $s4, . + 4 + (0x31 << 2)
    ctx->pc = 0x125E80u;
    {
        const bool branch_taken_0x125e80 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x125E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125E80u;
        // 0x125e84: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e80) {
            ctx->pc = 0x125F48u;
            goto label_125f48;
        }
    }
    ctx->pc = 0x125E88u;
    // 0x125e88: 0x3c01451c  lui         $at, 0x451C
    ctx->pc = 0x125e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17692 << 16));
    // 0x125e8c: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x125e8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x125e90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x125e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x125e94: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x125e94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x125e98: 0x3b11821  addu        $v1, $sp, $s1
    ctx->pc = 0x125e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
    // 0x125e9c: 0x0  nop
    ctx->pc = 0x125e9cu;
    // NOP
label_125ea0:
    // 0x125ea0: 0x92420a70  lbu         $v0, 0xA70($s2)
    ctx->pc = 0x125ea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2672)));
    // 0x125ea4: 0x90700000  lbu         $s0, 0x0($v1)
    ctx->pc = 0x125ea4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x125ea8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x125ea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x125eac: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x125EACu;
    {
        const bool branch_taken_0x125eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125EACu;
        // 0x125eb0: 0x108180  sll         $s0, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125eac) {
            ctx->pc = 0x125F34u;
            goto label_125f34;
        }
    }
    ctx->pc = 0x125EB4u;
    // 0x125eb4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x125eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x125eb8: 0x2123021  addu        $a2, $s0, $s2
    ctx->pc = 0x125eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x125ebc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x125ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ec0: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x125EC0u;
    SET_GPR_U32(ctx, 31, 0x125EC8u);
    ctx->pc = 0x125EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125EC0u;
    // 0x125ec4: 0x24c60880  addiu       $a2, $a2, 0x880 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x125EC0u, 0x125EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125EC8u;
label_125ec8:
    // 0x125ec8: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x125ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x125ecc: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x125eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x125ed0: 0xc6c40008  lwc1        $f4, 0x8($s6)
    ctx->pc = 0x125ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x125ed4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x125ed4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x125ed8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x125ed8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x125edc: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x125edcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x125ee0: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x125ee0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125ee4: 0x0  nop
    ctx->pc = 0x125ee4u;
    // NOP
    // 0x125ee8: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x125EE8u;
    {
        const bool branch_taken_0x125ee8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x125EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125EE8u;
        // 0x125eec: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ee8) {
            ctx->pc = 0x125F38u;
            goto label_125f38;
        }
    }
    ctx->pc = 0x125EF0u;
    // 0x125ef0: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x125ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x125ef4: 0x8c6208a4  lw          $v0, 0x8A4($v1)
    ctx->pc = 0x125ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2212)));
    // 0x125ef8: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x125ef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x125efc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x125EFCu;
    {
        const bool branch_taken_0x125efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125efc) {
            ctx->pc = 0x125F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125EFCu;
            // 0x125f00: 0xe46108a0  swc1        $f1, 0x8A0($v1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2208), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x125F28u;
            goto label_125f28;
        }
    }
    ctx->pc = 0x125F04u;
    // 0x125f04: 0xc46008a0  lwc1        $f0, 0x8A0($v1)
    ctx->pc = 0x125f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125f08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x125f08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125f0c: 0x0  nop
    ctx->pc = 0x125f0cu;
    // NOP
    // 0x125f10: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x125F10u;
    {
        const bool branch_taken_0x125f10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x125F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F10u;
        // 0x125f14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f10) {
            ctx->pc = 0x125F1Cu;
            goto label_125f1c;
        }
    }
    ctx->pc = 0x125F18u;
    // 0x125f18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x125f18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125f1c:
    // 0x125f1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x125F1Cu;
    {
        const bool branch_taken_0x125f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F1Cu;
        // 0x125f20: 0x2501821  addu        $v1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f1c) {
            ctx->pc = 0x125F34u;
            goto label_125f34;
        }
    }
    ctx->pc = 0x125F24u;
    // 0x125f24: 0xe46108a0  swc1        $f1, 0x8A0($v1)
    ctx->pc = 0x125f24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2208), bits); }
label_125f28:
    // 0x125f28: 0xac75089c  sw          $s5, 0x89C($v1)
    ctx->pc = 0x125f28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2204), GPR_U32(ctx, 21));
    // 0x125f2c: 0x8fc2a9d4  lw          $v0, -0x562C($fp)
    ctx->pc = 0x125f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294945236)));
    // 0x125f30: 0xac6208a4  sw          $v0, 0x8A4($v1)
    ctx->pc = 0x125f30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2212), GPR_U32(ctx, 2));
label_125f34:
    // 0x125f34: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x125f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_125f38:
    // 0x125f38: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x125f38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x125f3c: 0x234182b  sltu        $v1, $s1, $s4
    ctx->pc = 0x125f3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x125f40: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x125F40u;
    {
        const bool branch_taken_0x125f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x125F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F40u;
        // 0x125f44: 0x3b11821  addu        $v1, $sp, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f40) {
            ctx->pc = 0x125EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125ea0;
        }
    }
    ctx->pc = 0x125F48u;
label_125f48:
    // 0x125f48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x125f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125f4c:
    // 0x125f4c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x125f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_125f50:
    // 0x125f50: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x125f50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125f54: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x125f54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125f58: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x125f58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x125f5c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x125f5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125f60: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x125f60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125f64: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x125f64u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x125f68: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x125f68u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x125f6c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x125f6cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x125f70: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x125f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x125f74: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x125f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x125f78: 0x3e00008  jr          $ra
    ctx->pc = 0x125F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F78u;
        // 0x125f7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125F80u;
}
