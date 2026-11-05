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

// Function: sub_0028B0C0
// Address: 0x28b0c0 - 0x28b5e0
void sub_0028B0C0_0x28b0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B0C0_0x28b0c0");
#endif

    switch (ctx->pc) {
        case 0x28b108u: goto label_28b108;
        case 0x28b1c8u: goto label_28b1c8;
        case 0x28b1f4u: goto label_28b1f4;
        case 0x28b220u: goto label_28b220;
        case 0x28b24cu: goto label_28b24c;
        case 0x28b3f0u: goto label_28b3f0;
        case 0x28b40cu: goto label_28b40c;
        case 0x28b414u: goto label_28b414;
        case 0x28b428u: goto label_28b428;
        case 0x28b47cu: goto label_28b47c;
        case 0x28b488u: goto label_28b488;
        case 0x28b494u: goto label_28b494;
        case 0x28b4d0u: goto label_28b4d0;
        case 0x28b530u: goto label_28b530;
        case 0x28b548u: goto label_28b548;
        case 0x28b574u: goto label_28b574;
        default: break;
    }

    ctx->pc = 0x28b0c0u;

    // 0x28b0c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28b0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28b0c4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x28b0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x28b0c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x28b0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x28b0cc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x28b0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x28b0d0: 0x2470ac88  addiu       $s0, $v1, -0x5378
    ctx->pc = 0x28b0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945928));
    // 0x28b0d4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x28b0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x28b0d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28b0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28b0dc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x28b0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x28b0e0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x28b0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x28b0e4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x28b0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x28b0e8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x28b0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x28b0ec: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x28b0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x28b0f0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x28b0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x28b0f4: 0x8e020170  lw          $v0, 0x170($s0)
    ctx->pc = 0x28b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BADF8u));
    // 0x28b0f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B0F8u;
    {
        const bool branch_taken_0x28b0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0F8u;
        // 0x28b0fc: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b0f8) {
            ctx->pc = 0x28B10Cu;
            goto label_28b10c;
        }
    }
    ctx->pc = 0x28B100u;
    // 0x28b100: 0xc0a2df0  jal         func_28B7C0
    ctx->pc = 0x28B100u;
    SET_GPR_U32(ctx, 31, 0x28B108u);
    ctx->pc = 0x28B7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B7C0u, 0x28B100u, 0x28B108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B108u;
label_28b108:
    // 0x28b108: 0xae000170  sw          $zero, 0x170($s0)
    ctx->pc = 0x28b108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
label_28b10c:
    // 0x28b10c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28b110: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28b110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28b114: 0x8c54bd50  lw          $s4, -0x42B0($v0)
    ctx->pc = 0x28b114u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x28b118: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x28b118u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x28b11c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x28b11cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x28b120: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x28b120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x28b124: 0x8e820228  lw          $v0, 0x228($s4)
    ctx->pc = 0x28b124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 552)));
    // 0x28b128: 0x8e960224  lw          $s6, 0x224($s4)
    ctx->pc = 0x28b128u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 548)));
    // 0x28b12c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x28b12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x28b130: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x28b130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x28b134: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28b134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28b138: 0xac64a518  sw          $a0, -0x5AE8($v1)
    ctx->pc = 0x28b138u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3FA518u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA518u, _value); } while (0);
    // 0x28b13c: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x28b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x28b140: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x28b140u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28b144: 0xacc8a51c  sw          $t0, -0x5AE4($a2)
    ctx->pc = 0x28b144u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x3FA51Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA51Cu, _value); } while (0);
    // 0x28b148: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x28b148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x28b14c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x28b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28b150: 0xace3a520  sw          $v1, -0x5AE0($a3)
    ctx->pc = 0x28b150u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FA520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA520u, _value); } while (0);
    // 0x28b154: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x28b154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x28b158: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x28b158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x28b15c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28B15Cu;
    {
        const bool branch_taken_0x28b15c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B15Cu;
        // 0x28b160: 0xaca2a524  sw          $v0, -0x5ADC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294944036), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b15c) {
            ctx->pc = 0x28B180u;
            goto label_28b180;
        }
    }
    ctx->pc = 0x28B164u;
    // 0x28b164: 0x55000007  bnel        $t0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28B164u;
    {
        const bool branch_taken_0x28b164 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b164) {
            ctx->pc = 0x28B168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B164u;
            // 0x28b168: 0x26a2ac88  addiu       $v0, $s5, -0x5378 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945928));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B184u;
            goto label_28b184;
        }
    }
    ctx->pc = 0x28B16Cu;
    // 0x28b16c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B16Cu;
    {
        const bool branch_taken_0x28b16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B16Cu;
        // 0x28b170: 0x26a2ac88  addiu       $v0, $s5, -0x5378 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b16c) {
            ctx->pc = 0x28B184u;
            goto label_28b184;
        }
    }
    ctx->pc = 0x28B174u;
    // 0x28b174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28b174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b178: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28B178u;
    {
        const bool branch_taken_0x28b178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B178u;
        // 0x28b17c: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b178) {
            ctx->pc = 0x28B188u;
            goto label_28b188;
        }
    }
    ctx->pc = 0x28B180u;
label_28b180:
    // 0x28b180: 0x26a2ac88  addiu       $v0, $s5, -0x5378
    ctx->pc = 0x28b180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945928));
label_28b184:
    // 0x28b184: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x28b184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_28b188:
    // 0x28b188: 0x26a2ac88  addiu       $v0, $s5, -0x5378
    ctx->pc = 0x28b188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945928));
    // 0x28b18c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x28b18cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x28b190: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x28b190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x28b194: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x28b194u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
    // 0x28b198: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x28b198u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x28b19c: 0x1460006e  bnez        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x28B19Cu;
    {
        const bool branch_taken_0x28b19c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B19Cu;
        // 0x28b1a0: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b19c) {
            ctx->pc = 0x28B358u;
            goto label_28b358;
        }
    }
    ctx->pc = 0x28B1A4u;
    // 0x28b1a4: 0x8e02a528  lw          $v0, -0x5AD8($s0)
    ctx->pc = 0x28b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944040)));
    // 0x28b1a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28B1A8u;
    {
        const bool branch_taken_0x28b1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1A8u;
        // 0x28b1ac: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b1a8) {
            ctx->pc = 0x28B1C8u;
            goto label_28b1c8;
        }
    }
    ctx->pc = 0x28B1B0u;
    // 0x28b1b0: 0x8c62a518  lw          $v0, -0x5AE8($v1)
    ctx->pc = 0x28b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944024)));
    // 0x28b1b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B1B4u;
    {
        const bool branch_taken_0x28b1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1B4u;
        // 0x28b1b8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b1b4) {
            ctx->pc = 0x28B1CCu;
            goto label_28b1cc;
        }
    }
    ctx->pc = 0x28B1BCu;
    // 0x28b1bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28b1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b1c0: 0xc0bf040  jal         func_2FC100
    ctx->pc = 0x28B1C0u;
    SET_GPR_U32(ctx, 31, 0x28B1C8u);
    ctx->pc = 0x28B1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B1C0u;
    // 0x28b1c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC100u, 0x28B1C0u, 0x28B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B1C8u;
label_28b1c8:
    // 0x28b1c8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28b1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_28b1cc:
    // 0x28b1cc: 0x8c43a52c  lw          $v1, -0x5AD4($v0)
    ctx->pc = 0x28b1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944044)));
    // 0x28b1d0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28B1D0u;
    {
        const bool branch_taken_0x28b1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1D0u;
        // 0x28b1d4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b1d0) {
            ctx->pc = 0x28B1F4u;
            goto label_28b1f4;
        }
    }
    ctx->pc = 0x28B1D8u;
    // 0x28b1d8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x28b1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x28b1dc: 0x8ca2a51c  lw          $v0, -0x5AE4($a1)
    ctx->pc = 0x28b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA51Cu));
    // 0x28b1e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B1E0u;
    {
        const bool branch_taken_0x28b1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1E0u;
        // 0x28b1e4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b1e0) {
            ctx->pc = 0x28B1F8u;
            goto label_28b1f8;
        }
    }
    ctx->pc = 0x28B1E8u;
    // 0x28b1e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28b1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b1ec: 0xc0bf040  jal         func_2FC100
    ctx->pc = 0x28B1ECu;
    SET_GPR_U32(ctx, 31, 0x28B1F4u);
    ctx->pc = 0x28B1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B1ECu;
    // 0x28b1f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC100u, 0x28B1ECu, 0x28B1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B1F4u;
label_28b1f4:
    // 0x28b1f4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_28b1f8:
    // 0x28b1f8: 0x8c43a530  lw          $v1, -0x5AD0($v0)
    ctx->pc = 0x28b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944048)));
    // 0x28b1fc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28B1FCu;
    {
        const bool branch_taken_0x28b1fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1FCu;
        // 0x28b200: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b1fc) {
            ctx->pc = 0x28B220u;
            goto label_28b220;
        }
    }
    ctx->pc = 0x28B204u;
    // 0x28b204: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28b204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28b208: 0x8c62a520  lw          $v0, -0x5AE0($v1)
    ctx->pc = 0x28b208u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA520u));
    // 0x28b20c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B20Cu;
    {
        const bool branch_taken_0x28b20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B20Cu;
        // 0x28b210: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b20c) {
            ctx->pc = 0x28B224u;
            goto label_28b224;
        }
    }
    ctx->pc = 0x28B214u;
    // 0x28b214: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28b214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b218: 0xc0bf040  jal         func_2FC100
    ctx->pc = 0x28B218u;
    SET_GPR_U32(ctx, 31, 0x28B220u);
    ctx->pc = 0x28B21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B218u;
    // 0x28b21c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC100u, 0x28B218u, 0x28B220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B220u;
label_28b220:
    // 0x28b220: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28b220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_28b224:
    // 0x28b224: 0x8c43a534  lw          $v1, -0x5ACC($v0)
    ctx->pc = 0x28b224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944052)));
    // 0x28b228: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28B228u;
    {
        const bool branch_taken_0x28b228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B228u;
        // 0x28b22c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b228) {
            ctx->pc = 0x28B24Cu;
            goto label_28b24c;
        }
    }
    ctx->pc = 0x28B230u;
    // 0x28b230: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x28b230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x28b234: 0x8ca2a524  lw          $v0, -0x5ADC($a1)
    ctx->pc = 0x28b234u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA524u));
    // 0x28b238: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B238u;
    {
        const bool branch_taken_0x28b238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B238u;
        // 0x28b23c: 0x26a5ac88  addiu       $a1, $s5, -0x5378 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b238) {
            ctx->pc = 0x28B250u;
            goto label_28b250;
        }
    }
    ctx->pc = 0x28B240u;
    // 0x28b240: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28b240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b244: 0xc0bf040  jal         func_2FC100
    ctx->pc = 0x28B244u;
    SET_GPR_U32(ctx, 31, 0x28B24Cu);
    ctx->pc = 0x28B248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B244u;
    // 0x28b248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC100u, 0x28B244u, 0x28B24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B24Cu;
label_28b24c:
    // 0x28b24c: 0x26a5ac88  addiu       $a1, $s5, -0x5378
    ctx->pc = 0x28b24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945928));
label_28b250:
    // 0x28b250: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x28b250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x28b254: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x28B254u;
    {
        const bool branch_taken_0x28b254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B254u;
        // 0x28b258: 0x26a4ac88  addiu       $a0, $s5, -0x5378 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b254) {
            ctx->pc = 0x28B35Cu;
            goto label_28b35c;
        }
    }
    ctx->pc = 0x28B25Cu;
    // 0x28b25c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28b260: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28b260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b264: 0x8c432c10  lw          $v1, 0x2C10($v0)
    ctx->pc = 0x28b264u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482C10u));
    // 0x28b268: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B268u;
    {
        const bool branch_taken_0x28b268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B268u;
        // 0x28b26c: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b268) {
            ctx->pc = 0x28B278u;
            goto label_28b278;
        }
    }
    ctx->pc = 0x28B270u;
    // 0x28b270: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28b270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b274: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x28b274u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_28b278:
    // 0x28b278: 0x8ca30168  lw          $v1, 0x168($a1)
    ctx->pc = 0x28b278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 360)));
    // 0x28b27c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28b280: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28B280u;
    {
        const bool branch_taken_0x28b280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B280u;
        // 0x28b284: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b280) {
            ctx->pc = 0x28B29Cu;
            goto label_28b29c;
        }
    }
    ctx->pc = 0x28B288u;
    // 0x28b288: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28b288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28b28c: 0x8c43a520  lw          $v1, -0x5AE0($v0)
    ctx->pc = 0x28b28cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA520u));
    // 0x28b290: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28b290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b294: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x28b294u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x28b298: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28b298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_28b29c:
    // 0x28b29c: 0x8c43a518  lw          $v1, -0x5AE8($v0)
    ctx->pc = 0x28b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944024)));
    // 0x28b2a0: 0x8e02a528  lw          $v0, -0x5AD8($s0)
    ctx->pc = 0x28b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944040)));
    // 0x28b2a4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28B2A4u;
    {
        const bool branch_taken_0x28b2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28b2a4) {
            ctx->pc = 0x28B2A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B2A4u;
            // 0x28b2a8: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B2C8u;
            goto label_28b2c8;
        }
    }
    ctx->pc = 0x28B2ACu;
    // 0x28b2ac: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28B2ACu;
    {
        const bool branch_taken_0x28b2ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2ACu;
        // 0x28b2b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2ac) {
            ctx->pc = 0x28B2B8u;
            goto label_28b2b8;
        }
    }
    ctx->pc = 0x28B2B4u;
    // 0x28b2b4: 0xaca20168  sw          $v0, 0x168($a1)
    ctx->pc = 0x28b2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 360), GPR_U32(ctx, 2));
label_28b2b8:
    // 0x28b2b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b2bc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28b2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28b2c0: 0xac62a514  sw          $v0, -0x5AEC($v1)
    ctx->pc = 0x28b2c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FA514u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA514u, _value); } while (0);
    // 0x28b2c4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x28b2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_28b2c8:
    // 0x28b2c8: 0x8ee2a52c  lw          $v0, -0x5AD4($s7)
    ctx->pc = 0x28b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944044)));
    // 0x28b2cc: 0x8ca3a51c  lw          $v1, -0x5AE4($a1)
    ctx->pc = 0x28b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294944028)));
    // 0x28b2d0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28B2D0u;
    {
        const bool branch_taken_0x28b2d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2D0u;
        // 0x28b2d4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2d0) {
            ctx->pc = 0x28B2F8u;
            goto label_28b2f8;
        }
    }
    ctx->pc = 0x28B2D8u;
    // 0x28b2d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B2D8u;
    {
        const bool branch_taken_0x28b2d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2D8u;
        // 0x28b2dc: 0x26a3ac88  addiu       $v1, $s5, -0x5378 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2d8) {
            ctx->pc = 0x28B2E8u;
            goto label_28b2e8;
        }
    }
    ctx->pc = 0x28B2E0u;
    // 0x28b2e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28b2e4: 0xac620168  sw          $v0, 0x168($v1)
    ctx->pc = 0x28b2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 360), GPR_U32(ctx, 2));
label_28b2e8:
    // 0x28b2e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28b2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b2ec: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28b2f0: 0xac62a514  sw          $v0, -0x5AEC($v1)
    ctx->pc = 0x28b2f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FA514u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA514u, _value); } while (0);
    // 0x28b2f4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x28b2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_28b2f8:
    // 0x28b2f8: 0x8e42a530  lw          $v0, -0x5AD0($s2)
    ctx->pc = 0x28b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944048)));
    // 0x28b2fc: 0x8ca3a520  lw          $v1, -0x5AE0($a1)
    ctx->pc = 0x28b2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294944032)));
    // 0x28b300: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28B300u;
    {
        const bool branch_taken_0x28b300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B300u;
        // 0x28b304: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b300) {
            ctx->pc = 0x28B328u;
            goto label_28b328;
        }
    }
    ctx->pc = 0x28B308u;
    // 0x28b308: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B308u;
    {
        const bool branch_taken_0x28b308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B308u;
        // 0x28b30c: 0x26a3ac88  addiu       $v1, $s5, -0x5378 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b308) {
            ctx->pc = 0x28B318u;
            goto label_28b318;
        }
    }
    ctx->pc = 0x28B310u;
    // 0x28b310: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28b310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28b314: 0xac620168  sw          $v0, 0x168($v1)
    ctx->pc = 0x28b314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 360), GPR_U32(ctx, 2));
label_28b318:
    // 0x28b318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28b318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b31c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28b320: 0xac62a514  sw          $v0, -0x5AEC($v1)
    ctx->pc = 0x28b320u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FA514u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA514u, _value); } while (0);
    // 0x28b324: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x28b324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_28b328:
    // 0x28b328: 0x8e22a534  lw          $v0, -0x5ACC($s1)
    ctx->pc = 0x28b328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294944052)));
    // 0x28b32c: 0x8ca3a524  lw          $v1, -0x5ADC($a1)
    ctx->pc = 0x28b32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294944036)));
    // 0x28b330: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28B330u;
    {
        const bool branch_taken_0x28b330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B330u;
        // 0x28b334: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b330) {
            ctx->pc = 0x28B378u;
            goto label_28b378;
        }
    }
    ctx->pc = 0x28B338u;
    // 0x28b338: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B338u;
    {
        const bool branch_taken_0x28b338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B338u;
        // 0x28b33c: 0x26a3ac88  addiu       $v1, $s5, -0x5378 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b338) {
            ctx->pc = 0x28B348u;
            goto label_28b348;
        }
    }
    ctx->pc = 0x28B340u;
    // 0x28b340: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28b340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28b344: 0xac620168  sw          $v0, 0x168($v1)
    ctx->pc = 0x28b344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 360), GPR_U32(ctx, 2));
label_28b348:
    // 0x28b348: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28b348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b34c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28b34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28b350: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28B350u;
    {
        const bool branch_taken_0x28b350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B350u;
        // 0x28b354: 0xac62a514  sw          $v0, -0x5AEC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294944020), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b350) {
            ctx->pc = 0x28B374u;
            goto label_28b374;
        }
    }
    ctx->pc = 0x28B358u;
label_28b358:
    // 0x28b358: 0x26a4ac88  addiu       $a0, $s5, -0x5378
    ctx->pc = 0x28b358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945928));
label_28b35c:
    // 0x28b35c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28b360: 0x8c850134  lw          $a1, 0x134($a0)
    ctx->pc = 0x28b360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 308)));
    // 0x28b364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28b364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b368: 0xac62a514  sw          $v0, -0x5AEC($v1)
    ctx->pc = 0x28b368u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FA514u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA514u, _value); } while (0);
    // 0x28b36c: 0x3c090048  lui         $t1, 0x48
    ctx->pc = 0x28b36cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)72 << 16));
    // 0x28b370: 0xac850168  sw          $a1, 0x168($a0)
    ctx->pc = 0x28b370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 360), GPR_U32(ctx, 5));
label_28b374:
    // 0x28b374: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x28b374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_28b378:
    // 0x28b378: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28b378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28b37c: 0x8ca6a520  lw          $a2, -0x5AE0($a1)
    ctx->pc = 0x28b37cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294944032)));
    // 0x28b380: 0x26a7ac88  addiu       $a3, $s5, -0x5378
    ctx->pc = 0x28b380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945928));
    // 0x28b384: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x28b384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x28b388: 0x8c43a518  lw          $v1, -0x5AE8($v0)
    ctx->pc = 0x28b388u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA518u));
    // 0x28b38c: 0x8ca4a51c  lw          $a0, -0x5AE4($a1)
    ctx->pc = 0x28b38cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA51Cu));
    // 0x28b390: 0x2cc80001  sltiu       $t0, $a2, 0x1
    ctx->pc = 0x28b390u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x28b394: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x28b394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x28b398: 0x8ca2a524  lw          $v0, -0x5ADC($a1)
    ctx->pc = 0x28b398u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA524u));
    // 0x28b39c: 0x8ce50130  lw          $a1, 0x130($a3)
    ctx->pc = 0x28b39cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x28b3a0: 0xae22a534  sw          $v0, -0x5ACC($s1)
    ctx->pc = 0x28b3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294944052), GPR_U32(ctx, 2));
    // 0x28b3a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b3a8: 0xae03a528  sw          $v1, -0x5AD8($s0)
    ctx->pc = 0x28b3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294944040), GPR_U32(ctx, 3));
    // 0x28b3ac: 0xaee4a52c  sw          $a0, -0x5AD4($s7)
    ctx->pc = 0x28b3acu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294944044), GPR_U32(ctx, 4));
    // 0x28b3b0: 0xae46a530  sw          $a2, -0x5AD0($s2)
    ctx->pc = 0x28b3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294944048), GPR_U32(ctx, 6));
    // 0x28b3b4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28B3B4u;
    {
        const bool branch_taken_0x28b3b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3B4u;
        // 0x28b3b8: 0xad222c10  sw          $v0, 0x2C10($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 11280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3b4) {
            ctx->pc = 0x28B3D0u;
            goto label_28b3d0;
        }
    }
    ctx->pc = 0x28B3BCu;
    // 0x28b3bc: 0x8ce20134  lw          $v0, 0x134($a3)
    ctx->pc = 0x28b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 308)));
    // 0x28b3c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B3C0u;
    {
        const bool branch_taken_0x28b3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3C0u;
        // 0x28b3c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3c0) {
            ctx->pc = 0x28B3D0u;
            goto label_28b3d0;
        }
    }
    ctx->pc = 0x28B3C8u;
    // 0x28b3c8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28b3c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b3cc: 0xace20168  sw          $v0, 0x168($a3)
    ctx->pc = 0x28b3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 360), GPR_U32(ctx, 2));
label_28b3d0:
    // 0x28b3d0: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28B3D0u;
    {
        const bool branch_taken_0x28b3d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3D0u;
        // 0x28b3d4: 0x26b0ac88  addiu       $s0, $s5, -0x5378 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3d0) {
            ctx->pc = 0x28B3F4u;
            goto label_28b3f4;
        }
    }
    ctx->pc = 0x28B3D8u;
    // 0x28b3d8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x28b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28b3dc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x28b3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x28b3e0: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x28b3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x28b3e4: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x28b3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x28b3e8: 0xc0a8d56  jal         func_2A3558
    ctx->pc = 0x28B3E8u;
    SET_GPR_U32(ctx, 31, 0x28B3F0u);
    ctx->pc = 0x28B3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B3E8u;
    // 0x28b3ec: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3558u, 0x28B3E8u, 0x28B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B3F0u;
label_28b3f0:
    // 0x28b3f0: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x28b3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
label_28b3f4:
    // 0x28b3f4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28b3f8: 0x8c62a514  lw          $v0, -0x5AEC($v1)
    ctx->pc = 0x28b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA514u));
    // 0x28b3fc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x28B3FCu;
    {
        const bool branch_taken_0x28b3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3FCu;
        // 0x28b400: 0x26a2ac88  addiu       $v0, $s5, -0x5378 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3fc) {
            ctx->pc = 0x28B4B8u;
            goto label_28b4b8;
        }
    }
    ctx->pc = 0x28B404u;
    // 0x28b404: 0xc0a2df0  jal         func_28B7C0
    ctx->pc = 0x28B404u;
    SET_GPR_U32(ctx, 31, 0x28B40Cu);
    ctx->pc = 0x28B408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B404u;
    // 0x28b408: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B7C0u, 0x28B404u, 0x28B40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B40Cu;
label_28b40c:
    // 0x28b40c: 0xc0a2c20  jal         func_28B080
    ctx->pc = 0x28B40Cu;
    SET_GPR_U32(ctx, 31, 0x28B414u);
    ctx->pc = 0x28B410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B40Cu;
    // 0x28b410: 0x241e0002  addiu       $fp, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B080u, 0x28B40Cu, 0x28B414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B414u;
label_28b414:
    // 0x28b414: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28b414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28b418: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x28b418u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28b41c: 0x2442ac88  addiu       $v0, $v0, -0x5378
    ctx->pc = 0x28b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945928));
    // 0x28b420: 0x24520190  addiu       $s2, $v0, 0x190
    ctx->pc = 0x28b420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x28b424: 0x0  nop
    ctx->pc = 0x28b424u;
    // NOP
label_28b428:
    // 0x28b428: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B428u;
    {
        const bool branch_taken_0x28b428 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B428u;
        // 0x28b42c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b428) {
            ctx->pc = 0x28B43Cu;
            goto label_28b43c;
        }
    }
    ctx->pc = 0x28B430u;
    // 0x28b430: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x28b430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x28b434: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28B434u;
    {
        const bool branch_taken_0x28b434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B434u;
        // 0x28b438: 0x8cb3a518  lw          $s3, -0x5AE8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294944024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b434) {
            ctx->pc = 0x28B46Cu;
            goto label_28b46c;
        }
    }
    ctx->pc = 0x28B43Cu;
label_28b43c:
    // 0x28b43c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B43Cu;
    {
        const bool branch_taken_0x28b43c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x28B440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B43Cu;
        // 0x28b440: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b43c) {
            ctx->pc = 0x28B44Cu;
            goto label_28b44c;
        }
    }
    ctx->pc = 0x28B444u;
    // 0x28b444: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28B444u;
    {
        const bool branch_taken_0x28b444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B444u;
        // 0x28b448: 0x8c73a51c  lw          $s3, -0x5AE4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b444) {
            ctx->pc = 0x28B46Cu;
            goto label_28b46c;
        }
    }
    ctx->pc = 0x28B44Cu;
label_28b44c:
    // 0x28b44c: 0x163e0004  bne         $s1, $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B44Cu;
    {
        const bool branch_taken_0x28b44c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 30));
        ctx->pc = 0x28B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B44Cu;
        // 0x28b450: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b44c) {
            ctx->pc = 0x28B460u;
            goto label_28b460;
        }
    }
    ctx->pc = 0x28B454u;
    // 0x28b454: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x28b454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x28b458: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28B458u;
    {
        const bool branch_taken_0x28b458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B458u;
        // 0x28b45c: 0x8cb3a520  lw          $s3, -0x5AE0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294944032)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b458) {
            ctx->pc = 0x28B46Cu;
            goto label_28b46c;
        }
    }
    ctx->pc = 0x28B460u;
label_28b460:
    // 0x28b460: 0x8c43a524  lw          $v1, -0x5ADC($v0)
    ctx->pc = 0x28b460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944036)));
    // 0x28b464: 0x2371026  xor         $v0, $s1, $s7
    ctx->pc = 0x28b464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 23));
    // 0x28b468: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x28b468u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_28b46c:
    // 0x28b46c: 0x5260000c  beql        $s3, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x28B46Cu;
    {
        const bool branch_taken_0x28b46c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b46c) {
            ctx->pc = 0x28B470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B46Cu;
            // 0x28b470: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B4A0u;
            goto label_28b4a0;
        }
    }
    ctx->pc = 0x28B474u;
    // 0x28b474: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x28B474u;
    SET_GPR_U32(ctx, 31, 0x28B47Cu);
    ctx->pc = 0x28B478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B474u;
    // 0x28b478: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x28B474u, 0x28B47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B47Cu;
label_28b47c:
    // 0x28b47c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28b47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b480: 0xc0a2d9e  jal         func_28B678
    ctx->pc = 0x28B480u;
    SET_GPR_U32(ctx, 31, 0x28B488u);
    ctx->pc = 0x28B484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B480u;
    // 0x28b484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B678u, 0x28B480u, 0x28B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B488u;
label_28b488:
    // 0x28b488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28b488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b48c: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x28B48Cu;
    SET_GPR_U32(ctx, 31, 0x28B494u);
    ctx->pc = 0x28B490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B48Cu;
    // 0x28b490: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x28B48Cu, 0x28B494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B494u;
label_28b494:
    // 0x28b494: 0xae42fff0  sw          $v0, -0x10($s2)
    ctx->pc = 0x28b494u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294967280), GPR_U32(ctx, 2));
    // 0x28b498: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x28b498u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x28b49c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28b49cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_28b4a0:
    // 0x28b4a0: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x28b4a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x28b4a4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x28B4A4u;
    {
        const bool branch_taken_0x28b4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4A4u;
        // 0x28b4a8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4a4) {
            ctx->pc = 0x28B428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b428;
        }
    }
    ctx->pc = 0x28B4ACu;
    // 0x28b4ac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28b4b0: 0xac60a514  sw          $zero, -0x5AEC($v1)
    ctx->pc = 0x28b4b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA514u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA514u, _value); } while (0);
    // 0x28b4b4: 0x26a2ac88  addiu       $v0, $s5, -0x5378
    ctx->pc = 0x28b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945928));
label_28b4b8:
    // 0x28b4b8: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x28b4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x28b4bc: 0x8c500168  lw          $s0, 0x168($v0)
    ctx->pc = 0x28b4bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 360)));
    // 0x28b4c0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x28b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x28b4c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28b4c8: 0xc0a0344  jal         func_280D10
    ctx->pc = 0x28B4C8u;
    SET_GPR_U32(ctx, 31, 0x28B4D0u);
    ctx->pc = 0x28B4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B4C8u;
    // 0x28b4cc: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D10u, 0x28B4C8u, 0x28B4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B4D0u;
label_28b4d0:
    // 0x28b4d0: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x28B4D0u;
    {
        const bool branch_taken_0x28b4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4D0u;
        // 0x28b4d4: 0x26a3ac88  addiu       $v1, $s5, -0x5378 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4d0) {
            ctx->pc = 0x28B54Cu;
            goto label_28b54c;
        }
    }
    ctx->pc = 0x28B4D8u;
    // 0x28b4d8: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x28B4D8u;
    {
        const bool branch_taken_0x28b4d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4D8u;
        // 0x28b4dc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4d8) {
            ctx->pc = 0x28B538u;
            goto label_28b538;
        }
    }
    ctx->pc = 0x28B4E0u;
    // 0x28b4e0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x28b4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b4e4: 0x24424dd0  addiu       $v0, $v0, 0x4DD0
    ctx->pc = 0x28b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19920));
    // 0x28b4e8: 0xc4410554  lwc1        $f1, 0x554($v0)
    ctx->pc = 0x28b4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28b4ec: 0xc4400550  lwc1        $f0, 0x550($v0)
    ctx->pc = 0x28b4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b4f0: 0x10b00016  beq         $a1, $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28B4F0u;
    {
        const bool branch_taken_0x28b4f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        ctx->pc = 0x28B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4F0u;
        // 0x28b4f4: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4f0) {
            ctx->pc = 0x28B54Cu;
            goto label_28b54c;
        }
    }
    ctx->pc = 0x28B4F8u;
    // 0x28b4f8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28b4fc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28b500: 0xc460a538  lwc1        $f0, -0x5AC8($v1)
    ctx->pc = 0x28b500u;
    { uint32_t bits = FAST_READ32(0x3FA538u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28b504: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x28b504u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28b508: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28b508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28b50c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x28b50cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28b510: 0x0  nop
    ctx->pc = 0x28b510u;
    // NOP
    // 0x28b514: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x28B514u;
    {
        const bool branch_taken_0x28b514 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28B518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B514u;
        // 0x28b518: 0xe460a538  swc1        $f0, -0x5AC8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294944056), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b514) {
            ctx->pc = 0x28B548u;
            goto label_28b548;
        }
    }
    ctx->pc = 0x28B51Cu;
    // 0x28b51c: 0xac60a538  sw          $zero, -0x5AC8($v1)
    ctx->pc = 0x28b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294944056), GPR_U32(ctx, 0));
    // 0x28b520: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28b520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b524: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28b524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b528: 0xc08db1e  jal         func_236C78
    ctx->pc = 0x28B528u;
    SET_GPR_U32(ctx, 31, 0x28B530u);
    ctx->pc = 0x28B52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B528u;
    // 0x28b52c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C78u, 0x28B528u, 0x28B530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B530u;
label_28b530:
    // 0x28b530: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28B530u;
    {
        const bool branch_taken_0x28b530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B530u;
        // 0x28b534: 0x26a3ac88  addiu       $v1, $s5, -0x5378 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b530) {
            ctx->pc = 0x28B54Cu;
            goto label_28b54c;
        }
    }
    ctx->pc = 0x28B538u;
label_28b538:
    // 0x28b538: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28b538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b53c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28b53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b540: 0xc08db1e  jal         func_236C78
    ctx->pc = 0x28B540u;
    SET_GPR_U32(ctx, 31, 0x28B548u);
    ctx->pc = 0x28B544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B540u;
    // 0x28b544: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C78u, 0x28B540u, 0x28B548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B548u;
label_28b548:
    // 0x28b548: 0x26a3ac88  addiu       $v1, $s5, -0x5378
    ctx->pc = 0x28b548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945928));
label_28b54c:
    // 0x28b54c: 0x8c620174  lw          $v0, 0x174($v1)
    ctx->pc = 0x28b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
    // 0x28b550: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x28B550u;
    {
        const bool branch_taken_0x28b550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B550u;
        // 0x28b554: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b550) {
            ctx->pc = 0x28B59Cu;
            goto label_28b59c;
        }
    }
    ctx->pc = 0x28B558u;
    // 0x28b558: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x28b558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x28b55c: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B55Cu;
    {
        const bool branch_taken_0x28b55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x28B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B55Cu;
        // 0x28b560: 0xac600174  sw          $zero, 0x174($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 372), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b55c) {
            ctx->pc = 0x28B570u;
            goto label_28b570;
        }
    }
    ctx->pc = 0x28B564u;
    // 0x28b564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28b564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b568: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28B568u;
    {
        const bool branch_taken_0x28b568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B568u;
        // 0x28b56c: 0xac620164  sw          $v0, 0x164($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b568) {
            ctx->pc = 0x28B59Cu;
            goto label_28b59c;
        }
    }
    ctx->pc = 0x28B570u;
label_28b570:
    // 0x28b570: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28b570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_28b574:
    // 0x28b574: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x28b574u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x28b578: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28B578u;
    {
        const bool branch_taken_0x28b578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B578u;
        // 0x28b57c: 0x26a5ac88  addiu       $a1, $s5, -0x5378 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b578) {
            ctx->pc = 0x28B59Cu;
            goto label_28b59c;
        }
    }
    ctx->pc = 0x28B580u;
    // 0x28b580: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x28b580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28b584: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x28b584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28b588: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x28b588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x28b58c: 0x5470fff9  bnel        $v1, $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28B58Cu;
    {
        const bool branch_taken_0x28b58c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x28b58c) {
            ctx->pc = 0x28B590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B58Cu;
            // 0x28b590: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B574u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b574;
        }
    }
    ctx->pc = 0x28B594u;
    // 0x28b594: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x28b594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28b598: 0xaca20164  sw          $v0, 0x164($a1)
    ctx->pc = 0x28b598u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 356), GPR_U32(ctx, 2));
label_28b59c:
    // 0x28b59c: 0x26a2ac88  addiu       $v0, $s5, -0x5378
    ctx->pc = 0x28b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945928));
    // 0x28b5a0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28b5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28b5a4: 0xac60a510  sw          $zero, -0x5AF0($v1)
    ctx->pc = 0x28b5a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA510u, _value); } while (0);
    // 0x28b5a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x28b5a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b5ac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x28b5acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28b5b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28b5b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b5b4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x28b5b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28b5b8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x28b5b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b5bc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x28b5bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28b5c0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x28b5c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28b5c4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x28b5c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x28b5c8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x28b5c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28b5cc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x28b5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28b5d0: 0xac400130  sw          $zero, 0x130($v0)
    ctx->pc = 0x28b5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 0));
    // 0x28b5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x28B5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5D4u;
        // 0x28b5d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B5DCu;
    // 0x28b5dc: 0x0  nop
    ctx->pc = 0x28b5dcu;
    // NOP
    ctx->pc = 0x28b5e0u;
}
