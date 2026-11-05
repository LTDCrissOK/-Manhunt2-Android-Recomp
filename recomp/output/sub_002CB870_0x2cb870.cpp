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

// Function: sub_002CB870
// Address: 0x2cb870 - 0x2cbc68
void sub_002CB870_0x2cb870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB870_0x2cb870");
#endif

    switch (ctx->pc) {
        case 0x2cb918u: goto label_2cb918;
        case 0x2cb920u: goto label_2cb920;
        case 0x2cb93cu: goto label_2cb93c;
        case 0x2cb948u: goto label_2cb948;
        case 0x2cb95cu: goto label_2cb95c;
        case 0x2cb974u: goto label_2cb974;
        case 0x2cb97cu: goto label_2cb97c;
        case 0x2cb998u: goto label_2cb998;
        case 0x2cb9c0u: goto label_2cb9c0;
        case 0x2cb9d0u: goto label_2cb9d0;
        case 0x2cb9e0u: goto label_2cb9e0;
        case 0x2cb9f4u: goto label_2cb9f4;
        case 0x2cba08u: goto label_2cba08;
        case 0x2cba10u: goto label_2cba10;
        case 0x2cba1cu: goto label_2cba1c;
        case 0x2cba50u: goto label_2cba50;
        case 0x2cbaf8u: goto label_2cbaf8;
        case 0x2cbb04u: goto label_2cbb04;
        case 0x2cbb14u: goto label_2cbb14;
        case 0x2cbb24u: goto label_2cbb24;
        case 0x2cbb40u: goto label_2cbb40;
        case 0x2cbb50u: goto label_2cbb50;
        case 0x2cbb74u: goto label_2cbb74;
        case 0x2cbb98u: goto label_2cbb98;
        case 0x2cbbccu: goto label_2cbbcc;
        case 0x2cbc00u: goto label_2cbc00;
        case 0x2cbc08u: goto label_2cbc08;
        case 0x2cbc1cu: goto label_2cbc1c;
        case 0x2cbc28u: goto label_2cbc28;
        case 0x2cbc30u: goto label_2cbc30;
        case 0x2cbc38u: goto label_2cbc38;
        default: break;
    }

    ctx->pc = 0x2cb870u;

    // 0x2cb870: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2cb870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2cb874: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2cb874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2cb878: 0x246909c8  addiu       $t1, $v1, 0x9C8
    ctx->pc = 0x2cb878u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 2504));
    // 0x2cb87c: 0x3c0a0047  lui         $t2, 0x47
    ctx->pc = 0x2cb87cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)71 << 16));
    // 0x2cb880: 0xdc6c09c8  ld          $t4, 0x9C8($v1)
    ctx->pc = 0x2cb880u;
    SET_GPR_U64(ctx, 12, FAST_READ64(0x4709C8u));
    // 0x2cb884: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x2cb884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x2cb888: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2cb888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2cb88c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cb88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cb890: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2cb890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2cb894: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2cb894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2cb898: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2cb898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2cb89c: 0x254b09b8  addiu       $t3, $t2, 0x9B8
    ctx->pc = 0x2cb89cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 2488));
    // 0x2cb8a0: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x2cb8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x2cb8a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2cb8a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb8a8: 0xdd4309b8  ld          $v1, 0x9B8($t2)
    ctx->pc = 0x2cb8a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 2488)));
    // 0x2cb8ac: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x2cb8acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x2cb8b0: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2cb8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2cb8b4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2cb8b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb8b8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2cb8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2cb8bc: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2cb8bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cb8c0: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x2cb8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x2cb8c4: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x2cb8c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2cb8c8: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2cb8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2cb8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb8d0: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2cb8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2cb8d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2cb8d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb8d8: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x2cb8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x2cb8dc: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x2cb8dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb8e0: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x2cb8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x2cb8e4: 0xdd2d0008  ld          $t5, 0x8($t1)
    ctx->pc = 0x2cb8e4u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2cb8e8: 0xafa80054  sw          $t0, 0x54($sp)
    ctx->pc = 0x2cb8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    // 0x2cb8ec: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2cb8ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2cb8f0: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x2cb8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x2cb8f4: 0xdd690008  ld          $t1, 0x8($t3)
    ctx->pc = 0x2cb8f4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2cb8f8: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2cb8f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb8fc: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2cb8fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2cb900: 0xffac0020  sd          $t4, 0x20($sp)
    ctx->pc = 0x2cb900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 12));
    // 0x2cb904: 0xffad0028  sd          $t5, 0x28($sp)
    ctx->pc = 0x2cb904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 13));
    // 0x2cb908: 0xffa90038  sd          $t1, 0x38($sp)
    ctx->pc = 0x2cb908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 9));
    // 0x2cb90c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2cb90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x2cb910: 0xc0e3c92  jal         func_38F248
    ctx->pc = 0x2CB910u;
    SET_GPR_U32(ctx, 31, 0x2CB918u);
    ctx->pc = 0x2CB914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB910u;
    // 0x2cb914: 0xafa3005c  sw          $v1, 0x5C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F248u, 0x2CB910u, 0x2CB918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB918u;
label_2cb918:
    // 0x2cb918: 0xc0e3c96  jal         func_38F258
    ctx->pc = 0x2CB918u;
    SET_GPR_U32(ctx, 31, 0x2CB920u);
    ctx->pc = 0x2CB91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB918u;
    // 0x2cb91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F258u, 0x2CB918u, 0x2CB920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB920u;
label_2cb920:
    // 0x2cb920: 0x16200053  bnez        $s1, . + 4 + (0x53 << 2)
    ctx->pc = 0x2CB920u;
    {
        const bool branch_taken_0x2cb920 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB920u;
        // 0x2cb924: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb920) {
            ctx->pc = 0x2CBA70u;
            goto label_2cba70;
        }
    }
    ctx->pc = 0x2CB928u;
    // 0x2cb928: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cb928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb92c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cb92cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb930: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2cb930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb934: 0xc0e3cb0  jal         func_38F2C0
    ctx->pc = 0x2CB934u;
    SET_GPR_U32(ctx, 31, 0x2CB93Cu);
    ctx->pc = 0x2CB938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB934u;
    // 0x2cb938: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F2C0u, 0x2CB934u, 0x2CB93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB93Cu;
label_2cb93c:
    // 0x2cb93c: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x2cb93cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb940: 0xc0e3d18  jal         func_38F460
    ctx->pc = 0x2CB940u;
    SET_GPR_U32(ctx, 31, 0x2CB948u);
    ctx->pc = 0x2CB944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB940u;
    // 0x2cb944: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F460u, 0x2CB940u, 0x2CB948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB948u;
label_2cb948:
    // 0x2cb948: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2cb948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb94c: 0x3406c1b0  ori         $a2, $zero, 0xC1B0
    ctx->pc = 0x2cb94cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49584);
    // 0x2cb950: 0x6313c  dsll32      $a2, $a2, 4
    ctx->pc = 0x2cb950u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 4));
    // 0x2cb954: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CB954u;
    SET_GPR_U32(ctx, 31, 0x2CB95Cu);
    ctx->pc = 0x2CB958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB954u;
    // 0x2cb958: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CB954u, 0x2CB95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB95Cu;
label_2cb95c:
    // 0x2cb95c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2cb95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb960: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x2cb960u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2cb964: 0x63578  dsll        $a2, $a2, 21
    ctx->pc = 0x2cb964u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 21);
    // 0x2cb968: 0x34c60010  ori         $a2, $a2, 0x10
    ctx->pc = 0x2cb968u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    // 0x2cb96c: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CB96Cu;
    SET_GPR_U32(ctx, 31, 0x2CB974u);
    ctx->pc = 0x2CB970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB96Cu;
    // 0x2cb970: 0x24050052  addiu       $a1, $zero, 0x52 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CB96Cu, 0x2CB974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB974u;
label_2cb974:
    // 0x2cb974: 0xc0e3d1e  jal         func_38F478
    ctx->pc = 0x2CB974u;
    SET_GPR_U32(ctx, 31, 0x2CB97Cu);
    ctx->pc = 0x2CB978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB974u;
    // 0x2cb978: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F478u, 0x2CB974u, 0x2CB97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB97Cu;
label_2cb97c:
    // 0x2cb97c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cb97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cb980: 0x1880003a  blez        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2CB980u;
    {
        const bool branch_taken_0x2cb980 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2CB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB980u;
        // 0x2cb984: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb980) {
            ctx->pc = 0x2CBA6Cu;
            goto label_2cba6c;
        }
    }
    ctx->pc = 0x2CB988u;
    // 0x2cb988: 0x3c160fff  lui         $s6, 0xFFF
    ctx->pc = 0x2cb988u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4095 << 16));
    // 0x2cb98c: 0x36d6ffff  ori         $s6, $s6, 0xFFFF
    ctx->pc = 0x2cb98cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x2cb990: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x2cb990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2cb994: 0x0  nop
    ctx->pc = 0x2cb994u;
    // NOP
label_2cb998:
    // 0x2cb998: 0x1840002f  blez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2CB998u;
    {
        const bool branch_taken_0x2cb998 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CB99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB998u;
        // 0x2cb99c: 0x247e0001  addiu       $fp, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb998) {
            ctx->pc = 0x2CBA58u;
            goto label_2cba58;
        }
    }
    ctx->pc = 0x2CB9A0u;
    // 0x2cb9a0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2cb9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2cb9a4: 0x8fb1005c  lw          $s1, 0x5C($sp)
    ctx->pc = 0x2cb9a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2cb9a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2cb9a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb9ac: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x2cb9acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb9b0: 0x2a83c  dsll32      $s5, $v0, 0
    ctx->pc = 0x2cb9b0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2cb9b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cb9b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb9b8: 0x3a03c  dsll32      $s4, $v1, 0
    ctx->pc = 0x2cb9b8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2cb9bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cb9bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cb9c0:
    // 0x2cb9c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cb9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb9c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb9c8: 0xc0e3cb0  jal         func_38F2C0
    ctx->pc = 0x2CB9C8u;
    SET_GPR_U32(ctx, 31, 0x2CB9D0u);
    ctx->pc = 0x2CB9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB9C8u;
    // 0x2cb9cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F2C0u, 0x2CB9C8u, 0x2CB9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB9D0u;
label_2cb9d0:
    // 0x2cb9d0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2cb9d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2cb9d4: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x2cb9d4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb9d8: 0xc0e3d18  jal         func_38F460
    ctx->pc = 0x2CB9D8u;
    SET_GPR_U32(ctx, 31, 0x2CB9E0u);
    ctx->pc = 0x2CB9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB9D8u;
    // 0x2cb9dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F460u, 0x2CB9D8u, 0x2CB9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB9E0u;
label_2cb9e0:
    // 0x2cb9e0: 0x12343c  dsll32      $a2, $s2, 16
    ctx->pc = 0x2cb9e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2cb9e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb9e8: 0x2a63025  or          $a2, $s5, $a2
    ctx->pc = 0x2cb9e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) | GPR_U64(ctx, 6));
    // 0x2cb9ec: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CB9ECu;
    SET_GPR_U32(ctx, 31, 0x2CB9F4u);
    ctx->pc = 0x2CB9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB9ECu;
    // 0x2cb9f0: 0x24050051  addiu       $a1, $zero, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CB9ECu, 0x2CB9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB9F4u;
label_2cb9f4:
    // 0x2cb9f4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2cb9f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2cb9f8: 0x14303e  dsrl32      $a2, $s4, 0
    ctx->pc = 0x2cb9f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x2cb9fc: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x2cb9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x2cba00: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CBA00u;
    SET_GPR_U32(ctx, 31, 0x2CBA08u);
    ctx->pc = 0x2CBA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBA00u;
    // 0x2cba04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CBA00u, 0x2CBA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA08u;
label_2cba08:
    // 0x2cba08: 0xc0e3d1e  jal         func_38F478
    ctx->pc = 0x2CBA08u;
    SET_GPR_U32(ctx, 31, 0x2CBA10u);
    ctx->pc = 0x2CBA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBA08u;
    // 0x2cba0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F478u, 0x2CBA08u, 0x2CBA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA10u;
label_2cba10:
    // 0x2cba10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cba10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba14: 0xc0e3d12  jal         func_38F448
    ctx->pc = 0x2CBA14u;
    SET_GPR_U32(ctx, 31, 0x2CBA1Cu);
    ctx->pc = 0x2CBA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBA14u;
    // 0x2cba18: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F448u, 0x2CBA14u, 0x2CBA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA1Cu;
label_2cba1c:
    // 0x2cba1c: 0x2762824  and         $a1, $s3, $s6
    ctx->pc = 0x2cba1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 22));
    // 0x2cba20: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2cba20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2cba24: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x2cba24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x2cba28: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2cba28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2cba2c: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x2cba2cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x2cba30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cba30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba34: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2cba34u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2cba38: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2cba38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cba3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cba3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2cba40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2cba44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba48: 0xc0e3cce  jal         func_38F338
    ctx->pc = 0x2CBA48u;
    SET_GPR_U32(ctx, 31, 0x2CBA50u);
    ctx->pc = 0x2CBA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBA48u;
    // 0x2cba4c: 0x26730400  addiu       $s3, $s3, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F338u, 0x2CBA48u, 0x2CBA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBA50u;
label_2cba50:
    // 0x2cba50: 0x1620ffdb  bnez        $s1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2CBA50u;
    {
        const bool branch_taken_0x2cba50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA50u;
        // 0x2cba54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba50) {
            ctx->pc = 0x2CB9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb9c0;
        }
    }
    ctx->pc = 0x2CBA58u;
label_2cba58:
    // 0x2cba58: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cba58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cba5c: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x2cba5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba60: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2cba60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2cba64: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2CBA64u;
    {
        const bool branch_taken_0x2cba64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA64u;
        // 0x2cba68: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba64) {
            ctx->pc = 0x2CB998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb998;
        }
    }
    ctx->pc = 0x2CBA6Cu;
label_2cba6c:
    // 0x2cba6c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2cba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2cba70:
    // 0x2cba70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cba70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cba74: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x2cba74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2cba78: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x2cba78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
    // 0x2cba7c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2cba7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2cba80: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2cba80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cba84: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x2cba84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x2cba88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cba88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba8c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2cba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2cba90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cba90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cba94: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2cba94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2cba98: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2cba98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2cba9c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2cba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2cbaa0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2cbaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbaa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cbaa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbaa8: 0x8c49b4a8  lw          $t1, -0x4B58($v0)
    ctx->pc = 0x2cbaa8u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2cbaac: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x2cbaacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2cbab0: 0x8d2332f8  lw          $v1, 0x32F8($t1)
    ctx->pc = 0x2cbab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 13048)));
    // 0x2cbab4: 0x143502a  slt         $t2, $t2, $v1
    ctx->pc = 0x2cbab4u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2cbab8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2cbab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2cbabc: 0x24680003  addiu       $t0, $v1, 0x3
    ctx->pc = 0x2cbabcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2cbac0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2cbac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cbac4: 0x6a400b  movn        $t0, $v1, $t2
    ctx->pc = 0x2cbac4u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x2cbac8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2cbac8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2cbacc: 0x84083  sra         $t0, $t0, 2
    ctx->pc = 0x2cbaccu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 2));
    // 0x2cbad0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2cbad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2cbad4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2cbad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2cbad8: 0x8d2332f4  lw          $v1, 0x32F4($t1)
    ctx->pc = 0x2cbad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 13044)));
    // 0x2cbadc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2cbadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2cbae0: 0x8d2232f8  lw          $v0, 0x32F8($t1)
    ctx->pc = 0x2cbae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 13048)));
    // 0x2cbae4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2cbae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2cbae8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cbae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cbaec: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2cbaecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2cbaf0: 0xc0e3cb0  jal         func_38F2C0
    ctx->pc = 0x2CBAF0u;
    SET_GPR_U32(ctx, 31, 0x2CBAF8u);
    ctx->pc = 0x2CBAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBAF0u;
    // 0x2cbaf4: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F2C0u, 0x2CBAF0u, 0x2CBAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBAF8u;
label_2cbaf8:
    // 0x2cbaf8: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x2cbaf8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbafc: 0xc0e3d18  jal         func_38F460
    ctx->pc = 0x2CBAFCu;
    SET_GPR_U32(ctx, 31, 0x2CBB04u);
    ctx->pc = 0x2CBB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBAFCu;
    // 0x2cbb00: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F460u, 0x2CBAFCu, 0x2CBB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB04u;
label_2cbb04:
    // 0x2cbb04: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2cbb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb08: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x2cbb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2cbb0c: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CBB0Cu;
    SET_GPR_U32(ctx, 31, 0x2CBB14u);
    ctx->pc = 0x2CBB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBB0Cu;
    // 0x2cbb10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CBB0Cu, 0x2CBB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB14u;
label_2cbb14:
    // 0x2cbb14: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2cbb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb18: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2cbb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cbb1c: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CBB1Cu;
    SET_GPR_U32(ctx, 31, 0x2CBB24u);
    ctx->pc = 0x2CBB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBB1Cu;
    // 0x2cbb20: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CBB1Cu, 0x2CBB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB24u;
label_2cbb24:
    // 0x2cbb24: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2cbb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb28: 0x3406aa80  ori         $a2, $zero, 0xAA80
    ctx->pc = 0x2cbb28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43648);
    // 0x2cbb2c: 0x634b8  dsll        $a2, $a2, 18
    ctx->pc = 0x2cbb2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 18);
    // 0x2cbb30: 0x34c6c6c0  ori         $a2, $a2, 0xC6C0
    ctx->pc = 0x2cbb30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)50880);
    // 0x2cbb34: 0x630b8  dsll        $a2, $a2, 2
    ctx->pc = 0x2cbb34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 2);
    // 0x2cbb38: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CBB38u;
    SET_GPR_U32(ctx, 31, 0x2CBB40u);
    ctx->pc = 0x2CBB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBB38u;
    // 0x2cbb3c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CBB38u, 0x2CBB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB40u;
label_2cbb40:
    // 0x2cbb40: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2cbb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb44: 0x24060116  addiu       $a2, $zero, 0x116
    ctx->pc = 0x2cbb44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x2cbb48: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CBB48u;
    SET_GPR_U32(ctx, 31, 0x2CBB50u);
    ctx->pc = 0x2CBB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBB48u;
    // 0x2cbb4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CBB48u, 0x2CBB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB50u;
label_2cbb50:
    // 0x2cbb50: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2cbb50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2cbb54: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2cbb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2cbb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbb5c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2cbb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cbb60: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2cbb60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2cbb64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cbb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cbb68: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2cbb68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2cbb6c: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CBB6Cu;
    SET_GPR_U32(ctx, 31, 0x2CBB74u);
    ctx->pc = 0x2CBB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBB6Cu;
    // 0x2cbb70: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CBB6Cu, 0x2CBB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB74u;
label_2cbb74:
    // 0x2cbb74: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x2cbb74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2cbb78: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2cbb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cbb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbb80: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2cbb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2cbb84: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2cbb84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2cbb88: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cbb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cbb8c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2cbb8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2cbb90: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CBB90u;
    SET_GPR_U32(ctx, 31, 0x2CBB98u);
    ctx->pc = 0x2CBB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBB90u;
    // 0x2cbb94: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CBB90u, 0x2CBB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB98u;
label_2cbb98:
    // 0x2cbb98: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x2cbb98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2cbb9c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2cbb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbba0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2cbba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2cbba4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2cbba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cbba8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2cbba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cbbac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2cbbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbbb0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2cbbb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2cbbb4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2cbbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2cbbb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cbbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cbbbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cbbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cbbc0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2cbbc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2cbbc4: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CBBC4u;
    SET_GPR_U32(ctx, 31, 0x2CBBCCu);
    ctx->pc = 0x2CBBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBBC4u;
    // 0x2cbbc8: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CBBC4u, 0x2CBBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBBCCu;
label_2cbbcc:
    // 0x2cbbcc: 0x8fa7001c  lw          $a3, 0x1C($sp)
    ctx->pc = 0x2cbbccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2cbbd0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2cbbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2cbbd4: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x2cbbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2cbbd8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2cbbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbbdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cbbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbbe0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2cbbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cbbe4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2cbbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2cbbe8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2cbbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2cbbec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cbbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cbbf0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cbbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cbbf4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2cbbf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2cbbf8: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CBBF8u;
    SET_GPR_U32(ctx, 31, 0x2CBC00u);
    ctx->pc = 0x2CBBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBBF8u;
    // 0x2cbbfc: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CBBF8u, 0x2CBC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC00u;
label_2cbc00:
    // 0x2cbc00: 0xc0e3d1e  jal         func_38F478
    ctx->pc = 0x2CBC00u;
    SET_GPR_U32(ctx, 31, 0x2CBC08u);
    ctx->pc = 0x2CBC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBC00u;
    // 0x2cbc04: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F478u, 0x2CBC00u, 0x2CBC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC08u;
label_2cbc08:
    // 0x2cbc08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cbc08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cbc0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc10: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2cbc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc14: 0xc0e3cf4  jal         func_38F3D0
    ctx->pc = 0x2CBC14u;
    SET_GPR_U32(ctx, 31, 0x2CBC1Cu);
    ctx->pc = 0x2CBC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBC14u;
    // 0x2cbc18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F3D0u, 0x2CBC14u, 0x2CBC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC1Cu;
label_2cbc1c:
    // 0x2cbc1c: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x2cbc1cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cbc20: 0xc0e3d18  jal         func_38F460
    ctx->pc = 0x2CBC20u;
    SET_GPR_U32(ctx, 31, 0x2CBC28u);
    ctx->pc = 0x2CBC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBC20u;
    // 0x2cbc24: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F460u, 0x2CBC20u, 0x2CBC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC28u;
label_2cbc28:
    // 0x2cbc28: 0xc0e3d1e  jal         func_38F478
    ctx->pc = 0x2CBC28u;
    SET_GPR_U32(ctx, 31, 0x2CBC30u);
    ctx->pc = 0x2CBC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBC28u;
    // 0x2cbc2c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F478u, 0x2CBC28u, 0x2CBC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC30u;
label_2cbc30:
    // 0x2cbc30: 0xc0e3c9a  jal         func_38F268
    ctx->pc = 0x2CBC30u;
    SET_GPR_U32(ctx, 31, 0x2CBC38u);
    ctx->pc = 0x2CBC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBC30u;
    // 0x2cbc34: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F268u, 0x2CBC30u, 0x2CBC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC38u;
label_2cbc38:
    // 0x2cbc38: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2cbc38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cbc3c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2cbc3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cbc40: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2cbc40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cbc44: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2cbc44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2cbc48: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2cbc48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2cbc4c: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x2cbc4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2cbc50: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2cbc50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2cbc54: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x2cbc54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2cbc58: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2cbc58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2cbc5c: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x2cbc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2cbc60: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC60u;
        // 0x2cbc64: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBC68u;
}
