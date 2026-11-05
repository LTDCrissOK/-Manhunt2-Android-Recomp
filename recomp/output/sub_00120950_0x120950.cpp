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

// Function: sub_00120950
// Address: 0x120950 - 0x120bc8
void sub_00120950_0x120950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120950_0x120950");
#endif

    switch (ctx->pc) {
        case 0x1209f8u: goto label_1209f8;
        case 0x120a34u: goto label_120a34;
        case 0x120a98u: goto label_120a98;
        case 0x120b30u: goto label_120b30;
        case 0x120b70u: goto label_120b70;
        default: break;
    }

    ctx->pc = 0x120950u;

    // 0x120950: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x120950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x120954: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x120954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x120958: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x120958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x12095c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12095cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120960: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x120960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x120964: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x120964u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120968: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x120968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12096c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x12096cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120970: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x120970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x120974: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x120974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x120978: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x120978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x12097c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x12097cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x120980: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x120980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x120984: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x120984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x120988: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x120988u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x12098c: 0x12400080  beqz        $s2, . + 4 + (0x80 << 2)
    ctx->pc = 0x12098Cu;
    {
        const bool branch_taken_0x12098c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x120990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12098Cu;
        // 0x120990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12098c) {
            ctx->pc = 0x120B90u;
            goto label_120b90;
        }
    }
    ctx->pc = 0x120994u;
    // 0x120994: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x120994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x120998: 0x8c53a0f8  lw          $s3, -0x5F08($v0)
    ctx->pc = 0x120998u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x48A0F8u));
    // 0x12099c: 0x1260007c  beqz        $s3, . + 4 + (0x7C << 2)
    ctx->pc = 0x12099Cu;
    {
        const bool branch_taken_0x12099c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1209A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12099Cu;
        // 0x1209a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12099c) {
            ctx->pc = 0x120B90u;
            goto label_120b90;
        }
    }
    ctx->pc = 0x1209A4u;
    // 0x1209a4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1209a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1209a8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1209a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1209ac: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1209acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1209b0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1209b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1209b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1209b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1209b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1209b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1209bc: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x1209bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1209c0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1209C0u;
    {
        const bool branch_taken_0x1209c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1209c0) {
            ctx->pc = 0x1209C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1209C0u;
            // 0x1209c4: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1209D0u;
            goto label_1209d0;
        }
    }
    ctx->pc = 0x1209C8u;
    // 0x1209c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1209C8u;
    {
        const bool branch_taken_0x1209c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1209CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209C8u;
        // 0x1209cc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1209c8) {
            ctx->pc = 0x1209D8u;
            goto label_1209d8;
        }
    }
    ctx->pc = 0x1209D0u;
label_1209d0:
    // 0x1209d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1209d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1209d4: 0x24760070  addiu       $s6, $v1, 0x70
    ctx->pc = 0x1209d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1209d8:
    // 0x1209d8: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1209D8u;
    {
        const bool branch_taken_0x1209d8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1209DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209D8u;
        // 0x1209dc: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1209d8) {
            ctx->pc = 0x1209E8u;
            goto label_1209e8;
        }
    }
    ctx->pc = 0x1209E0u;
    // 0x1209e0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1209E0u;
    {
        const bool branch_taken_0x1209e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1209E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209E0u;
        // 0x1209e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1209e0) {
            ctx->pc = 0x120B90u;
            goto label_120b90;
        }
    }
    ctx->pc = 0x1209E8u;
label_1209e8:
    // 0x1209e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1209e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1209ec: 0x24559b10  addiu       $s5, $v0, -0x64F0
    ctx->pc = 0x1209ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
    // 0x1209f0: 0x926200cc  lbu         $v0, 0xCC($s3)
    ctx->pc = 0x1209f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x1209f4: 0x0  nop
    ctx->pc = 0x1209f4u;
    // NOP
label_1209f8:
    // 0x1209f8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1209f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1209fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1209FCu;
    {
        const bool branch_taken_0x1209fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209FCu;
        // 0x120a00: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1209fc) {
            ctx->pc = 0x120A0Cu;
            goto label_120a0c;
        }
    }
    ctx->pc = 0x120A04u;
    // 0x120a04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x120A04u;
    {
        const bool branch_taken_0x120a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A04u;
        // 0x120a08: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a04) {
            ctx->pc = 0x120A18u;
            goto label_120a18;
        }
    }
    ctx->pc = 0x120A0Cu;
label_120a0c:
    // 0x120a0c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x120a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x120a10: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x120a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x120a14: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x120a14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_120a18:
    // 0x120a18: 0x12000058  beqz        $s0, . + 4 + (0x58 << 2)
    ctx->pc = 0x120A18u;
    {
        const bool branch_taken_0x120a18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A18u;
        // 0x120a1c: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a18) {
            ctx->pc = 0x120B7Cu;
            goto label_120b7c;
        }
    }
    ctx->pc = 0x120A20u;
    // 0x120a20: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x120a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x120a24: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x120A24u;
    {
        const bool branch_taken_0x120a24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A24u;
        // 0x120a28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a24) {
            ctx->pc = 0x120A34u;
            goto label_120a34;
        }
    }
    ctx->pc = 0x120A2Cu;
    // 0x120a2c: 0xc0478c8  jal         func_11E320
    ctx->pc = 0x120A2Cu;
    SET_GPR_U32(ctx, 31, 0x120A34u);
    ctx->pc = 0x120A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120A2Cu;
    // 0x120a30: 0x26e49a08  addiu       $a0, $s7, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E320u, 0x120A2Cu, 0x120A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A34u;
label_120a34:
    // 0x120a34: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x120A34u;
    {
        const bool branch_taken_0x120a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A34u;
        // 0x120a38: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a34) {
            ctx->pc = 0x120B7Cu;
            goto label_120b7c;
        }
    }
    ctx->pc = 0x120A3Cu;
    // 0x120a3c: 0x52120050  beql        $s0, $s2, . + 4 + (0x50 << 2)
    ctx->pc = 0x120A3Cu;
    {
        const bool branch_taken_0x120a3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x120a3c) {
            ctx->pc = 0x120A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120A3Cu;
            // 0x120a40: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x120B80u;
            goto label_120b80;
        }
    }
    ctx->pc = 0x120A44u;
    // 0x120a44: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x120a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x120a48: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x120A48u;
    {
        const bool branch_taken_0x120a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A48u;
        // 0x120a4c: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a48) {
            ctx->pc = 0x120B7Cu;
            goto label_120b7c;
        }
    }
    ctx->pc = 0x120A50u;
    // 0x120a50: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x120a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x120a54: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x120A54u;
    {
        const bool branch_taken_0x120a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A54u;
        // 0x120a58: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a54) {
            ctx->pc = 0x120B7Cu;
            goto label_120b7c;
        }
    }
    ctx->pc = 0x120A5Cu;
    // 0x120a5c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x120a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x120a60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x120a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x120a64: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x120a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x120a68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x120a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120a6c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x120A6Cu;
    {
        const bool branch_taken_0x120a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120a6c) {
            ctx->pc = 0x120A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120A6Cu;
            // 0x120a70: 0x8c4200c0  lw          $v0, 0xC0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120A7Cu;
            goto label_120a7c;
        }
    }
    ctx->pc = 0x120A74u;
    // 0x120a74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x120A74u;
    {
        const bool branch_taken_0x120a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A74u;
        // 0x120a78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a74) {
            ctx->pc = 0x120A84u;
            goto label_120a84;
        }
    }
    ctx->pc = 0x120A7Cu;
label_120a7c:
    // 0x120a7c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x120a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x120a80: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x120a80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_120a84:
    // 0x120a84: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x120A84u;
    {
        const bool branch_taken_0x120a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A84u;
        // 0x120a88: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a84) {
            ctx->pc = 0x120B7Cu;
            goto label_120b7c;
        }
    }
    ctx->pc = 0x120A8Cu;
    // 0x120a8c: 0x26e49a08  addiu       $a0, $s7, -0x65F8
    ctx->pc = 0x120a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941192));
    // 0x120a90: 0xc047866  jal         func_11E198
    ctx->pc = 0x120A90u;
    SET_GPR_U32(ctx, 31, 0x120A98u);
    ctx->pc = 0x120A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120A90u;
    // 0x120a94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x120A90u, 0x120A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A98u;
label_120a98:
    // 0x120a98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x120a98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120a9c: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x120A9Cu;
    {
        const bool branch_taken_0x120a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A9Cu;
        // 0x120aa0: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a9c) {
            ctx->pc = 0x120B7Cu;
            goto label_120b7c;
        }
    }
    ctx->pc = 0x120AA4u;
    // 0x120aa4: 0x8c62036c  lw          $v0, 0x36C($v1)
    ctx->pc = 0x120aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 876)));
    // 0x120aa8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x120aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x120aac: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x120AACu;
    {
        const bool branch_taken_0x120aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AACu;
        // 0x120ab0: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120aac) {
            ctx->pc = 0x120B7Cu;
            goto label_120b7c;
        }
    }
    ctx->pc = 0x120AB4u;
    // 0x120ab4: 0x8c620370  lw          $v0, 0x370($v1)
    ctx->pc = 0x120ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x120ab8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x120ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x120abc: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x120ABCu;
    {
        const bool branch_taken_0x120abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120ABCu;
        // 0x120ac0: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120abc) {
            ctx->pc = 0x120B7Cu;
            goto label_120b7c;
        }
    }
    ctx->pc = 0x120AC4u;
    // 0x120ac4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x120ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x120ac8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x120ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x120acc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x120accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x120ad0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x120ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120ad4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x120AD4u;
    {
        const bool branch_taken_0x120ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120ad4) {
            ctx->pc = 0x120AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120AD4u;
            // 0x120ad8: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120AE4u;
            goto label_120ae4;
        }
    }
    ctx->pc = 0x120ADCu;
    // 0x120adc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x120ADCu;
    {
        const bool branch_taken_0x120adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120ADCu;
        // 0x120ae0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120adc) {
            ctx->pc = 0x120AECu;
            goto label_120aec;
        }
    }
    ctx->pc = 0x120AE4u;
label_120ae4:
    // 0x120ae4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x120ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120ae8: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x120ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_120aec:
    // 0x120aec: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x120AECu;
    {
        const bool branch_taken_0x120aec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x120AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AECu;
        // 0x120af0: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120aec) {
            ctx->pc = 0x120B7Cu;
            goto label_120b7c;
        }
    }
    ctx->pc = 0x120AF4u;
    // 0x120af4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x120af4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x120af8: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x120AF8u;
    {
        const bool branch_taken_0x120af8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x120AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AF8u;
        // 0x120afc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120af8) {
            ctx->pc = 0x120B10u;
            goto label_120b10;
        }
    }
    ctx->pc = 0x120B00u;
    // 0x120b00: 0x12820007  beq         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x120B00u;
    {
        const bool branch_taken_0x120b00 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x120B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B00u;
        // 0x120b04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b00) {
            ctx->pc = 0x120B20u;
            goto label_120b20;
        }
    }
    ctx->pc = 0x120B08u;
    // 0x120b08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x120B08u;
    {
        const bool branch_taken_0x120b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120b08) {
            ctx->pc = 0x120B28u;
            goto label_120b28;
        }
    }
    ctx->pc = 0x120B10u;
label_120b10:
    // 0x120b10: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x120b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x120b14: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x120b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x120b18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x120B18u;
    {
        const bool branch_taken_0x120b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B18u;
        // 0x120b1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b18) {
            ctx->pc = 0x120B28u;
            goto label_120b28;
        }
    }
    ctx->pc = 0x120B20u;
label_120b20:
    // 0x120b20: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x120b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x120b24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x120b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_120b28:
    // 0x120b28: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x120B28u;
    SET_GPR_U32(ctx, 31, 0x120B30u);
    ctx->pc = 0x120B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120B28u;
    // 0x120b2c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x120B28u, 0x120B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120B30u;
label_120b30:
    // 0x120b30: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x120b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x120b34: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x120b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x120b38: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x120b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x120b3c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x120b3cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x120b40: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x120b40u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x120b44: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x120b44u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x120b48: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x120b48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x120b4c: 0x0  nop
    ctx->pc = 0x120b4cu;
    // NOP
    // 0x120b50: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x120B50u;
    {
        const bool branch_taken_0x120b50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x120B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B50u;
        // 0x120b54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b50) {
            ctx->pc = 0x120B5Cu;
            goto label_120b5c;
        }
    }
    ctx->pc = 0x120B58u;
    // 0x120b58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x120b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120b5c:
    // 0x120b5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x120B5Cu;
    {
        const bool branch_taken_0x120b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B5Cu;
        // 0x120b60: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b5c) {
            ctx->pc = 0x120B78u;
            goto label_120b78;
        }
    }
    ctx->pc = 0x120B64u;
    // 0x120b64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x120b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120b68: 0xc048308  jal         func_120C20
    ctx->pc = 0x120B68u;
    SET_GPR_U32(ctx, 31, 0x120B70u);
    ctx->pc = 0x120B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120B68u;
    // 0x120b6c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120C20u, 0x120B68u, 0x120B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120B70u;
label_120b70:
    // 0x120b70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x120B70u;
    {
        const bool branch_taken_0x120b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B70u;
        // 0x120b74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b70) {
            ctx->pc = 0x120B90u;
            goto label_120b90;
        }
    }
    ctx->pc = 0x120B78u;
label_120b78:
    // 0x120b78: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x120b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_120b7c:
    // 0x120b7c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x120b7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_120b80:
    // 0x120b80: 0x2e230030  sltiu       $v1, $s1, 0x30
    ctx->pc = 0x120b80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x120b84: 0x5460ff9c  bnel        $v1, $zero, . + 4 + (-0x64 << 2)
    ctx->pc = 0x120B84u;
    {
        const bool branch_taken_0x120b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x120b84) {
            ctx->pc = 0x120B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120B84u;
            // 0x120b88: 0x926200cc  lbu         $v0, 0xCC($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1209F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1209f8;
        }
    }
    ctx->pc = 0x120B8Cu;
    // 0x120b8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x120b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120b90:
    // 0x120b90: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x120b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120b94: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x120b94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x120b98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x120b98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120b9c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x120b9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x120ba0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x120ba0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x120ba4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x120ba4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x120ba8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x120ba8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x120bac: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x120bacu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x120bb0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x120bb0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x120bb4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x120bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x120bb8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x120bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x120bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x120BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BBCu;
        // 0x120bc0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120BC4u;
    // 0x120bc4: 0x0  nop
    ctx->pc = 0x120bc4u;
    // NOP
    ctx->pc = 0x120bc8u;
}
