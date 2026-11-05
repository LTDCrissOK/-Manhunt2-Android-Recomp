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

// Function: sub_003E6920
// Address: 0x3e6920 - 0x3e6ae0
void sub_003E6920_0x3e6920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6920_0x3e6920");
#endif

    switch (ctx->pc) {
        case 0x3e696cu: goto label_3e696c;
        case 0x3e6980u: goto label_3e6980;
        case 0x3e6998u: goto label_3e6998;
        case 0x3e69a4u: goto label_3e69a4;
        case 0x3e69e8u: goto label_3e69e8;
        case 0x3e6a60u: goto label_3e6a60;
        case 0x3e6a70u: goto label_3e6a70;
        case 0x3e6a80u: goto label_3e6a80;
        case 0x3e6a8cu: goto label_3e6a8c;
        default: break;
    }

    ctx->pc = 0x3e6920u;

    // 0x3e6920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e6920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e6924: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e6924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e6928: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e6928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3e692c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e692cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6930: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e6930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e6934: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e6934u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6938: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e6938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e693c: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x3e693cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3e6940: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3e6940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3e6944: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3e6944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3e6948: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3e6948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3e694c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3e694cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3e6950: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3e6950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3e6954: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e6954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e6958: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E6958u;
    {
        const bool branch_taken_0x3e6958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6958u;
        // 0x3e695c: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6958) {
            ctx->pc = 0x3E69D0u;
            goto label_3e69d0;
        }
    }
    ctx->pc = 0x3E6960u;
    // 0x3e6960: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e6960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e6964: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E6964u;
    SET_GPR_U32(ctx, 31, 0x3E696Cu);
    ctx->pc = 0x3E6968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6964u;
    // 0x3e6968: 0x2632ffff  addiu       $s2, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E6964u, 0x3E696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E696Cu;
label_3e696c:
    // 0x3e696c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e696cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e6970: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e6970u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6974: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x3e6974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e6978: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E6978u;
    SET_GPR_U32(ctx, 31, 0x3E6980u);
    ctx->pc = 0x3E697Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6978u;
    // 0x3e697c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E6978u, 0x3E6980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6980u;
label_3e6980:
    // 0x3e6980: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x3e6980u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e6984: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3e6984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3e6988: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E6988u;
    {
        const bool branch_taken_0x3e6988 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6988u;
        // 0x3e698c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6988) {
            ctx->pc = 0x3E69B0u;
            goto label_3e69b0;
        }
    }
    ctx->pc = 0x3E6990u;
    // 0x3e6990: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e6990u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e6994: 0x0  nop
    ctx->pc = 0x3e6994u;
    // NOP
label_3e6998:
    // 0x3e6998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e699c: 0xc0afe40  jal         func_2BF900
    ctx->pc = 0x3E699Cu;
    SET_GPR_U32(ctx, 31, 0x3E69A4u);
    ctx->pc = 0x3E69A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E699Cu;
    // 0x3e69a0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF900u, 0x3E699Cu, 0x3E69A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E69A4u;
label_3e69a4:
    // 0x3e69a4: 0x0  nop
    ctx->pc = 0x3e69a4u;
    // NOP
    // 0x3e69a8: 0x1656fffb  bne         $s2, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E69A8u;
    {
        const bool branch_taken_0x3e69a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E69ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E69A8u;
        // 0x3e69ac: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e69a8) {
            ctx->pc = 0x3E6998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6998;
        }
    }
    ctx->pc = 0x3E69B0u;
label_3e69b0:
    // 0x3e69b0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e69b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e69b4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3e69b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e69b8: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3e69b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3e69bc: 0xa6910004  sh          $s1, 0x4($s4)
    ctx->pc = 0x3e69bcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e69c0: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3e69c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x3e69c4: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x3e69c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x3e69c8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3E69C8u;
    {
        const bool branch_taken_0x3e69c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E69CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E69C8u;
        // 0x3e69cc: 0xa6910006  sh          $s1, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e69c8) {
            ctx->pc = 0x3E6AB8u;
            goto label_3e6ab8;
        }
    }
    ctx->pc = 0x3E69D0u;
label_3e69d0:
    // 0x3e69d0: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x3e69d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e69d4: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E69D4u;
    {
        const bool branch_taken_0x3e69d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E69D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E69D4u;
        // 0x3e69d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e69d4) {
            ctx->pc = 0x3E6A54u;
            goto label_3e6a54;
        }
    }
    ctx->pc = 0x3E69DCu;
    // 0x3e69dc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e69dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e69e0: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x3e69e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3e69e4: 0x0  nop
    ctx->pc = 0x3e69e4u;
    // NOP
label_3e69e8:
    // 0x3e69e8: 0x94c70004  lhu         $a3, 0x4($a2)
    ctx->pc = 0x3e69e8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e69ec: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3e69ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3e69f0: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3e69f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e69f4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E69F4u;
    {
        const bool branch_taken_0x3e69f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e69f4) {
            ctx->pc = 0x3E69F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E69F4u;
            // 0x3e69f8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6A48u;
            goto label_3e6a48;
        }
    }
    ctx->pc = 0x3E69FCu;
    // 0x3e69fc: 0x5467000a  bnel        $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3E69FCu;
    {
        const bool branch_taken_0x3e69fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3e69fc) {
            ctx->pc = 0x3E6A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E69FCu;
            // 0x3e6a00: 0x94c20006  lhu         $v0, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6A28u;
            goto label_3e6a28;
        }
    }
    ctx->pc = 0x3E6A04u;
    // 0x3e6a04: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E6A04u;
    {
        const bool branch_taken_0x3e6a04 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6A04u;
        // 0x3e6a08: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6a04) {
            ctx->pc = 0x3E6A14u;
            goto label_3e6a14;
        }
    }
    ctx->pc = 0x3E6A0Cu;
    // 0x3e6a0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E6A0Cu;
    {
        const bool branch_taken_0x3e6a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6A0Cu;
        // 0x3e6a10: 0xad020008  sw          $v0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6a0c) {
            ctx->pc = 0x3E6A18u;
            goto label_3e6a18;
        }
    }
    ctx->pc = 0x3E6A14u;
label_3e6a14:
    // 0x3e6a14: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3e6a14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3e6a18:
    // 0x3e6a18: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e6a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e6a1c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3e6a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3e6a20: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x3e6a20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x3e6a24: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3e6a24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3e6a28:
    // 0x3e6a28: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3e6a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e6a2c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e6a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e6a30: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x3e6a30u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e6a34: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e6a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e6a38: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3e6a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e6a3c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3e6a3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e6a40: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3E6A40u;
    {
        const bool branch_taken_0x3e6a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6A40u;
        // 0x3e6a44: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6a40) {
            ctx->pc = 0x3E6AB8u;
            goto label_3e6ab8;
        }
    }
    ctx->pc = 0x3E6A48u;
label_3e6a48:
    // 0x3e6a48: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3e6a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3e6a4c: 0x54c0ffe6  bnel        $a2, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E6A4Cu;
    {
        const bool branch_taken_0x3e6a4c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e6a4c) {
            ctx->pc = 0x3E6A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6A4Cu;
            // 0x3e6a50: 0x94c30006  lhu         $v1, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E69E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e69e8;
        }
    }
    ctx->pc = 0x3E6A54u;
label_3e6a54:
    // 0x3e6a54: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e6a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e6a58: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E6A58u;
    SET_GPR_U32(ctx, 31, 0x3E6A60u);
    ctx->pc = 0x3E6A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6A58u;
    // 0x3e6a5c: 0x2415000f  addiu       $s5, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E6A58u, 0x3E6A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6A60u;
label_3e6a60:
    // 0x3e6a60: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e6a60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e6a64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e6a64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6a68: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E6A68u;
    SET_GPR_U32(ctx, 31, 0x3E6A70u);
    ctx->pc = 0x3E6A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6A68u;
    // 0x3e6a6c: 0x240401d0  addiu       $a0, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E6A68u, 0x3E6A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6A70u;
label_3e6a70:
    // 0x3e6a70: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e6a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e6a74: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x3e6a74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e6a78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3e6a78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3e6a7c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3e6a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e6a80:
    // 0x3e6a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6a84: 0xc0afe40  jal         func_2BF900
    ctx->pc = 0x3E6A84u;
    SET_GPR_U32(ctx, 31, 0x3E6A8Cu);
    ctx->pc = 0x3E6A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6A84u;
    // 0x3e6a88: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF900u, 0x3E6A84u, 0x3E6A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6A8Cu;
label_3e6a8c:
    // 0x3e6a8c: 0x0  nop
    ctx->pc = 0x3e6a8cu;
    // NOP
    // 0x3e6a90: 0x16b6fffb  bne         $s5, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E6A90u;
    {
        const bool branch_taken_0x3e6a90 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E6A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6A90u;
        // 0x3e6a94: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6a90) {
            ctx->pc = 0x3E6A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6a80;
        }
    }
    ctx->pc = 0x3E6A98u;
    // 0x3e6a98: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3e6a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e6a9c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e6a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e6aa0: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3e6aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3e6aa4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3e6aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6aa8: 0xa6510006  sh          $s1, 0x6($s2)
    ctx->pc = 0x3e6aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e6aac: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x3e6aacu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e6ab0: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x3e6ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x3e6ab4: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x3e6ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_3e6ab8:
    // 0x3e6ab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e6ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e6abc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e6abcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e6ac0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e6ac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e6ac4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e6ac4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e6ac8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3e6ac8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e6acc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3e6accu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e6ad0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3e6ad0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e6ad4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3e6ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e6ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E6AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6AD8u;
        // 0x3e6adc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E6AE0u;
}
