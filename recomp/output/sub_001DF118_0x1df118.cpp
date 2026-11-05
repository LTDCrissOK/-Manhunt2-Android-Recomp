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

// Function: sub_001DF118
// Address: 0x1df118 - 0x1df368
void sub_001DF118_0x1df118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF118_0x1df118");
#endif

    switch (ctx->pc) {
        case 0x1df158u: goto label_1df158;
        case 0x1df170u: goto label_1df170;
        case 0x1df1c8u: goto label_1df1c8;
        case 0x1df1e8u: goto label_1df1e8;
        case 0x1df220u: goto label_1df220;
        case 0x1df294u: goto label_1df294;
        case 0x1df2f4u: goto label_1df2f4;
        case 0x1df334u: goto label_1df334;
        default: break;
    }

    ctx->pc = 0x1df118u;

    // 0x1df118: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1df118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1df11c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1df11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1df120: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1df120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1df124: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1df124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df128: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1df128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1df12c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1df12cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df130: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1df130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1df134: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1df134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df138: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1df138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1df13c: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1df13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1df140: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1df140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1df144: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x1df144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x1df148: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x1df148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x1df14c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1df14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1df150: 0xc077fee  jal         func_1DFFB8
    ctx->pc = 0x1DF150u;
    SET_GPR_U32(ctx, 31, 0x1DF158u);
    ctx->pc = 0x1DF154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF150u;
    // 0x1df154: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFFB8u, 0x1DF150u, 0x1DF158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF158u;
label_1df158:
    // 0x1df158: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DF158u;
    {
        const bool branch_taken_0x1df158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF158u;
        // 0x1df15c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df158) {
            ctx->pc = 0x1DF168u;
            goto label_1df168;
        }
    }
    ctx->pc = 0x1DF160u;
    // 0x1df160: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x1DF160u;
    {
        const bool branch_taken_0x1df160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF160u;
        // 0x1df164: 0x8c6291c0  lw          $v0, -0x6E40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df160) {
            ctx->pc = 0x1DF338u;
            goto label_1df338;
        }
    }
    ctx->pc = 0x1DF168u;
label_1df168:
    // 0x1df168: 0xc0f75c2  jal         func_3DD708
    ctx->pc = 0x1DF168u;
    SET_GPR_U32(ctx, 31, 0x1DF170u);
    ctx->pc = 0x1DF16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF168u;
    // 0x1df16c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD708u, 0x1DF168u, 0x1DF170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF170u;
label_1df170:
    // 0x1df170: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1DF170u;
    {
        const bool branch_taken_0x1df170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF170u;
        // 0x1df174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df170) {
            ctx->pc = 0x1DF338u;
            goto label_1df338;
        }
    }
    ctx->pc = 0x1DF178u;
    // 0x1df178: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1df178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1df17c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1df17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1df180: 0xc440d868  lwc1        $f0, -0x2798($v0)
    ctx->pc = 0x1df180u;
    { uint32_t bits = FAST_READ32(0x45D868u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df184: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1df184u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1df188: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1df188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1df18c: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x1df18cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x1df190: 0xe44091b0  swc1        $f0, -0x6E50($v0)
    ctx->pc = 0x1df190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F91B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91B0u, _value); } while (0); }
    // 0x1df194: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x1df194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1df198: 0xacb00100  sw          $s0, 0x100($a1)
    ctx->pc = 0x1df198u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x490100u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490100u, _value); } while (0);
    // 0x1df19c: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x1df19cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1a0: 0xac7291c4  sw          $s2, -0x6E3C($v1)
    ctx->pc = 0x1df1a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x3F91C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91C4u, _value); } while (0);
    // 0x1df1a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1df1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1df1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1df1ac: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1df1acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1b0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1df1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1df1b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1df1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1b8: 0xacd391c8  sw          $s3, -0x6E38($a2)
    ctx->pc = 0x1df1b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x3F91C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91C8u, _value); } while (0);
    // 0x1df1bc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1df1bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1c0: 0xc0855ae  jal         func_2156B8
    ctx->pc = 0x1DF1C0u;
    SET_GPR_U32(ctx, 31, 0x1DF1C8u);
    ctx->pc = 0x1DF1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF1C0u;
    // 0x1df1c4: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2156B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2156B8u, 0x1DF1C0u, 0x1DF1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF1C8u;
label_1df1c8:
    // 0x1df1c8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1df1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df1cc: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x1df1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x1df1d0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1df1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1df1d4: 0x24557ee0  addiu       $s5, $v0, 0x7EE0
    ctx->pc = 0x1df1d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 32480));
    // 0x1df1d8: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF1D8u;
    {
        const bool branch_taken_0x1df1d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DF1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF1D8u;
        // 0x1df1dc: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df1d8) {
            ctx->pc = 0x1DF1F0u;
            goto label_1df1f0;
        }
    }
    ctx->pc = 0x1DF1E0u;
    // 0x1df1e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF1E0u;
    {
        const bool branch_taken_0x1df1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF1E0u;
        // 0x1df1e4: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df1e0) {
            ctx->pc = 0x1DF1F4u;
            goto label_1df1f4;
        }
    }
    ctx->pc = 0x1DF1E8u;
label_1df1e8:
    // 0x1df1e8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1DF1E8u;
    {
        const bool branch_taken_0x1df1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF1E8u;
        // 0x1df1ec: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df1e8) {
            ctx->pc = 0x1DF320u;
            goto label_1df320;
        }
    }
    ctx->pc = 0x1DF1F0u;
label_1df1f0:
    // 0x1df1f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1df1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df1f4:
    // 0x1df1f4: 0x10a0004a  beqz        $a1, . + 4 + (0x4A << 2)
    ctx->pc = 0x1DF1F4u;
    {
        const bool branch_taken_0x1df1f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF1F4u;
        // 0x1df1f8: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df1f4) {
            ctx->pc = 0x1DF320u;
            goto label_1df320;
        }
    }
    ctx->pc = 0x1DF1FCu;
    // 0x1df1fc: 0x3c100010  lui         $s0, 0x10
    ctx->pc = 0x1df1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16 << 16));
    // 0x1df200: 0x24542870  addiu       $s4, $v0, 0x2870
    ctx->pc = 0x1df200u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 10352));
    // 0x1df204: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x1df204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x1df208: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1df208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x1df20c: 0x24737ee0  addiu       $s3, $v1, 0x7EE0
    ctx->pc = 0x1df20cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 32480));
    // 0x1df210: 0x24522828  addiu       $s2, $v0, 0x2828
    ctx->pc = 0x1df210u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 10280));
    // 0x1df214: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x1df214u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x1df218: 0x8ca300b8  lw          $v1, 0xB8($a1)
    ctx->pc = 0x1df218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x1df21c: 0x0  nop
    ctx->pc = 0x1df21cu;
    // NOP
label_1df220:
    // 0x1df220: 0x84620054  lh          $v0, 0x54($v1)
    ctx->pc = 0x1df220u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1df224: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1df224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1df228: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1df228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1df22c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF22Cu;
    {
        const bool branch_taken_0x1df22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF22Cu;
        // 0x1df230: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df22c) {
            ctx->pc = 0x1DF248u;
            goto label_1df248;
        }
    }
    ctx->pc = 0x1DF234u;
    // 0x1df234: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1df234u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1df238: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1df238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1df23c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1df23cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1df240: 0x5460002e  bnel        $v1, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x1DF240u;
    {
        const bool branch_taken_0x1df240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df240) {
            ctx->pc = 0x1DF244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF240u;
            // 0x1df244: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF2FCu;
            goto label_1df2fc;
        }
    }
    ctx->pc = 0x1DF248u;
label_1df248:
    // 0x1df248: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1df248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1df24c: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x1df24cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x490100u));
    // 0x1df250: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1df250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1df254: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1df254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1df258: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1DF258u;
    {
        const bool branch_taken_0x1df258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df258) {
            ctx->pc = 0x1DF25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF258u;
            // 0x1df25c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF2E4u;
            goto label_1df2e4;
        }
    }
    ctx->pc = 0x1DF260u;
    // 0x1df260: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1df260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1df264: 0x8c4391ac  lw          $v1, -0x6E54($v0)
    ctx->pc = 0x1df264u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91ACu));
    // 0x1df268: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF268u;
    {
        const bool branch_taken_0x1df268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df268) {
            ctx->pc = 0x1DF26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF268u;
            // 0x1df26c: 0x8ca200c0  lw          $v0, 0xC0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF280u;
            goto label_1df280;
        }
    }
    ctx->pc = 0x1DF270u;
    // 0x1df270: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x1df270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x1df274: 0x5050001b  beql        $v0, $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DF274u;
    {
        const bool branch_taken_0x1df274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1df274) {
            ctx->pc = 0x1DF278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF274u;
            // 0x1df278: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF2E4u;
            goto label_1df2e4;
        }
    }
    ctx->pc = 0x1DF27Cu;
    // 0x1df27c: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x1df27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
label_1df280:
    // 0x1df280: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1df280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1df284: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF284u;
    {
        const bool branch_taken_0x1df284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF284u;
        // 0x1df288: 0x8fc291c4  lw          $v0, -0x6E3C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df284) {
            ctx->pc = 0x1DF29Cu;
            goto label_1df29c;
        }
    }
    ctx->pc = 0x1DF28Cu;
    // 0x1df28c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DF28Cu;
    {
        const bool branch_taken_0x1df28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF28Cu;
        // 0x1df290: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df28c) {
            ctx->pc = 0x1DF2E4u;
            goto label_1df2e4;
        }
    }
    ctx->pc = 0x1DF294u;
label_1df294:
    // 0x1df294: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1DF294u;
    {
        const bool branch_taken_0x1df294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF294u;
        // 0x1df298: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df294) {
            ctx->pc = 0x1DF2E4u;
            goto label_1df2e4;
        }
    }
    ctx->pc = 0x1DF29Cu;
label_1df29c:
    // 0x1df29c: 0x8ee291c8  lw          $v0, -0x6E38($s7)
    ctx->pc = 0x1df29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294939080)));
    // 0x1df2a0: 0x0  nop
    ctx->pc = 0x1df2a0u;
    // NOP
    // 0x1df2a4: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DF2A4u;
    {
        const bool branch_taken_0x1df2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF2A4u;
        // 0x1df2a8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df2a4) {
            ctx->pc = 0x1DF294u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df294;
        }
    }
    ctx->pc = 0x1DF2ACu;
    // 0x1df2ac: 0x8c4391b8  lw          $v1, -0x6E48($v0)
    ctx->pc = 0x1df2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939064)));
    // 0x1df2b0: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1DF2B0u;
    {
        const bool branch_taken_0x1df2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df2b0) {
            ctx->pc = 0x1DF2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF2B0u;
            // 0x1df2b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF2E4u;
            goto label_1df2e4;
        }
    }
    ctx->pc = 0x1DF2B8u;
    // 0x1df2b8: 0x84820054  lh          $v0, 0x54($a0)
    ctx->pc = 0x1df2b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1df2bc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1df2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1df2c0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1df2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1df2c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DF2C4u;
    {
        const bool branch_taken_0x1df2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF2C4u;
        // 0x1df2c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df2c4) {
            ctx->pc = 0x1DF2E4u;
            goto label_1df2e4;
        }
    }
    ctx->pc = 0x1DF2CCu;
    // 0x1df2cc: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1df2ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1df2d0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1df2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1df2d4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1df2d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1df2d8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DF2D8u;
    {
        const bool branch_taken_0x1df2d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF2D8u;
        // 0x1df2dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df2d8) {
            ctx->pc = 0x1DF2E4u;
            goto label_1df2e4;
        }
    }
    ctx->pc = 0x1DF2E0u;
    // 0x1df2e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1df2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df2e4:
    // 0x1df2e4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF2E4u;
    {
        const bool branch_taken_0x1df2e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF2E4u;
        // 0x1df2e8: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df2e4) {
            ctx->pc = 0x1DF2FCu;
            goto label_1df2fc;
        }
    }
    ctx->pc = 0x1DF2ECu;
    // 0x1df2ec: 0xc07762c  jal         func_1DD8B0
    ctx->pc = 0x1DF2ECu;
    SET_GPR_U32(ctx, 31, 0x1DF2F4u);
    ctx->pc = 0x1DF2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF2ECu;
    // 0x1df2f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8B0u, 0x1DF2ECu, 0x1DF2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF2F4u;
label_1df2f4:
    // 0x1df2f4: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x1DF2F4u;
    {
        const bool branch_taken_0x1df2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF2F4u;
        // 0x1df2f8: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df2f4) {
            ctx->pc = 0x1DF1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df1e8;
        }
    }
    ctx->pc = 0x1DF2FCu;
label_1df2fc:
    // 0x1df2fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1df2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df300: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF300u;
    {
        const bool branch_taken_0x1df300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1DF304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF300u;
        // 0x1df304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df300) {
            ctx->pc = 0x1DF318u;
            goto label_1df318;
        }
    }
    ctx->pc = 0x1DF308u;
    // 0x1df308: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1df308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1df30c: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DF30Cu;
    {
        const bool branch_taken_0x1df30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1DF310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF30Cu;
        // 0x1df310: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df30c) {
            ctx->pc = 0x1DF318u;
            goto label_1df318;
        }
    }
    ctx->pc = 0x1DF314u;
    // 0x1df314: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1df314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1df318:
    // 0x1df318: 0x54a0ffc1  bnel        $a1, $zero, . + 4 + (-0x3F << 2)
    ctx->pc = 0x1DF318u;
    {
        const bool branch_taken_0x1df318 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df318) {
            ctx->pc = 0x1DF31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF318u;
            // 0x1df31c: 0x8ca300b8  lw          $v1, 0xB8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df220;
        }
    }
    ctx->pc = 0x1DF320u;
label_1df320:
    // 0x1df320: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1df320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df324: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF324u;
    {
        const bool branch_taken_0x1df324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF324u;
        // 0x1df328: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df324) {
            ctx->pc = 0x1DF338u;
            goto label_1df338;
        }
    }
    ctx->pc = 0x1DF32Cu;
    // 0x1df32c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1DF32Cu;
    SET_GPR_U32(ctx, 31, 0x1DF334u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1DF32Cu, 0x1DF334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF334u;
label_1df334:
    // 0x1df334: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1df334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1df338:
    // 0x1df338: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1df338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df33c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1df33cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1df340: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1df340u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1df344: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1df344u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1df348: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1df348u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1df34c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1df34cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1df350: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1df350u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1df354: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x1df354u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1df358: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x1df358u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1df35c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1df35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1df360: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF360u;
        // 0x1df364: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF368u;
}
