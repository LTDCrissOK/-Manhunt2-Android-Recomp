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

// Function: sub_00126CF0
// Address: 0x126cf0 - 0x127210
void sub_00126CF0_0x126cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126CF0_0x126cf0");
#endif

    switch (ctx->pc) {
        case 0x126d5cu: goto label_126d5c;
        case 0x126d7cu: goto label_126d7c;
        case 0x126da4u: goto label_126da4;
        case 0x126e50u: goto label_126e50;
        case 0x126e78u: goto label_126e78;
        case 0x126eacu: goto label_126eac;
        case 0x126eb8u: goto label_126eb8;
        case 0x126ed8u: goto label_126ed8;
        case 0x126f50u: goto label_126f50;
        case 0x126fbcu: goto label_126fbc;
        case 0x1270a4u: goto label_1270a4;
        case 0x127108u: goto label_127108;
        case 0x127114u: goto label_127114;
        case 0x127138u: goto label_127138;
        case 0x127140u: goto label_127140;
        default: break;
    }

    ctx->pc = 0x126cf0u;

    // 0x126cf0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x126cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x126cf4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x126cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x126cf8: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x126cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x126cfc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x126cfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x126d00: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x126d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x126d04: 0x24539a08  addiu       $s3, $v0, -0x65F8
    ctx->pc = 0x126d04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x126d08: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x126d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x126d0c: 0x24a30006  addiu       $v1, $a1, 0x6
    ctx->pc = 0x126d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x126d10: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x126d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x126d14: 0x26740108  addiu       $s4, $s3, 0x108
    ctx->pc = 0x126d14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 264));
    // 0x126d18: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x126d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x126d1c: 0x38880  sll         $s1, $v1, 2
    ctx->pc = 0x126d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x126d20: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x126d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x126d24: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x126d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x126d28: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x126d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x126d2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x126d2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d30: 0xffb70188  sd          $s7, 0x188($sp)
    ctx->pc = 0x126d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
    // 0x126d34: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x126d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d38: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x126d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x126d3c: 0xffbf0198  sd          $ra, 0x198($sp)
    ctx->pc = 0x126d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
    // 0x126d40: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x126d40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x126d44: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x126d44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x126d48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x126d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x126d4c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x126D4Cu;
    {
        const bool branch_taken_0x126d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D4Cu;
        // 0x126d50: 0xafa20134  sw          $v0, 0x134($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d4c) {
            ctx->pc = 0x126E28u;
            goto label_126e28;
        }
    }
    ctx->pc = 0x126D54u;
    // 0x126d54: 0xc049e38  jal         func_1278E0
    ctx->pc = 0x126D54u;
    SET_GPR_U32(ctx, 31, 0x126D5Cu);
    ctx->pc = 0x126D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126D54u;
    // 0x126d58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278E0u, 0x126D54u, 0x126D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126D5Cu;
label_126d5c:
    // 0x126d5c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x126d5cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d60: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x126d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
    // 0x126d64: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x126d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x126d68: 0x8c440ff4  lw          $a0, 0xFF4($v0)
    ctx->pc = 0x126d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4084)));
    // 0x126d6c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x126D6Cu;
    {
        const bool branch_taken_0x126d6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x126D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D6Cu;
        // 0x126d70: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d6c) {
            ctx->pc = 0x126D84u;
            goto label_126d84;
        }
    }
    ctx->pc = 0x126D74u;
    // 0x126d74: 0xc0619d2  jal         func_186748
    ctx->pc = 0x126D74u;
    SET_GPR_U32(ctx, 31, 0x126D7Cu);
    ctx->pc = 0x186748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186748u, 0x126D74u, 0x126D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126D7Cu;
label_126d7c:
    // 0x126d7c: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x126d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x126d80: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x126d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_126d84:
    // 0x126d84: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x126d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x126d88: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x126D88u;
    {
        const bool branch_taken_0x126d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D88u;
        // 0x126d8c: 0xafa2013c  sw          $v0, 0x13C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d88) {
            ctx->pc = 0x126E28u;
            goto label_126e28;
        }
    }
    ctx->pc = 0x126D90u;
    // 0x126d90: 0x2415080d  addiu       $s5, $zero, 0x80D
    ctx->pc = 0x126d90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x126d94: 0x16000026  bnez        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x126D94u;
    {
        const bool branch_taken_0x126d94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x126D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D94u;
        // 0x126d98: 0xafb50140  sw          $s5, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d94) {
            ctx->pc = 0x126E30u;
            goto label_126e30;
        }
    }
    ctx->pc = 0x126D9Cu;
    // 0x126d9c: 0xc0443e2  jal         func_110F88
    ctx->pc = 0x126D9Cu;
    SET_GPR_U32(ctx, 31, 0x126DA4u);
    ctx->pc = 0x126DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126D9Cu;
    // 0x126da0: 0x8fa4013c  lw          $a0, 0x13C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F88u, 0x126D9Cu, 0x126DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126DA4u;
label_126da4:
    // 0x126da4: 0x144001cf  bnez        $v0, . + 4 + (0x1CF << 2)
    ctx->pc = 0x126DA4u;
    {
        const bool branch_taken_0x126da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DA4u;
        // 0x126da8: 0x2402080d  addiu       $v0, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126da4) {
            ctx->pc = 0x1274E4u;
            return;
        }
    }
    ctx->pc = 0x126DACu;
    // 0x126dac: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x126dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x126db0: 0x8c620ff8  lw          $v0, 0xFF8($v1)
    ctx->pc = 0x126db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
    // 0x126db4: 0x504001cb  beql        $v0, $zero, . + 4 + (0x1CB << 2)
    ctx->pc = 0x126DB4u;
    {
        const bool branch_taken_0x126db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126db4) {
            ctx->pc = 0x126DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126DB4u;
            // 0x126db8: 0x2402080d  addiu       $v0, $zero, 0x80D (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1274E4u;
            return;
        }
    }
    ctx->pc = 0x126DBCu;
    // 0x126dbc: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x126dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x126dc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x126dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x126dc4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x126DC4u;
    {
        const bool branch_taken_0x126dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DC4u;
        // 0x126dc8: 0x8fa40138  lw          $a0, 0x138($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126dc4) {
            ctx->pc = 0x126E28u;
            goto label_126e28;
        }
    }
    ctx->pc = 0x126DCCu;
    // 0x126dcc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x126DCCu;
    {
        const bool branch_taken_0x126dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x126dcc) {
            ctx->pc = 0x126DF4u;
            goto label_126df4;
        }
    }
    ctx->pc = 0x126DD4u;
    // 0x126dd4: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x126DD4u;
    {
        const bool branch_taken_0x126dd4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x126DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DD4u;
        // 0x126dd8: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126dd4) {
            ctx->pc = 0x126DE4u;
            goto label_126de4;
        }
    }
    ctx->pc = 0x126DDCu;
    // 0x126ddc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x126DDCu;
    {
        const bool branch_taken_0x126ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DDCu;
        // 0x126de0: 0x2415009f  addiu       $s5, $zero, 0x9F (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ddc) {
            ctx->pc = 0x126E10u;
            goto label_126e10;
        }
    }
    ctx->pc = 0x126DE4u;
label_126de4:
    // 0x126de4: 0x2403009d  addiu       $v1, $zero, 0x9D
    ctx->pc = 0x126de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x126de8: 0x2415009b  addiu       $s5, $zero, 0x9B
    ctx->pc = 0x126de8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x126dec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x126DECu;
    {
        const bool branch_taken_0x126dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DECu;
        // 0x126df0: 0xafa30140  sw          $v1, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126dec) {
            ctx->pc = 0x126E14u;
            goto label_126e14;
        }
    }
    ctx->pc = 0x126DF4u;
label_126df4:
    // 0x126df4: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x126DF4u;
    {
        const bool branch_taken_0x126df4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x126DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DF4u;
        // 0x126df8: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126df4) {
            ctx->pc = 0x126E08u;
            goto label_126e08;
        }
    }
    ctx->pc = 0x126DFCu;
    // 0x126dfc: 0x241500ae  addiu       $s5, $zero, 0xAE
    ctx->pc = 0x126dfcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x126e00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x126E00u;
    {
        const bool branch_taken_0x126e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E00u;
        // 0x126e04: 0xafa40140  sw          $a0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e00) {
            ctx->pc = 0x126E14u;
            goto label_126e14;
        }
    }
    ctx->pc = 0x126E08u;
label_126e08:
    // 0x126e08: 0x240200a5  addiu       $v0, $zero, 0xA5
    ctx->pc = 0x126e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    // 0x126e0c: 0x241500a2  addiu       $s5, $zero, 0xA2
    ctx->pc = 0x126e0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
label_126e10:
    // 0x126e10: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x126e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_126e14:
    // 0x126e14: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x126e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x126e18: 0x12a301b1  beq         $s5, $v1, . + 4 + (0x1B1 << 2)
    ctx->pc = 0x126E18u;
    {
        const bool branch_taken_0x126e18 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        ctx->pc = 0x126E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E18u;
        // 0x126e1c: 0x8fa40140  lw          $a0, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e18) {
            ctx->pc = 0x1274E0u;
            return;
        }
    }
    ctx->pc = 0x126E20u;
    // 0x126e20: 0x100001a7  b           . + 4 + (0x1A7 << 2)
    ctx->pc = 0x126E20u;
    {
        const bool branch_taken_0x126e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E20u;
        // 0x126e24: 0x958023  subu        $s0, $a0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e20) {
            ctx->pc = 0x1274C0u;
            return;
        }
    }
    ctx->pc = 0x126E28u;
label_126e28:
    // 0x126e28: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x126E28u;
    {
        const bool branch_taken_0x126e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E28u;
        // 0x126e2c: 0x2402080d  addiu       $v0, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e28) {
            ctx->pc = 0x1274E4u;
            return;
        }
    }
    ctx->pc = 0x126E30u;
label_126e30:
    // 0x126e30: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x126e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x126e34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x126e34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e38: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x126e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x126e3c: 0x16020071  bne         $s0, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x126E3Cu;
    {
        const bool branch_taken_0x126e3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x126E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E3Cu;
        // 0x126e40: 0xafa30148  sw          $v1, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e3c) {
            ctx->pc = 0x127004u;
            goto label_127004;
        }
    }
    ctx->pc = 0x126E44u;
    // 0x126e44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e48: 0xc049498  jal         func_125260
    ctx->pc = 0x126E48u;
    SET_GPR_U32(ctx, 31, 0x126E50u);
    ctx->pc = 0x126E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126E48u;
    // 0x126e4c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125260u, 0x126E48u, 0x126E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126E50u;
label_126e50:
    // 0x126e50: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x126e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x126e54: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x126e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x126e58: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x126e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x126e5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x126e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x126e60: 0x24560070  addiu       $s6, $v0, 0x70
    ctx->pc = 0x126e60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x126e64: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x126e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x126e68: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x126E68u;
    {
        const bool branch_taken_0x126e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E68u;
        // 0x126e6c: 0x220f02d  daddu       $fp, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e68) {
            ctx->pc = 0x127004u;
            goto label_127004;
        }
    }
    ctx->pc = 0x126E70u;
    // 0x126e70: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x126e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x126e74: 0x0  nop
    ctx->pc = 0x126e74u;
    // NOP
label_126e78:
    // 0x126e78: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x126e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x126e7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x126e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x126e80: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x126e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x126e84: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x126e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x126e88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x126e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x126e8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x126e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x126e90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x126e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x126e94: 0x10800054  beqz        $a0, . + 4 + (0x54 << 2)
    ctx->pc = 0x126E94u;
    {
        const bool branch_taken_0x126e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x126e94) {
            ctx->pc = 0x126FE8u;
            goto label_126fe8;
        }
    }
    ctx->pc = 0x126E9Cu;
    // 0x126e9c: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x126e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x126ea0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x126ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x126ea4: 0xc089ee6  jal         func_227B98
    ctx->pc = 0x126EA4u;
    SET_GPR_U32(ctx, 31, 0x126EACu);
    ctx->pc = 0x126EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126EA4u;
    // 0x126ea8: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B98u, 0x126EA4u, 0x126EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126EACu;
label_126eac:
    // 0x126eac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x126eacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126eb0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x126EB0u;
    SET_GPR_U32(ctx, 31, 0x126EB8u);
    ctx->pc = 0x126EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126EB0u;
    // 0x126eb4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x126EB0u, 0x126EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126EB8u;
label_126eb8:
    // 0x126eb8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x126eb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x126ebc: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x126ebcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x126ec0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x126ec0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x126ec4: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x126ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x126ec8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x126ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ecc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x126eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x126ed0: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x126ED0u;
    SET_GPR_U32(ctx, 31, 0x126ED8u);
    ctx->pc = 0x126ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126ED0u;
    // 0x126ed4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x126ED0u, 0x126ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126ED8u;
label_126ed8:
    // 0x126ed8: 0x27b30090  addiu       $s3, $sp, 0x90
    ctx->pc = 0x126ed8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x126edc: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x126edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x126ee0: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x126ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x126ee4: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x126ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x126ee8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x126ee8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x126eec: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x126eecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x126ef0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x126ef0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x126ef4: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x126ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
    // 0x126ef8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x126ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x126efc: 0x0  nop
    ctx->pc = 0x126efcu;
    // NOP
    // 0x126f00: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x126f00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126f04: 0x0  nop
    ctx->pc = 0x126f04u;
    // NOP
    // 0x126f08: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x126F08u;
    {
        const bool branch_taken_0x126f08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x126F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F08u;
        // 0x126f0c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f08) {
            ctx->pc = 0x126F14u;
            goto label_126f14;
        }
    }
    ctx->pc = 0x126F10u;
    // 0x126f10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x126f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126f14:
    // 0x126f14: 0x1620003b  bnez        $s1, . + 4 + (0x3B << 2)
    ctx->pc = 0x126F14u;
    {
        const bool branch_taken_0x126f14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x126F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F14u;
        // 0x126f18: 0x27b40080  addiu       $s4, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f14) {
            ctx->pc = 0x127004u;
            goto label_127004;
        }
    }
    ctx->pc = 0x126F1Cu;
    // 0x126f1c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x126f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x126f20: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x126f20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x126f24: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x126f24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x126f28: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x126f28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x126f2c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x126f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x126f30: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x126f30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x126f34: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x126f34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x126f38: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x126f38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x126f3c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x126f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x126f40: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x126f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x126f44: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x126f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f48: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x126F48u;
    SET_GPR_U32(ctx, 31, 0x126F50u);
    ctx->pc = 0x126F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126F48u;
    // 0x126f4c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x126F48u, 0x126F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126F50u;
label_126f50:
    // 0x126f50: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x126f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x126f54: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x126f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x126f58: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x126f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x126f5c: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x126f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x126f60: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x126f60u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x126f64: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x126f64u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x126f68: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x126f68u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x126f6c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x126f6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126f70: 0x0  nop
    ctx->pc = 0x126f70u;
    // NOP
    // 0x126f74: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x126F74u;
    {
        const bool branch_taken_0x126f74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x126F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F74u;
        // 0x126f78: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f74) {
            ctx->pc = 0x126F80u;
            goto label_126f80;
        }
    }
    ctx->pc = 0x126F7Cu;
    // 0x126f7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x126f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126f80:
    // 0x126f80: 0x16200021  bnez        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x126F80u;
    {
        const bool branch_taken_0x126f80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x126F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F80u;
        // 0x126f84: 0x8fa30148  lw          $v1, 0x148($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f80) {
            ctx->pc = 0x127008u;
            goto label_127008;
        }
    }
    ctx->pc = 0x126F88u;
    // 0x126f88: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x126f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x126f8c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x126f8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x126f90: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x126f90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x126f94: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x126f94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x126f98: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x126f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x126f9c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x126f9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x126fa0: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x126fa0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x126fa4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x126fa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x126fa8: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x126fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x126fac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x126facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fb4: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x126FB4u;
    SET_GPR_U32(ctx, 31, 0x126FBCu);
    ctx->pc = 0x126FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126FB4u;
    // 0x126fb8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x126FB4u, 0x126FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126FBCu;
label_126fbc:
    // 0x126fbc: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x126fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x126fc0: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x126fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x126fc4: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x126fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x126fc8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x126fc8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x126fcc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x126fccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x126fd0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x126fd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x126fd4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x126fd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126fd8: 0x0  nop
    ctx->pc = 0x126fd8u;
    // NOP
    // 0x126fdc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x126FDCu;
    {
        const bool branch_taken_0x126fdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x126FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126FDCu;
        // 0x126fe0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126fdc) {
            ctx->pc = 0x126FE8u;
            goto label_126fe8;
        }
    }
    ctx->pc = 0x126FE4u;
    // 0x126fe4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x126fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126fe8:
    // 0x126fe8: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x126FE8u;
    {
        const bool branch_taken_0x126fe8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x126FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126FE8u;
        // 0x126fec: 0x27c20001  addiu       $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126fe8) {
            ctx->pc = 0x127004u;
            goto label_127004;
        }
    }
    ctx->pc = 0x126FF0u;
    // 0x126ff0: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x126ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x126ff4: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x126ff4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x126ff8: 0x3c4182b  sltu        $v1, $fp, $a0
    ctx->pc = 0x126ff8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x126ffc: 0x1460ff9e  bnez        $v1, . + 4 + (-0x62 << 2)
    ctx->pc = 0x126FFCu;
    {
        const bool branch_taken_0x126ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x127000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126FFCu;
        // 0x127000: 0x1e1080  sll         $v0, $fp, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ffc) {
            ctx->pc = 0x126E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126e78;
        }
    }
    ctx->pc = 0x127004u;
label_127004:
    // 0x127004: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x127004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_127008:
    // 0x127008: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x127008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x12700c: 0x10400129  beqz        $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x12700Cu;
    {
        const bool branch_taken_0x12700c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12700Cu;
        // 0x127010: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12700c) {
            ctx->pc = 0x1274B4u;
            return;
        }
    }
    ctx->pc = 0x127014u;
    // 0x127014: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x127014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x127018: 0x2442cde0  addiu       $v0, $v0, -0x3220
    ctx->pc = 0x127018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954464));
    // 0x12701c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12701cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x127020: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x127020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127024: 0x800008  jr          $a0
    ctx->pc = 0x127024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12702Cu: goto label_12702c;
            case 0x12704Cu: goto label_12704c;
            case 0x127058u: goto label_127058;
            case 0x127078u: goto label_127078;
            case 0x12709Cu: goto label_12709c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127024u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12702Cu;
label_12702c:
    // 0x12702c: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12702Cu;
    {
        const bool branch_taken_0x12702c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x127030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12702Cu;
        // 0x127030: 0x240400a1  addiu       $a0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12702c) {
            ctx->pc = 0x12703Cu;
            goto label_12703c;
        }
    }
    ctx->pc = 0x127034u;
    // 0x127034: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x127034u;
    {
        const bool branch_taken_0x127034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127034u;
        // 0x127038: 0x2415009f  addiu       $s5, $zero, 0x9F (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127034) {
            ctx->pc = 0x1274B0u;
            return;
        }
    }
    ctx->pc = 0x12703Cu;
label_12703c:
    // 0x12703c: 0x2402009d  addiu       $v0, $zero, 0x9D
    ctx->pc = 0x12703cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x127040: 0x2415009b  addiu       $s5, $zero, 0x9B
    ctx->pc = 0x127040u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x127044: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x127044u;
    {
        const bool branch_taken_0x127044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127044u;
        // 0x127048: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127044) {
            ctx->pc = 0x1274B4u;
            return;
        }
    }
    ctx->pc = 0x12704Cu;
label_12704c:
    // 0x12704c: 0x2415006f  addiu       $s5, $zero, 0x6F
    ctx->pc = 0x12704cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x127050: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x127050u;
    {
        const bool branch_taken_0x127050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127050u;
        // 0x127054: 0xafb50140  sw          $s5, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127050) {
            ctx->pc = 0x1274B4u;
            return;
        }
    }
    ctx->pc = 0x127058u;
label_127058:
    // 0x127058: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x127058u;
    {
        const bool branch_taken_0x127058 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127058u;
        // 0x12705c: 0x2403007e  addiu       $v1, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127058) {
            ctx->pc = 0x12706Cu;
            goto label_12706c;
        }
    }
    ctx->pc = 0x127060u;
    // 0x127060: 0x2415007d  addiu       $s5, $zero, 0x7D
    ctx->pc = 0x127060u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x127064: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x127064u;
    {
        const bool branch_taken_0x127064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127064u;
        // 0x127068: 0xafa30140  sw          $v1, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127064) {
            ctx->pc = 0x1274B4u;
            return;
        }
    }
    ctx->pc = 0x12706Cu;
label_12706c:
    // 0x12706c: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x12706cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x127070: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x127070u;
    {
        const bool branch_taken_0x127070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127070u;
        // 0x127074: 0x2415007a  addiu       $s5, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127070) {
            ctx->pc = 0x1274B0u;
            return;
        }
    }
    ctx->pc = 0x127078u;
label_127078:
    // 0x127078: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x127078u;
    {
        const bool branch_taken_0x127078 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127078u;
        // 0x12707c: 0x24020079  addiu       $v0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127078) {
            ctx->pc = 0x12708Cu;
            goto label_12708c;
        }
    }
    ctx->pc = 0x127080u;
    // 0x127080: 0x24150078  addiu       $s5, $zero, 0x78
    ctx->pc = 0x127080u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x127084: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x127084u;
    {
        const bool branch_taken_0x127084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127084u;
        // 0x127088: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127084) {
            ctx->pc = 0x1274B4u;
            return;
        }
    }
    ctx->pc = 0x12708Cu;
label_12708c:
    // 0x12708c: 0x24030077  addiu       $v1, $zero, 0x77
    ctx->pc = 0x12708cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x127090: 0x24150076  addiu       $s5, $zero, 0x76
    ctx->pc = 0x127090u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x127094: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x127094u;
    {
        const bool branch_taken_0x127094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127094u;
        // 0x127098: 0xafa30140  sw          $v1, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127094) {
            ctx->pc = 0x1274B4u;
            return;
        }
    }
    ctx->pc = 0x12709Cu;
label_12709c:
    // 0x12709c: 0xc045486  jal         func_115218
    ctx->pc = 0x12709Cu;
    SET_GPR_U32(ctx, 31, 0x1270A4u);
    ctx->pc = 0x1270A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12709Cu;
    // 0x1270a0: 0x8fa4013c  lw          $a0, 0x13C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115218u, 0x12709Cu, 0x1270A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1270A4u;
label_1270a4:
    // 0x1270a4: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x1270a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x1270a8: 0x8c8302b0  lw          $v1, 0x2B0($a0)
    ctx->pc = 0x1270a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 688)));
    // 0x1270ac: 0x2404080d  addiu       $a0, $zero, 0x80D
    ctx->pc = 0x1270acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x1270b0: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1270B0u;
    {
        const bool branch_taken_0x1270b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1270b0) {
            ctx->pc = 0x1270CCu;
            goto label_1270cc;
        }
    }
    ctx->pc = 0x1270B8u;
    // 0x1270b8: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x1270b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x1270bc: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1270bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270c0: 0xac4402b0  sw          $a0, 0x2B0($v0)
    ctx->pc = 0x1270c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 4));
    // 0x1270c4: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x1270C4u;
    {
        const bool branch_taken_0x1270c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1270C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1270C4u;
        // 0x1270c8: 0xafb50140  sw          $s5, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1270c4) {
            ctx->pc = 0x1274B4u;
            return;
        }
    }
    ctx->pc = 0x1270CCu;
label_1270cc:
    // 0x1270cc: 0x104000db  beqz        $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x1270CCu;
    {
        const bool branch_taken_0x1270cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1270D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1270CCu;
        // 0x1270d0: 0x8fa30134  lw          $v1, 0x134($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1270cc) {
            ctx->pc = 0x12743Cu;
            return;
        }
    }
    ctx->pc = 0x1270D4u;
    // 0x1270d4: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1270d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1270d8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1270d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1270dc: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x1270dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x1270e0: 0x144000f5  bnez        $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x1270E0u;
    {
        const bool branch_taken_0x1270e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1270E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1270E0u;
        // 0x1270e4: 0x8fa20140  lw          $v0, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1270e0) {
            ctx->pc = 0x1274B8u;
            return;
        }
    }
    ctx->pc = 0x1270E8u;
    // 0x1270e8: 0xc4740374  lwc1        $f20, 0x374($v1)
    ctx->pc = 0x1270e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1270ec: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1270ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1270f0: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x1270f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x1270f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1270f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1270f8: 0x0  nop
    ctx->pc = 0x1270f8u;
    // NOP
    // 0x1270fc: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1270fcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x127100: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x127100u;
    SET_GPR_U32(ctx, 31, 0x127108u);
    ctx->pc = 0x127104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127100u;
    // 0x127104: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x127100u, 0x127108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127108u;
label_127108:
    // 0x127108: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x127108u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x12710c: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x12710Cu;
    SET_GPR_U32(ctx, 31, 0x127114u);
    ctx->pc = 0x127110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12710Cu;
    // 0x127110: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x12710Cu, 0x127114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127114u;
label_127114:
    // 0x127114: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x127114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x127118: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x127118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12711c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12711cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x127120: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x127120u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x127124: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x127124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x127128: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x127128u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x12712c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x12712cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x127130: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x127130u;
    SET_GPR_U32(ctx, 31, 0x127138u);
    ctx->pc = 0x127134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127130u;
    // 0x127134: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x127130u, 0x127138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127138u;
label_127138:
    // 0x127138: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x127138u;
    SET_GPR_U32(ctx, 31, 0x127140u);
    ctx->pc = 0x12713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127138u;
    // 0x12713c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x127138u, 0x127140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127140u;
label_127140:
    // 0x127140: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x127140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x127144: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x127144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x127148: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x127148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x12714c: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x12714cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x127150: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x127150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x127154: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x127154u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x127158: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x127158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x12715c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x12715cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x127160: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x127160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x127164: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x127164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x127168: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x127168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x12716c: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x12716cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x127170: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x127170u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127174: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x127174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x127178: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x127178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12717c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x12717cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x127180: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x127180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x127184: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x127184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x127188: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x127188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x12718c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x12718cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127190: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x127190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x127194: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x127194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x127198: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x127198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12719c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x12719cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1271a0: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x1271a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1271a4: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x1271a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x1271a8: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x1271a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x1271ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1271acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1271b0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1271b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1271b4: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x1271b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1271b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1271b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1271bc: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x1271bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x1271c0: 0xe4860004  swc1        $f6, 0x4($a0)
    ctx->pc = 0x1271c0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1271c4: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1271c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1271c8: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x1271c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x1271cc: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x1271ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x1271d0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1271d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1271d4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1271d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1271d8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1271d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1271dc: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1271dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1271e0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1271e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1271e4: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x1271e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1271e8: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1271e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1271ec: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x1271ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1271f0: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x1271f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1271f4: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x1271f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1271f8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1271f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1271fc: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1271fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x127200: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x127200u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x127204: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x127204u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x127208: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x127208u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12720c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x12720cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->pc = 0x127210u;
}
