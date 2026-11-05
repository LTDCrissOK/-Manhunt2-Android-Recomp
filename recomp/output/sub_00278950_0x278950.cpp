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

// Function: sub_00278950
// Address: 0x278950 - 0x278b08
void sub_00278950_0x278950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278950_0x278950");
#endif

    switch (ctx->pc) {
        case 0x278988u: goto label_278988;
        case 0x2789bcu: goto label_2789bc;
        case 0x2789f8u: goto label_2789f8;
        case 0x278a28u: goto label_278a28;
        case 0x278a2cu: goto label_278a2c;
        case 0x278a5cu: goto label_278a5c;
        case 0x278a90u: goto label_278a90;
        case 0x278a94u: goto label_278a94;
        case 0x278ac8u: goto label_278ac8;
        default: break;
    }

    ctx->pc = 0x278950u;

    // 0x278950: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x278950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x278954: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x278954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x278958: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x278958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27895c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x27895cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x278960: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x278960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x278964: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x278964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x278968: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x278968u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27896c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27896cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x278970: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x278970u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278974: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x278974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x278978: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x278978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x27897c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x27897cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x278980: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x278980u;
    SET_GPR_U32(ctx, 31, 0x278988u);
    ctx->pc = 0x278984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278980u;
    // 0x278984: 0x100b02d  daddu       $s6, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x278980u, 0x278988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278988u;
label_278988:
    // 0x278988: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x278988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x27898c: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x27898cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x278990: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x278990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278994: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x278994u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x278998: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x278998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27899c: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x27899cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2789a0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2789A0u;
    {
        const bool branch_taken_0x2789a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2789A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2789A0u;
        // 0x2789a4: 0x27b20014  addiu       $s2, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2789a0) {
            ctx->pc = 0x2789B8u;
            goto label_2789b8;
        }
    }
    ctx->pc = 0x2789A8u;
    // 0x2789a8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2789a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2789ac: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2789ACu;
    {
        const bool branch_taken_0x2789ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2789B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2789ACu;
        // 0x2789b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2789ac) {
            ctx->pc = 0x2789ECu;
            goto label_2789ec;
        }
    }
    ctx->pc = 0x2789B4u;
    // 0x2789b4: 0x0  nop
    ctx->pc = 0x2789b4u;
    // NOP
label_2789b8:
    // 0x2789b8: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x2789b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_2789bc:
    // 0x2789bc: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x2789bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2789c0: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x2789c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2789c4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2789c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2789c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2789c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2789cc: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x2789ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x2789d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2789d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2789d4: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2789d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2789d8: 0x5064fff8  beql        $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2789D8u;
    {
        const bool branch_taken_0x2789d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2789d8) {
            ctx->pc = 0x2789DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2789D8u;
            // 0x2789dc: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2789BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2789bc;
        }
    }
    ctx->pc = 0x2789E0u;
    // 0x2789e0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2789e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2789e4: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2789E4u;
    {
        const bool branch_taken_0x2789e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2789e4) {
            ctx->pc = 0x2789E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2789E4u;
            // 0x2789e8: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2789BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2789bc;
        }
    }
    ctx->pc = 0x2789ECu;
label_2789ec:
    // 0x2789ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2789ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2789f0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2789F0u;
    SET_GPR_U32(ctx, 31, 0x2789F8u);
    ctx->pc = 0x2789F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2789F0u;
    // 0x2789f4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2789F0u, 0x2789F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2789F8u;
label_2789f8:
    // 0x2789f8: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x2789f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2789fc: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2789fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278a00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x278a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278a04: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x278a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x278a08: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x278a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x278a0c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x278a0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278a10: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x278A10u;
    {
        const bool branch_taken_0x278a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x278a10) {
            ctx->pc = 0x278A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278A10u;
            // 0x278a14: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278A28u;
            goto label_278a28;
        }
    }
    ctx->pc = 0x278A18u;
    // 0x278a18: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x278a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278a1c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x278A1Cu;
    {
        const bool branch_taken_0x278a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x278A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A1Cu;
        // 0x278a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a1c) {
            ctx->pc = 0x278A54u;
            goto label_278a54;
        }
    }
    ctx->pc = 0x278A24u;
    // 0x278a24: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x278a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_278a28:
    // 0x278a28: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x278a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_278a2c:
    // 0x278a2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x278a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278a30: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x278a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x278a34: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x278a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x278a38: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x278a38u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278a3c: 0x5083fffb  beql        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x278A3Cu;
    {
        const bool branch_taken_0x278a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x278a3c) {
            ctx->pc = 0x278A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278A3Cu;
            // 0x278a40: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278A2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278a2c;
        }
    }
    ctx->pc = 0x278A44u;
    // 0x278a44: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x278a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278a48: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x278A48u;
    {
        const bool branch_taken_0x278a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x278a48) {
            ctx->pc = 0x278A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278A48u;
            // 0x278a4c: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278a28;
        }
    }
    ctx->pc = 0x278A50u;
    // 0x278a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278a54:
    // 0x278a54: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x278A54u;
    SET_GPR_U32(ctx, 31, 0x278A5Cu);
    ctx->pc = 0x278A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278A54u;
    // 0x278a58: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x278A54u, 0x278A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278A5Cu;
label_278a5c:
    // 0x278a5c: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x278a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x278a60: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x278a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278a64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x278a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278a68: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x278a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x278a6c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x278a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x278a70: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x278a70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278a74: 0x50640006  beql        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x278A74u;
    {
        const bool branch_taken_0x278a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x278a74) {
            ctx->pc = 0x278A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278A74u;
            // 0x278a78: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278A90u;
            goto label_278a90;
        }
    }
    ctx->pc = 0x278A7Cu;
    // 0x278a7c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x278a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278a80: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x278A80u;
    {
        const bool branch_taken_0x278a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x278A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A80u;
        // 0x278a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a80) {
            ctx->pc = 0x278ABCu;
            goto label_278abc;
        }
    }
    ctx->pc = 0x278A88u;
    // 0x278a88: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x278a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x278a8c: 0x0  nop
    ctx->pc = 0x278a8cu;
    // NOP
label_278a90:
    // 0x278a90: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x278a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_278a94:
    // 0x278a94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x278a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278a98: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x278a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x278a9c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x278a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x278aa0: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x278aa0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278aa4: 0x5083fffb  beql        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x278AA4u;
    {
        const bool branch_taken_0x278aa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x278aa4) {
            ctx->pc = 0x278AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278AA4u;
            // 0x278aa8: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278A94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278a94;
        }
    }
    ctx->pc = 0x278AACu;
    // 0x278aac: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x278aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278ab0: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x278AB0u;
    {
        const bool branch_taken_0x278ab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x278ab0) {
            ctx->pc = 0x278AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278AB0u;
            // 0x278ab4: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278a90;
        }
    }
    ctx->pc = 0x278AB8u;
    // 0x278ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278abc:
    // 0x278abc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x278abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278ac0: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x278AC0u;
    SET_GPR_U32(ctx, 31, 0x278AC8u);
    ctx->pc = 0x278AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278AC0u;
    // 0x278ac4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x278AC0u, 0x278AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278AC8u;
label_278ac8:
    // 0x278ac8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x278ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278acc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x278accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278ad0: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x278ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x278ad4: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x278ad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x278ad8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x278ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278adc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x278adcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x278ae0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x278ae0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x278ae4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x278ae4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x278ae8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x278ae8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x278aec: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x278aecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x278af0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x278af0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x278af4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x278af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x278af8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x278af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x278afc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x278afcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x278b00: 0x3e00008  jr          $ra
    ctx->pc = 0x278B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B00u;
        // 0x278b04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278B08u;
}
