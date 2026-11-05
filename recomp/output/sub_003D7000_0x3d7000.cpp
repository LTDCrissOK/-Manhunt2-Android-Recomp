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

// Function: sub_003D7000
// Address: 0x3d7000 - 0x3d7178
void sub_003D7000_0x3d7000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7000_0x3d7000");
#endif

    switch (ctx->pc) {
        case 0x3d7050u: goto label_3d7050;
        case 0x3d7090u: goto label_3d7090;
        case 0x3d7130u: goto label_3d7130;
        default: break;
    }

    ctx->pc = 0x3d7000u;

    // 0x3d7000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d7000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3d7004: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x3d7004u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7008: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x3d7008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x3d700c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3d700cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3d7010: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3d7010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3d7014: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3d7014u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7018: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x3d7018u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d701c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x3d701cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x3d7020: 0x8df80004  lw          $t8, 0x4($t7)
    ctx->pc = 0x3d7020u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x3d7024: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3d7024u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7028: 0x181140  sll         $v0, $t8, 5
    ctx->pc = 0x3d7028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 5));
    // 0x3d702c: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3d702cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3d7030: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x3d7030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x3d7034: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x3d7034u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x3d7038: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3d7038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3d703c: 0x3a2e823  subu        $sp, $sp, $v0
    ctx->pc = 0x3d703cu;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3d7040: 0x13000036  beqz        $t8, . + 4 + (0x36 << 2)
    ctx->pc = 0x3D7040u;
    {
        const bool branch_taken_0x3d7040 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7040u;
        // 0x3d7044: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7040) {
            ctx->pc = 0x3D711Cu;
            goto label_3d711c;
        }
    }
    ctx->pc = 0x3D7048u;
    // 0x3d7048: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x3d7048u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
    // 0x3d704c: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x3d704cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
label_3d7050:
    // 0x3d7050: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3d7050u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7054: 0x110d0029  beq         $t0, $t5, . + 4 + (0x29 << 2)
    ctx->pc = 0x3D7054u;
    {
        const bool branch_taken_0x3d7054 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 13));
        ctx->pc = 0x3D7058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7054u;
        // 0x3d7058: 0x95880  sll         $t3, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7054) {
            ctx->pc = 0x3D70FCu;
            goto label_3d70fc;
        }
    }
    ctx->pc = 0x3D705Cu;
    // 0x3d705c: 0x8de70000  lw          $a3, 0x0($t7)
    ctx->pc = 0x3d705cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x3d7060: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x3d7060u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3d7064: 0x1671021  addu        $v0, $t3, $a3
    ctx->pc = 0x3d7064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x3d7068: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x3d7068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3d706c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3d706cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d7070: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3d7070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d7074: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3d7074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3d7078: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3d7078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3d707c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3d707cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d7080: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3D7080u;
    {
        const bool branch_taken_0x3d7080 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3D7084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7080u;
        // 0x3d7084: 0x160c82d  daddu       $t9, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7080) {
            ctx->pc = 0x3D70FCu;
            goto label_3d70fc;
        }
    }
    ctx->pc = 0x3D7088u;
    // 0x3d7088: 0x8d8e0000  lw          $t6, 0x0($t4)
    ctx->pc = 0x3d7088u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3d708c: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x3d708cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_3d7090:
    // 0x3d7090: 0x8d840004  lw          $a0, 0x4($t4)
    ctx->pc = 0x3d7090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x3d7094: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x3d7094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3d7098: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3d7098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d709c: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x3d709cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x3d70a0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3d70a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3d70a4: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x3d70a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d70a8: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x3d70a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3d70ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d70acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d70b0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3d70b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x3d70b4: 0xad840004  sw          $a0, 0x4($t4)
    ctx->pc = 0x3d70b4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 4));
    // 0x3d70b8: 0x8de70000  lw          $a3, 0x0($t7)
    ctx->pc = 0x3d70b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x3d70bc: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x3d70bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3d70c0: 0x110d000f  beq         $t0, $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x3D70C0u;
    {
        const bool branch_taken_0x3d70c0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 13));
        ctx->pc = 0x3D70C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D70C0u;
        // 0x3d70c4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d70c0) {
            ctx->pc = 0x3D7100u;
            goto label_3d7100;
        }
    }
    ctx->pc = 0x3D70C8u;
    // 0x3d70c8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x3d70c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3d70cc: 0x3271821  addu        $v1, $t9, $a3
    ctx->pc = 0x3d70ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x3d70d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3d70d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d70d4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3d70d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d70d8: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x3d70d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3d70dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3d70dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d70e0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3d70e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3d70e4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3d70e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3d70e8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3d70e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d70ec: 0x460ffe8  bltz        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x3D70ECu;
    {
        const bool branch_taken_0x3d70ec = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3D70F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D70ECu;
        // 0x3d70f0: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d70ec) {
            ctx->pc = 0x3D7090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d7090;
        }
    }
    ctx->pc = 0x3D70F4u;
    // 0x3d70f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D70F4u;
    {
        const bool branch_taken_0x3d70f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D70F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D70F4u;
        // 0x3d70f8: 0x20b1821  addu        $v1, $s0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d70f4) {
            ctx->pc = 0x3D7108u;
            goto label_3d7108;
        }
    }
    ctx->pc = 0x3D70FCu;
label_3d70fc:
    // 0x3d70fc: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x3d70fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_3d7100:
    // 0x3d7100: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x3d7100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7104: 0x20b1821  addu        $v1, $s0, $t3
    ctx->pc = 0x3d7104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
label_3d7108:
    // 0x3d7108: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x3d7108u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d710c: 0x138102b  sltu        $v0, $t1, $t8
    ctx->pc = 0x3d710cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x3d7110: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x3D7110u;
    {
        const bool branch_taken_0x3d7110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7110u;
        // 0x3d7114: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7110) {
            ctx->pc = 0x3D7050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d7050;
        }
    }
    ctx->pc = 0x3D7118u;
    // 0x3d7118: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3d7118u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d711c:
    // 0x3d711c: 0x1300000f  beqz        $t8, . + 4 + (0xF << 2)
    ctx->pc = 0x3D711Cu;
    {
        const bool branch_taken_0x3d711c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D711Cu;
        // 0x3d7120: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d711c) {
            ctx->pc = 0x3D715Cu;
            goto label_3d715c;
        }
    }
    ctx->pc = 0x3D7124u;
    // 0x3d7124: 0x8de70000  lw          $a3, 0x0($t7)
    ctx->pc = 0x3d7124u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x3d7128: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x3d7128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3d712c: 0x0  nop
    ctx->pc = 0x3d712cu;
    // NOP
label_3d7130:
    // 0x3d7130: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3d7130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3d7134: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3d7134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d7138: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D7138u;
    {
        const bool branch_taken_0x3d7138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7138u;
        // 0x3d713c: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7138) {
            ctx->pc = 0x3D714Cu;
            goto label_3d714c;
        }
    }
    ctx->pc = 0x3D7140u;
    // 0x3d7140: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3d7140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3d7144: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3d7144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3d7148: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3d7148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3d714c:
    // 0x3d714c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3d714cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3d7150: 0x138102b  sltu        $v0, $t1, $t8
    ctx->pc = 0x3d7150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x3d7154: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3D7154u;
    {
        const bool branch_taken_0x3d7154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7154u;
        // 0x3d7158: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7154) {
            ctx->pc = 0x3D7130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d7130;
        }
    }
    ctx->pc = 0x3D715Cu;
label_3d715c:
    // 0x3d715c: 0xade80004  sw          $t0, 0x4($t7)
    ctx->pc = 0x3d715cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 8));
    // 0x3d7160: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3d7160u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7164: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x3d7164u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d7168: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3d7168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d716c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D716Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D716Cu;
        // 0x3d7170: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D716Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7174u;
    // 0x3d7174: 0x0  nop
    ctx->pc = 0x3d7174u;
    // NOP
    ctx->pc = 0x3d7178u;
}
