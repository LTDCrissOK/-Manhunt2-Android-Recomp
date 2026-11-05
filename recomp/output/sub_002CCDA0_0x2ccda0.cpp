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

// Function: sub_002CCDA0
// Address: 0x2ccda0 - 0x2cd028
void sub_002CCDA0_0x2ccda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CCDA0_0x2ccda0");
#endif

    switch (ctx->pc) {
        case 0x2ccdf4u: goto label_2ccdf4;
        case 0x2cce38u: goto label_2cce38;
        case 0x2cce40u: goto label_2cce40;
        case 0x2cce50u: goto label_2cce50;
        case 0x2cce70u: goto label_2cce70;
        case 0x2ccea8u: goto label_2ccea8;
        case 0x2ccec0u: goto label_2ccec0;
        case 0x2cced8u: goto label_2cced8;
        case 0x2cceecu: goto label_2cceec;
        case 0x2ccf00u: goto label_2ccf00;
        case 0x2ccf14u: goto label_2ccf14;
        case 0x2ccf28u: goto label_2ccf28;
        case 0x2ccf3cu: goto label_2ccf3c;
        case 0x2ccf50u: goto label_2ccf50;
        case 0x2ccf64u: goto label_2ccf64;
        case 0x2ccf78u: goto label_2ccf78;
        case 0x2ccf90u: goto label_2ccf90;
        case 0x2ccfa4u: goto label_2ccfa4;
        case 0x2ccfb8u: goto label_2ccfb8;
        case 0x2ccfe8u: goto label_2ccfe8;
        default: break;
    }

    ctx->pc = 0x2ccda0u;

    // 0x2ccda0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ccda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2ccda4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ccda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2ccda8: 0x8c43b4a8  lw          $v1, -0x4B58($v0)
    ctx->pc = 0x2ccda8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2ccdac: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2ccdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2ccdb0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2ccdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2ccdb4: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x2ccdb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
    // 0x2ccdb8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2ccdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ccdbc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2ccdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ccdc0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2ccdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x2ccdc4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ccdc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccdc8: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x2ccdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x2ccdcc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2ccdccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccdd0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2ccdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2ccdd4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ccdd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccdd8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2ccdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ccddc: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2ccddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2ccde0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ccde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2ccde4: 0x8c6230ac  lw          $v0, 0x30AC($v1)
    ctx->pc = 0x2ccde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12460)));
    // 0x2ccde8: 0xac6530ac  sw          $a1, 0x30AC($v1)
    ctx->pc = 0x2ccde8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12460), GPR_U32(ctx, 5));
    // 0x2ccdec: 0xc0b3516  jal         func_2CD458
    ctx->pc = 0x2CCDECu;
    SET_GPR_U32(ctx, 31, 0x2CCDF4u);
    ctx->pc = 0x2CCDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCDECu;
    // 0x2ccdf0: 0x2b82b  sltu        $s7, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD458u, 0x2CCDECu, 0x2CCDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCDF4u;
label_2ccdf4:
    // 0x2ccdf4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCDF4u;
    {
        const bool branch_taken_0x2ccdf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCDF4u;
        // 0x2ccdf8: 0x8ec3b4a8  lw          $v1, -0x4B58($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccdf4) {
            ctx->pc = 0x2CCE04u;
            goto label_2cce04;
        }
    }
    ctx->pc = 0x2CCDFCu;
    // 0x2ccdfc: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2CCDFCu;
    {
        const bool branch_taken_0x2ccdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCDFCu;
        // 0x2cce00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccdfc) {
            ctx->pc = 0x2CCFF0u;
            goto label_2ccff0;
        }
    }
    ctx->pc = 0x2CCE04u;
label_2cce04:
    // 0x2cce04: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2cce04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2cce08: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x2cce08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x2cce0c: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2cce0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x2cce10: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2cce10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2cce14: 0x34842f80  ori         $a0, $a0, 0x2F80
    ctx->pc = 0x2cce14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12160);
    // 0x2cce18: 0x8c482f4c  lw          $t0, 0x2F4C($v0)
    ctx->pc = 0x2cce18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12108)));
    // 0x2cce1c: 0x34a5ff00  ori         $a1, $a1, 0xFF00
    ctx->pc = 0x2cce1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65280);
    // 0x2cce20: 0x34c62f48  ori         $a2, $a2, 0x2F48
    ctx->pc = 0x2cce20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)12104);
    // 0x2cce24: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2cce24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cce28: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x2cce28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2cce2c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2cce2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cce30: 0xc0b340a  jal         func_2CD028
    ctx->pc = 0x2CCE30u;
    SET_GPR_U32(ctx, 31, 0x2CCE38u);
    ctx->pc = 0x2CCE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCE30u;
    // 0x2cce34: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD028u, 0x2CCE30u, 0x2CCE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE38u;
label_2cce38:
    // 0x2cce38: 0xc0b3600  jal         func_2CD800
    ctx->pc = 0x2CCE38u;
    SET_GPR_U32(ctx, 31, 0x2CCE40u);
    ctx->pc = 0x2CD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD800u, 0x2CCE38u, 0x2CCE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE40u;
label_2cce40:
    // 0x2cce40: 0x12400060  beqz        $s2, . + 4 + (0x60 << 2)
    ctx->pc = 0x2CCE40u;
    {
        const bool branch_taken_0x2cce40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCE40u;
        // 0x2cce44: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce40) {
            ctx->pc = 0x2CCFC4u;
            goto label_2ccfc4;
        }
    }
    ctx->pc = 0x2CCE48u;
    // 0x2cce48: 0x24153200  addiu       $s5, $zero, 0x3200
    ctx->pc = 0x2cce48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12800));
    // 0x2cce4c: 0x3c07001f  lui         $a3, 0x1F
    ctx->pc = 0x2cce4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)31 << 16));
label_2cce50:
    // 0x2cce50: 0x141440  sll         $v0, $s4, 17
    ctx->pc = 0x2cce50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 17));
    // 0x2cce54: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2cce54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2cce58: 0x36861d00  ori         $a2, $s4, 0x1D00
    ctx->pc = 0x2cce58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)7424);
    // 0x2cce5c: 0x34058050  ori         $a1, $zero, 0x8050
    ctx->pc = 0x2cce5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32848);
    // 0x2cce60: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x2cce60u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2cce64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cce64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cce68: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CCE68u;
    SET_GPR_U32(ctx, 31, 0x2CCE70u);
    ctx->pc = 0x2CCE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCE68u;
    // 0x2cce6c: 0x36900980  ori         $s0, $s4, 0x980 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)2432);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CCE68u, 0x2CCE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE70u;
label_2cce70:
    // 0x2cce70: 0x36910a80  ori         $s1, $s4, 0xA80
    ctx->pc = 0x2cce70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)2688);
    // 0x2cce74: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x2cce74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x2cce78: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x2cce78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2cce7c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2cce7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2cce80: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2cce80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2cce84: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2cce84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2cce88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cce88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cce8c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x2cce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x2cce90: 0x34058020  ori         $a1, $zero, 0x8020
    ctx->pc = 0x2cce90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x2cce94: 0xa7b50008  sh          $s5, 0x8($sp)
    ctx->pc = 0x2cce94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 21));
    // 0x2cce98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cce98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cce9c: 0xa7b5000a  sh          $s5, 0xA($sp)
    ctx->pc = 0x2cce9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 21));
    // 0x2ccea0: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CCEA0u;
    SET_GPR_U32(ctx, 31, 0x2CCEA8u);
    ctx->pc = 0x2CCEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCEA0u;
    // 0x2ccea4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CCEA0u, 0x2CCEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCEA8u;
label_2ccea8:
    // 0x2ccea8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ccea8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cceac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cceacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cceb0: 0x34058020  ori         $a1, $zero, 0x8020
    ctx->pc = 0x2cceb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x2cceb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2cceb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cceb8: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CCEB8u;
    SET_GPR_U32(ctx, 31, 0x2CCEC0u);
    ctx->pc = 0x2CCEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCEB8u;
    // 0x2ccebc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CCEB8u, 0x2CCEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCEC0u;
label_2ccec0:
    // 0x2ccec0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ccec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccec4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ccec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccec8: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x2ccec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x2ccecc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cceccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cced0: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CCED0u;
    SET_GPR_U32(ctx, 31, 0x2CCED8u);
    ctx->pc = 0x2CCED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCED0u;
    // 0x2cced4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CCED0u, 0x2CCED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCED8u;
label_2cced8:
    // 0x2cced8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cced8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccedc: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x2ccedcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x2ccee0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ccee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccee4: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CCEE4u;
    SET_GPR_U32(ctx, 31, 0x2CCEECu);
    ctx->pc = 0x2CCEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCEE4u;
    // 0x2ccee8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CCEE4u, 0x2CCEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCEECu;
label_2cceec:
    // 0x2cceec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cceecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccef0: 0x340580f0  ori         $a1, $zero, 0x80F0
    ctx->pc = 0x2ccef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x2ccef4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ccef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccef8: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CCEF8u;
    SET_GPR_U32(ctx, 31, 0x2CCF00u);
    ctx->pc = 0x2CCEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCEF8u;
    // 0x2ccefc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CCEF8u, 0x2CCF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF00u;
label_2ccf00:
    // 0x2ccf00: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2ccf00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf04: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ccf04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ccf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccf0c: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CCF0Cu;
    SET_GPR_U32(ctx, 31, 0x2CCF14u);
    ctx->pc = 0x2CCF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF0Cu;
    // 0x2ccf10: 0x34058130  ori         $a1, $zero, 0x8130 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33072);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CCF0Cu, 0x2CCF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF14u;
label_2ccf14:
    // 0x2ccf14: 0x36860002  ori         $a2, $s4, 0x2
    ctx->pc = 0x2ccf14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)2);
    // 0x2ccf18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ccf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccf1c: 0x34058070  ori         $a1, $zero, 0x8070
    ctx->pc = 0x2ccf1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32880);
    // 0x2ccf20: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CCF20u;
    SET_GPR_U32(ctx, 31, 0x2CCF28u);
    ctx->pc = 0x2CCF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF20u;
    // 0x2ccf24: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CCF20u, 0x2CCF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF28u;
label_2ccf28:
    // 0x2ccf28: 0x36860b80  ori         $a2, $s4, 0xB80
    ctx->pc = 0x2ccf28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)2944);
    // 0x2ccf2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ccf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccf30: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x2ccf30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x2ccf34: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CCF34u;
    SET_GPR_U32(ctx, 31, 0x2CCF3Cu);
    ctx->pc = 0x2CCF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF34u;
    // 0x2ccf38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CCF34u, 0x2CCF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF3Cu;
label_2ccf3c:
    // 0x2ccf3c: 0x36860c80  ori         $a2, $s4, 0xC80
    ctx->pc = 0x2ccf3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)3200);
    // 0x2ccf40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ccf40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccf44: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x2ccf44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x2ccf48: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CCF48u;
    SET_GPR_U32(ctx, 31, 0x2CCF50u);
    ctx->pc = 0x2CCF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF48u;
    // 0x2ccf4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CCF48u, 0x2CCF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF50u;
label_2ccf50:
    // 0x2ccf50: 0x36861900  ori         $a2, $s4, 0x1900
    ctx->pc = 0x2ccf50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)6400);
    // 0x2ccf54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ccf54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccf58: 0x34058030  ori         $a1, $zero, 0x8030
    ctx->pc = 0x2ccf58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x2ccf5c: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CCF5Cu;
    SET_GPR_U32(ctx, 31, 0x2CCF64u);
    ctx->pc = 0x2CCF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF5Cu;
    // 0x2ccf60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CCF5Cu, 0x2CCF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF64u;
label_2ccf64:
    // 0x2ccf64: 0x36861b00  ori         $a2, $s4, 0x1B00
    ctx->pc = 0x2ccf64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)6912);
    // 0x2ccf68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ccf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccf6c: 0x34058030  ori         $a1, $zero, 0x8030
    ctx->pc = 0x2ccf6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x2ccf70: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CCF70u;
    SET_GPR_U32(ctx, 31, 0x2CCF78u);
    ctx->pc = 0x2CCF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF70u;
    // 0x2ccf74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CCF70u, 0x2CCF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF78u;
label_2ccf78:
    // 0x2ccf78: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2ccf78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2ccf7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ccf7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf80: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2ccf80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ccf84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccf88: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CCF88u;
    SET_GPR_U32(ctx, 31, 0x2CCF90u);
    ctx->pc = 0x2CCF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF88u;
    // 0x2ccf8c: 0x34058010  ori         $a1, $zero, 0x8010 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CCF88u, 0x2CCF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF90u;
label_2ccf90:
    // 0x2ccf90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ccf90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf94: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2ccf94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ccf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccf9c: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CCF9Cu;
    SET_GPR_U32(ctx, 31, 0x2CCFA4u);
    ctx->pc = 0x2CCFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF9Cu;
    // 0x2ccfa0: 0x34058010  ori         $a1, $zero, 0x8010 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CCF9Cu, 0x2CCFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCFA4u;
label_2ccfa4:
    // 0x2ccfa4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ccfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccfa8: 0x340580f0  ori         $a1, $zero, 0x80F0
    ctx->pc = 0x2ccfa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x2ccfac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ccfacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccfb0: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CCFB0u;
    SET_GPR_U32(ctx, 31, 0x2CCFB8u);
    ctx->pc = 0x2CCFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCFB0u;
    // 0x2ccfb4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CCFB0u, 0x2CCFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCFB8u;
label_2ccfb8:
    // 0x2ccfb8: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x2ccfb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ccfbc: 0x5460ffa4  bnel        $v1, $zero, . + 4 + (-0x5C << 2)
    ctx->pc = 0x2CCFBCu;
    {
        const bool branch_taken_0x2ccfbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ccfbc) {
            ctx->pc = 0x2CCFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCFBCu;
            // 0x2ccfc0: 0x3c07001f  lui         $a3, 0x1F (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)31 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCE50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cce50;
        }
    }
    ctx->pc = 0x2CCFC4u;
label_2ccfc4:
    // 0x2ccfc4: 0x8ec2b4a8  lw          $v0, -0x4B58($s6)
    ctx->pc = 0x2ccfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948008)));
    // 0x2ccfc8: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x2ccfc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
    // 0x2ccfcc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2ccfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2ccfd0: 0x8c4330ac  lw          $v1, 0x30AC($v0)
    ctx->pc = 0x2ccfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12460)));
    // 0x2ccfd4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CCFD4u;
    {
        const bool branch_taken_0x2ccfd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCFD4u;
        // 0x2ccfd8: 0x8ec3b4a8  lw          $v1, -0x4B58($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccfd4) {
            ctx->pc = 0x2CCFECu;
            goto label_2ccfec;
        }
    }
    ctx->pc = 0x2CCFDCu;
    // 0x2ccfdc: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2ccfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x2ccfe0: 0xc07f6ae  jal         func_1FDAB8
    ctx->pc = 0x2CCFE0u;
    SET_GPR_U32(ctx, 31, 0x2CCFE8u);
    ctx->pc = 0x2CCFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCFE0u;
    // 0x2ccfe4: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAB8u, 0x2CCFE0u, 0x2CCFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCFE8u;
label_2ccfe8:
    // 0x2ccfe8: 0x8ec3b4a8  lw          $v1, -0x4B58($s6)
    ctx->pc = 0x2ccfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948008)));
label_2ccfec:
    // 0x2ccfec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ccfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ccff0:
    // 0x2ccff0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2ccff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ccff4: 0xac7730ac  sw          $s7, 0x30AC($v1)
    ctx->pc = 0x2ccff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12460), GPR_U32(ctx, 23));
    // 0x2ccff8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2ccff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ccffc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2ccffcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cd000: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2cd000u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd004: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2cd004u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2cd008: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2cd008u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cd00c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2cd00cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cd010: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2cd010u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cd014: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x2cd014u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cd018: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2cd018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cd01c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD01Cu;
        // 0x2cd020: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD024u;
    // 0x2cd024: 0x0  nop
    ctx->pc = 0x2cd024u;
    // NOP
    ctx->pc = 0x2cd028u;
}
