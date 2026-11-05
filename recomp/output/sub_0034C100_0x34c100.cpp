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

// Function: sub_0034C100
// Address: 0x34c100 - 0x34d470
void sub_0034C100_0x34c100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034C100_0x34c100");
#endif

    switch (ctx->pc) {
        case 0x34c1a4u: goto label_34c1a4;
        case 0x34c1c0u: goto label_34c1c0;
        case 0x34c200u: goto label_34c200;
        case 0x34c214u: goto label_34c214;
        case 0x34c30cu: goto label_34c30c;
        case 0x34c318u: goto label_34c318;
        case 0x34c344u: goto label_34c344;
        case 0x34c35cu: goto label_34c35c;
        case 0x34c370u: goto label_34c370;
        case 0x34c520u: goto label_34c520;
        case 0x34c528u: goto label_34c528;
        case 0x34c5c4u: goto label_34c5c4;
        case 0x34c624u: goto label_34c624;
        case 0x34c6b0u: goto label_34c6b0;
        case 0x34c6dcu: goto label_34c6dc;
        case 0x34c720u: goto label_34c720;
        case 0x34c834u: goto label_34c834;
        case 0x34c83cu: goto label_34c83c;
        case 0x34c8d8u: goto label_34c8d8;
        case 0x34c934u: goto label_34c934;
        case 0x34c958u: goto label_34c958;
        case 0x34c970u: goto label_34c970;
        case 0x34ca00u: goto label_34ca00;
        case 0x34cb88u: goto label_34cb88;
        case 0x34cba4u: goto label_34cba4;
        case 0x34cbc8u: goto label_34cbc8;
        case 0x34cbf4u: goto label_34cbf4;
        case 0x34cc04u: goto label_34cc04;
        case 0x34cc18u: goto label_34cc18;
        case 0x34cc38u: goto label_34cc38;
        case 0x34cc98u: goto label_34cc98;
        case 0x34cd14u: goto label_34cd14;
        case 0x34cd1cu: goto label_34cd1c;
        case 0x34cd30u: goto label_34cd30;
        case 0x34cd38u: goto label_34cd38;
        case 0x34cd40u: goto label_34cd40;
        case 0x34cd4cu: goto label_34cd4c;
        case 0x34cd5cu: goto label_34cd5c;
        case 0x34cfc0u: goto label_34cfc0;
        case 0x34d01cu: goto label_34d01c;
        case 0x34d024u: goto label_34d024;
        case 0x34d038u: goto label_34d038;
        case 0x34d0e4u: goto label_34d0e4;
        case 0x34d0f8u: goto label_34d0f8;
        case 0x34d108u: goto label_34d108;
        case 0x34d110u: goto label_34d110;
        case 0x34d420u: goto label_34d420;
        default: break;
    }

    ctx->pc = 0x34c100u;

    // 0x34c100: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x34c100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x34c104: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x34c104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x34c108: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x34c108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x34c10c: 0xffb70168  sd          $s7, 0x168($sp)
    ctx->pc = 0x34c10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 23));
    // 0x34c110: 0xc4412be4  lwc1        $f1, 0x2BE4($v0)
    ctx->pc = 0x34c110u;
    { uint32_t bits = FAST_READ32(0x482BE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c114: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x34c114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
    // 0x34c118: 0xffb10138  sd          $s1, 0x138($sp)
    ctx->pc = 0x34c118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 17));
    // 0x34c11c: 0xffb20140  sd          $s2, 0x140($sp)
    ctx->pc = 0x34c11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
    // 0x34c120: 0xffb30148  sd          $s3, 0x148($sp)
    ctx->pc = 0x34c120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 19));
    // 0x34c124: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x34c124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x34c128: 0xffb50158  sd          $s5, 0x158($sp)
    ctx->pc = 0x34c128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 21));
    // 0x34c12c: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x34c12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x34c130: 0xffbe0170  sd          $fp, 0x170($sp)
    ctx->pc = 0x34c130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 30));
    // 0x34c134: 0xffbf0178  sd          $ra, 0x178($sp)
    ctx->pc = 0x34c134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 31));
    // 0x34c138: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x34c138u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x34c13c: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x34c13cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x34c140: 0x8c64bd48  lw          $a0, -0x42B8($v1)
    ctx->pc = 0x34c140u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x34c144: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x34c144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x34c148: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x34c148u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x34c14c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34c14cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c150: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x34c150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x34c154: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34c154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c158: 0x0  nop
    ctx->pc = 0x34c158u;
    // NOP
    // 0x34c15c: 0x450002bc  bc1f        . + 4 + (0x2BC << 2)
    ctx->pc = 0x34C15Cu;
    {
        const bool branch_taken_0x34c15c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C15Cu;
        // 0x34c160: 0x24570070  addiu       $s7, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c15c) {
            ctx->pc = 0x34CC50u;
            goto label_34cc50;
        }
    }
    ctx->pc = 0x34C164u;
    // 0x34c164: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x34c164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x34c168: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x34c168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x34c16c: 0x8c622cec  lw          $v0, 0x2CEC($v1)
    ctx->pc = 0x34c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482CECu));
    // 0x34c170: 0x8c832cf0  lw          $v1, 0x2CF0($a0)
    ctx->pc = 0x34c170u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482CF0u));
    // 0x34c174: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x34c174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x34c178: 0x104002b5  beqz        $v0, . + 4 + (0x2B5 << 2)
    ctx->pc = 0x34C178u;
    {
        const bool branch_taken_0x34c178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C178u;
        // 0x34c17c: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c178) {
            ctx->pc = 0x34CC50u;
            goto label_34cc50;
        }
    }
    ctx->pc = 0x34C180u;
    // 0x34c180: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x34c180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x34c184: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x34c184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34c188: 0x8c442b44  lw          $a0, 0x2B44($v0)
    ctx->pc = 0x34c188u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482B44u));
    // 0x34c18c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x34c18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34c190: 0x14430158  bne         $v0, $v1, . + 4 + (0x158 << 2)
    ctx->pc = 0x34C190u;
    {
        const bool branch_taken_0x34c190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x34C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C190u;
        // 0x34c194: 0x3083007f  andi        $v1, $a0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c190) {
            ctx->pc = 0x34C6F4u;
            goto label_34c6f4;
        }
    }
    ctx->pc = 0x34C198u;
    // 0x34c198: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34c198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c19c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34C19Cu;
    SET_GPR_U32(ctx, 31, 0x34C1A4u);
    ctx->pc = 0x34C1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C19Cu;
    // 0x34c1a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34C19Cu, 0x34C1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C1A4u;
label_34c1a4:
    // 0x34c1a4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x34c1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x34c1a8: 0x8c83c60c  lw          $v1, -0x39F4($a0)
    ctx->pc = 0x34c1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FC60Cu));
    // 0x34c1ac: 0x90620045  lbu         $v0, 0x45($v1)
    ctx->pc = 0x34c1acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 69)));
    // 0x34c1b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34C1B0u;
    {
        const bool branch_taken_0x34c1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C1B0u;
        // 0x34c1b4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c1b0) {
            ctx->pc = 0x34C1D8u;
            goto label_34c1d8;
        }
    }
    ctx->pc = 0x34C1B8u;
    // 0x34c1b8: 0x24430045  addiu       $v1, $v0, 0x45
    ctx->pc = 0x34c1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 69));
    // 0x34c1bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x34c1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_34c1c0:
    // 0x34c1c0: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x34c1c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x34c1c4: 0x104002a2  beqz        $v0, . + 4 + (0x2A2 << 2)
    ctx->pc = 0x34C1C4u;
    {
        const bool branch_taken_0x34c1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C1C4u;
        // 0x34c1c8: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c1c4) {
            ctx->pc = 0x34CC50u;
            goto label_34cc50;
        }
    }
    ctx->pc = 0x34C1CCu;
    // 0x34c1cc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x34c1ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34c1d0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x34C1D0u;
    {
        const bool branch_taken_0x34c1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c1d0) {
            ctx->pc = 0x34C1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C1D0u;
            // 0x34c1d4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34c1c0;
        }
    }
    ctx->pc = 0x34C1D8u;
label_34c1d8:
    // 0x34c1d8: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x34c1d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x34c1dc: 0x1040029c  beqz        $v0, . + 4 + (0x29C << 2)
    ctx->pc = 0x34C1DCu;
    {
        const bool branch_taken_0x34c1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C1DCu;
        // 0x34c1e0: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c1dc) {
            ctx->pc = 0x34CC50u;
            goto label_34cc50;
        }
    }
    ctx->pc = 0x34C1E4u;
    // 0x34c1e4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x34c1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x34c1e8: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x34c1e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34c1ec: 0x8ca3c60c  lw          $v1, -0x39F4($a1)
    ctx->pc = 0x34c1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294952460)));
    // 0x34c1f0: 0x3c0141d8  lui         $at, 0x41D8
    ctx->pc = 0x34c1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16856 << 16));
    // 0x34c1f4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x34c1f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x34c1f8: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34C1F8u;
    SET_GPR_U32(ctx, 31, 0x34C200u);
    ctx->pc = 0x34C1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C1F8u;
    // 0x34c1fc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34C1F8u, 0x34C200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C200u;
label_34c200:
    // 0x34c200: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34c200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34c204: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x34C204u;
    {
        const bool branch_taken_0x34c204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C204u;
        // 0x34c208: 0x3c060040  lui         $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c204) {
            ctx->pc = 0x34C264u;
            goto label_34c264;
        }
    }
    ctx->pc = 0x34C20Cu;
    // 0x34c20c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34C20Cu;
    SET_GPR_U32(ctx, 31, 0x34C214u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34C20Cu, 0x34C214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C214u;
label_34c214:
    // 0x34c214: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34c214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34c218: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34C218u;
    {
        const bool branch_taken_0x34c218 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x34C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C218u;
        // 0x34c21c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c218) {
            ctx->pc = 0x34C234u;
            goto label_34c234;
        }
    }
    ctx->pc = 0x34C220u;
    // 0x34c220: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x34c220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34c224: 0x0  nop
    ctx->pc = 0x34c224u;
    // NOP
    // 0x34c228: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x34c228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x34c22c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34C22Cu;
    {
        const bool branch_taken_0x34c22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c22c) {
            ctx->pc = 0x34C24Cu;
            goto label_34c24c;
        }
    }
    ctx->pc = 0x34C234u;
label_34c234:
    // 0x34c234: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x34c234u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x34c238: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34c238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34c23c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34c23cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34c240: 0x0  nop
    ctx->pc = 0x34c240u;
    // NOP
    // 0x34c244: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x34c244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x34c248: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x34c248u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_34c24c:
    // 0x34c24c: 0x3c013cc8  lui         $at, 0x3CC8
    ctx->pc = 0x34c24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15560 << 16));
    // 0x34c250: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x34c250u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x34c254: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34c254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c258: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x34c258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34c25c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x34C25Cu;
    {
        const bool branch_taken_0x34c25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C25Cu;
        // 0x34c260: 0x46006502  mul.s       $f20, $f12, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c25c) {
            ctx->pc = 0x34C33Cu;
            goto label_34c33c;
        }
    }
    ctx->pc = 0x34C264u;
label_34c264:
    // 0x34c264: 0x8cc2bd48  lw          $v0, -0x42B8($a2)
    ctx->pc = 0x34c264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294950216)));
    // 0x34c268: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x34c268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x34c26c: 0xc4620060  lwc1        $f2, 0x60($v1)
    ctx->pc = 0x34c26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34c270: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x34c270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x34c274: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x34c274u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x34c278: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x34c278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c27c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x34c27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x34c280: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x34c280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c284: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x34c284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x34c288: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x34c288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c28c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x34c28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x34c290: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x34c290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x34c294: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x34c294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c298: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x34c298u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c29c: 0x0  nop
    ctx->pc = 0x34c29cu;
    // NOP
    // 0x34c2a0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x34C2A0u;
    {
        const bool branch_taken_0x34c2a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C2A0u;
        // 0x34c2a4: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c2a0) {
            ctx->pc = 0x34C2BCu;
            goto label_34c2bc;
        }
    }
    ctx->pc = 0x34C2A8u;
    // 0x34c2a8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x34c2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x34c2ac: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x34c2acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x34c2b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34c2b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c2b4: 0x0  nop
    ctx->pc = 0x34c2b4u;
    // NOP
    // 0x34c2b8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x34c2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_34c2bc:
    // 0x34c2bc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34c2bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34c2c0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x34c2c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c2c4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x34c2c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c2c8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x34c2c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c2cc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x34c2ccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x34c2d0: 0x4a0003bf  vwaitq
    ctx->pc = 0x34c2d0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x34c2d4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x34c2d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34c2d8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x34c2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34c2dc: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x34c2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34c2e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34c2e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c2e4: 0x46016032  c.eq.s      $f12, $f1
    ctx->pc = 0x34c2e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c2e8: 0x0  nop
    ctx->pc = 0x34c2e8u;
    // NOP
    // 0x34c2ec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x34C2ECu;
    {
        const bool branch_taken_0x34c2ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C2ECu;
        // 0x34c2f0: 0xc7ad0018  lwc1        $f13, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c2ec) {
            ctx->pc = 0x34C304u;
            goto label_34c304;
        }
    }
    ctx->pc = 0x34C2F4u;
    // 0x34c2f4: 0x46016832  c.eq.s      $f13, $f1
    ctx->pc = 0x34c2f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c2f8: 0x0  nop
    ctx->pc = 0x34c2f8u;
    // NOP
    // 0x34c2fc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x34C2FCu;
    {
        const bool branch_taken_0x34c2fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C2FCu;
        // 0x34c300: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c2fc) {
            ctx->pc = 0x34C310u;
            goto label_34c310;
        }
    }
    ctx->pc = 0x34C304u;
label_34c304:
    // 0x34c304: 0xc0e404c  jal         func_390130
    ctx->pc = 0x34C304u;
    SET_GPR_U32(ctx, 31, 0x34C30Cu);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x34C304u, 0x34C30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C30Cu;
label_34c30c:
    // 0x34c30c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x34c30cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_34c310:
    // 0x34c310: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34C310u;
    SET_GPR_U32(ctx, 31, 0x34C318u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34C310u, 0x34C318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C318u;
label_34c318:
    // 0x34c318: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34c318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34c31c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x34c31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x34c320: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34c320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34c324: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x34c324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x34c328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34c328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c32c: 0x0  nop
    ctx->pc = 0x34c32cu;
    // NOP
    // 0x34c330: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34c330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34c334: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34c334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34c338: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x34c338u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_34c33c:
    // 0x34c33c: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x34C33Cu;
    SET_GPR_U32(ctx, 31, 0x34C344u);
    ctx->pc = 0x34C340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C33Cu;
    // 0x34c340: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x34C33Cu, 0x34C344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C344u;
label_34c344:
    // 0x34c344: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x34c344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x34c348: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x34c348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c34c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x34c34cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x34c350: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34c350u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34c354: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x34C354u;
    SET_GPR_U32(ctx, 31, 0x34C35Cu);
    ctx->pc = 0x34C358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C354u;
    // 0x34c358: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x34C354u, 0x34C35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C35Cu;
label_34c35c:
    // 0x34c35c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x34c35cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x34c360: 0xc6e10008  lwc1        $f1, 0x8($s7)
    ctx->pc = 0x34c360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c364: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34c364u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34c368: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x34C368u;
    SET_GPR_U32(ctx, 31, 0x34C370u);
    ctx->pc = 0x34C36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C368u;
    // 0x34c36c: 0xe6210008  swc1        $f1, 0x8($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x34C368u, 0x34C370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C370u;
label_34c370:
    // 0x34c370: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x34c370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x34c374: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x34c374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x34c378: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x34c378u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x34c37c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x34c37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c380: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x34c380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34c384: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x34c384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x34c388: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34c388u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34c38c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x34c38cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x34c390: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x34c390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34c394: 0x8ce3bd48  lw          $v1, -0x42B8($a3)
    ctx->pc = 0x34c394u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x34c398: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x34c398u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x34c39c: 0xc6e00004  lwc1        $f0, 0x4($s7)
    ctx->pc = 0x34c39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c3a0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x34c3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x34c3a4: 0xc6e10008  lwc1        $f1, 0x8($s7)
    ctx->pc = 0x34c3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c3a8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x34c3a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x34c3ac: 0xc6e0000c  lwc1        $f0, 0xC($s7)
    ctx->pc = 0x34c3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c3b0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x34c3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x34c3b4: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x34c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x34c3b8: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x34c3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c3bc: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x34c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x34c3c0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x34c3c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x34c3c4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x34c3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c3c8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x34c3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x34c3cc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x34c3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c3d0: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x34c3d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x34c3d4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x34c3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c3d8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x34c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x34c3dc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x34c3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x34c3e0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x34c3e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34c3e4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x34c3e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c3e8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x34c3e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c3ec: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x34c3ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c3f0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x34c3f0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x34c3f4: 0x4a0003bf  vwaitq
    ctx->pc = 0x34c3f4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x34c3f8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x34c3f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34c3fc: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x34c3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34c400: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x34c400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c404: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x34c404u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34c408: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x34c408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34c40c: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x34c40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34c410: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x34c410u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x34c414: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x34c414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c418: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x34c418u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x34c41c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x34c41cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x34c420: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x34c420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x34c424: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x34c424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x34c428: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x34c428u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x34c42c: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x34c42cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x34c430: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x34c430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x34c434: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x34c434u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34c438: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x34c438u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34c43c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34c43cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34c440: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x34c440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34c444: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x34c444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c448: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x34c448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34c44c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x34c44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x34c450: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x34c450u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34c454: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x34c454u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34c458: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34c458u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34c45c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x34c45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34c460: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x34c460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c464: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x34c464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c468: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x34c468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34c46c: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x34c46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34c470: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x34c470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x34c474: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x34c474u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x34c478: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x34c478u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x34c47c: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x34c47cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x34c480: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x34c480u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34c484: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x34c484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34c488: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x34c488u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c48c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x34c48cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c490: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x34c490u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c494: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x34c494u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34c498: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x34c498u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x34c49c: 0x4a0003bf  vwaitq
    ctx->pc = 0x34c49cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x34c4a0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x34c4a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34c4a4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x34c4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34c4a8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x34c4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x34c4ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34c4acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c4b0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x34c4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34c4b4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x34c4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34c4b8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x34c4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34c4bc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x34c4bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x34c4c0: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x34c4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c4c4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x34c4c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x34c4c8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x34c4c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x34c4cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x34c4ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34c4d0: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x34c4d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x34c4d4: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x34c4d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x34c4d8: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x34c4d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x34c4dc: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x34c4dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x34c4e0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x34c4e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34c4e4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x34c4e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34c4e8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34c4e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34c4ec: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x34c4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34c4f0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x34c4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c4f4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x34c4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c4f8: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x34c4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34c4fc: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x34c4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34c500: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x34c500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x34c504: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x34c504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x34c508: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x34c508u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x34c50c: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x34c50cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x34c510: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x34c510u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34c514: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x34c514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34c518: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34C518u;
    SET_GPR_U32(ctx, 31, 0x34C520u);
    ctx->pc = 0x34C51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C518u;
    // 0x34c51c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34C518u, 0x34C520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C520u;
label_34c520:
    // 0x34c520: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34C520u;
    SET_GPR_U32(ctx, 31, 0x34C528u);
    ctx->pc = 0x34C524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C520u;
    // 0x34c524: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34C520u, 0x34C528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C528u;
label_34c528:
    // 0x34c528: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x34c528u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34c52c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x34c52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x34c530: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x34c530u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c534: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x34c534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x34c538: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x34c538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x34c53c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x34c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34c540: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x34c540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x34c544: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x34c544u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34c548: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x34c548u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34c54c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34c54cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34c550: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x34c550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34c554: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x34c554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34c558: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x34c558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34c55c: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x34c55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34c560: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x34c560u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x34c564: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x34c564u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x34c568: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x34c568u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x34c56c: 0x0  nop
    ctx->pc = 0x34c56cu;
    // NOP
    // 0x34c570: 0x0  nop
    ctx->pc = 0x34c570u;
    // NOP
    // 0x34c574: 0x46000044  c1          0x44
    ctx->pc = 0x34c574u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x34c578: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x34c578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x34c57c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x34c57cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x34c580: 0x0  nop
    ctx->pc = 0x34c580u;
    // NOP
    // 0x34c584: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x34c584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c588: 0x0  nop
    ctx->pc = 0x34c588u;
    // NOP
    // 0x34c58c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x34C58Cu;
    {
        const bool branch_taken_0x34c58c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C58Cu;
        // 0x34c590: 0xe7a100b0  swc1        $f1, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c58c) {
            ctx->pc = 0x34C5B8u;
            goto label_34c5b8;
        }
    }
    ctx->pc = 0x34C594u;
    // 0x34c594: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34c594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34c598: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34c598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c59c: 0x0  nop
    ctx->pc = 0x34c59cu;
    // NOP
    // 0x34c5a0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x34c5a0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x34c5a4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x34c5a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x34c5a8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x34c5a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34c5ac: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x34c5acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x34c5b0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34c5b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34c5b4: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x34c5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_34c5b8:
    // 0x34c5b8: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x34c5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x34c5bc: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x34C5BCu;
    SET_GPR_U32(ctx, 31, 0x34C5C4u);
    ctx->pc = 0x34C5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C5BCu;
    // 0x34c5c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x34C5BCu, 0x34C5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C5C4u;
label_34c5c4:
    // 0x34c5c4: 0x7fa000c0  sq          $zero, 0xC0($sp)
    ctx->pc = 0x34c5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 0));
    // 0x34c5c8: 0x7fa000d0  sq          $zero, 0xD0($sp)
    ctx->pc = 0x34c5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 0));
    // 0x34c5cc: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x34c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x34c5d0: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x34c5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x34c5d4: 0xc4406648  lwc1        $f0, 0x6648($v0)
    ctx->pc = 0x34c5d4u;
    { uint32_t bits = FAST_READ32(0x476648u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c5d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34c5dc: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x34c5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x34c5e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34c5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c5e4: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x34c5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x34c5e8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x34c5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34c5ec: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x34c5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x34c5f0: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x34c5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x34c5f4: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x34c5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x34c5f8: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x34c5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x34c5fc: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x34c5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x34c600: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x34c600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x34c604: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x34c604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x34c608: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x34c608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x34c60c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34c60cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c610: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x34c610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x34c614: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x34c614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x34c618: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x34c618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x34c61c: 0xc077824  jal         func_1DE090
    ctx->pc = 0x34C61Cu;
    SET_GPR_U32(ctx, 31, 0x34C624u);
    ctx->pc = 0x34C620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C61Cu;
    // 0x34c620: 0xafa00108  sw          $zero, 0x108($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x34C61Cu, 0x34C624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C624u;
label_34c624:
    // 0x34c624: 0x1440018b  bnez        $v0, . + 4 + (0x18B << 2)
    ctx->pc = 0x34C624u;
    {
        const bool branch_taken_0x34c624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C624u;
        // 0x34c628: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c624) {
            ctx->pc = 0x34CC54u;
            goto label_34cc54;
        }
    }
    ctx->pc = 0x34C62Cu;
    // 0x34c62c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c630: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x34c630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x34c634: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x34c634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x34c638: 0xa2220044  sb          $v0, 0x44($s1)
    ctx->pc = 0x34c638u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 68), (uint8_t)GPR_U32(ctx, 2));
    // 0x34c63c: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x34c63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x34c640: 0xa2220045  sb          $v0, 0x45($s1)
    ctx->pc = 0x34c640u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 69), (uint8_t)GPR_U32(ctx, 2));
    // 0x34c644: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x34c644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c648: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x34c648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34c64c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x34c64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34c650: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x34c650u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x34c654: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x34c654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c658: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x34c658u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x34c65c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x34c65cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x34c660: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x34c660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x34c664: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x34c664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x34c668: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x34c668u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x34c66c: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x34c66cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x34c670: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x34c670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x34c674: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x34c674u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34c678: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x34c678u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34c67c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x34c67cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34c680: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x34c680u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34c684: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x34c684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34c688: 0x46146032  c.eq.s      $f12, $f20
    ctx->pc = 0x34c688u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c68c: 0x0  nop
    ctx->pc = 0x34c68cu;
    // NOP
    // 0x34c690: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x34C690u;
    {
        const bool branch_taken_0x34c690 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C690u;
        // 0x34c694: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c690) {
            ctx->pc = 0x34C6A8u;
            goto label_34c6a8;
        }
    }
    ctx->pc = 0x34C698u;
    // 0x34c698: 0x46146832  c.eq.s      $f13, $f20
    ctx->pc = 0x34c698u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c69c: 0x0  nop
    ctx->pc = 0x34c69cu;
    // NOP
    // 0x34c6a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x34C6A0u;
    {
        const bool branch_taken_0x34c6a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C6A0u;
        // 0x34c6a4: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c6a0) {
            ctx->pc = 0x34C6B8u;
            goto label_34c6b8;
        }
    }
    ctx->pc = 0x34C6A8u;
label_34c6a8:
    // 0x34c6a8: 0xc0e404c  jal         func_390130
    ctx->pc = 0x34C6A8u;
    SET_GPR_U32(ctx, 31, 0x34C6B0u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x34C6A8u, 0x34C6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C6B0u;
label_34c6b0:
    // 0x34c6b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34C6B0u;
    {
        const bool branch_taken_0x34c6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C6B0u;
        // 0x34c6b4: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c6b0) {
            ctx->pc = 0x34C6BCu;
            goto label_34c6bc;
        }
    }
    ctx->pc = 0x34C6B8u;
label_34c6b8:
    // 0x34c6b8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x34c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_34c6bc:
    // 0x34c6bc: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x34c6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x34c6c0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x34c6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x34c6c4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x34c6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x34c6c8: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x34c6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x34c6cc: 0x2484ff68  addiu       $a0, $a0, -0x98
    ctx->pc = 0x34c6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967144));
    // 0x34c6d0: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x34c6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x34c6d4: 0xc0c34a8  jal         func_30D2A0
    ctx->pc = 0x34C6D4u;
    SET_GPR_U32(ctx, 31, 0x34C6DCu);
    ctx->pc = 0x34C6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C6D4u;
    // 0x34c6d8: 0x24a565c8  addiu       $a1, $a1, 0x65C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D2A0u, 0x34C6D4u, 0x34C6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C6DCu;
label_34c6dc:
    // 0x34c6dc: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x34c6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x34c6e0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x34c6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x34c6e4: 0x8c622cec  lw          $v0, 0x2CEC($v1)
    ctx->pc = 0x34c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482CECu));
    // 0x34c6e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34c6ec: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x34C6ECu;
    {
        const bool branch_taken_0x34c6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C6ECu;
        // 0x34c6f0: 0xac622cec  sw          $v0, 0x2CEC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c6ec) {
            ctx->pc = 0x34CC50u;
            goto label_34cc50;
        }
    }
    ctx->pc = 0x34C6F4u;
label_34c6f4:
    // 0x34c6f4: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x34c6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x34c6f8: 0x14620156  bne         $v1, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x34C6F8u;
    {
        const bool branch_taken_0x34c6f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x34C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C6F8u;
        // 0x34c6fc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c6f8) {
            ctx->pc = 0x34CC54u;
            goto label_34cc54;
        }
    }
    ctx->pc = 0x34C700u;
    // 0x34c700: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x34c700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x34c704: 0x24533500  addiu       $s3, $v0, 0x3500
    ctx->pc = 0x34c704u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 13568));
    // 0x34c708: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x34c708u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A3504u));
    // 0x34c70c: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x34c70cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4A350Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A350Cu, _value); } while (0);
    // 0x34c710: 0x3c150047  lui         $s5, 0x47
    ctx->pc = 0x34c710u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)71 << 16));
    // 0x34c714: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x34C714u;
    {
        const bool branch_taken_0x34c714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C714u;
        // 0x34c718: 0x3c16004a  lui         $s6, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c714) {
            ctx->pc = 0x34C988u;
            goto label_34c988;
        }
    }
    ctx->pc = 0x34C71Cu;
    // 0x34c71c: 0x0  nop
    ctx->pc = 0x34c71cu;
    // NOP
label_34c720:
    // 0x34c720: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x34c720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x34c724: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x34c724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x34c728: 0x54400098  bnel        $v0, $zero, . + 4 + (0x98 << 2)
    ctx->pc = 0x34C728u;
    {
        const bool branch_taken_0x34c728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c728) {
            ctx->pc = 0x34C72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C728u;
            // 0x34c72c: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C98Cu;
            goto label_34c98c;
        }
    }
    ctx->pc = 0x34C730u;
    // 0x34c730: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x34c730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x34c734: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x34c734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x34c738: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x34c738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x34c73c: 0x54430093  bnel        $v0, $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x34C73Cu;
    {
        const bool branch_taken_0x34c73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34c73c) {
            ctx->pc = 0x34C740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C73Cu;
            // 0x34c740: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C98Cu;
            goto label_34c98c;
        }
    }
    ctx->pc = 0x34C744u;
    // 0x34c744: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x34c744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x34c748: 0x8ca4bd48  lw          $a0, -0x42B8($a1)
    ctx->pc = 0x34c748u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x34c74c: 0x8e250104  lw          $a1, 0x104($s1)
    ctx->pc = 0x34c74cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x34c750: 0x8c830100  lw          $v1, 0x100($a0)
    ctx->pc = 0x34c750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x34c754: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x34c754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34c758: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x34c758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x34c75c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x34c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x34c760: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x34c760u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34c764: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x34c764u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34c768: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34c768u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34c76c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x34c76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34c770: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x34c770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c774: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x34c774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34c778: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x34c778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c77c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x34c77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34c780: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x34c780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x34c784: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x34c784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34c788: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x34c788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x34c78c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x34c78cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34c790: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x34c790u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x34c794: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x34c794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34c798: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x34c798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34c79c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x34c79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34c7a0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x34c7a0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x34c7a4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x34c7a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x34c7a8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x34c7a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x34c7ac: 0x46010044  c1          0x10044
    ctx->pc = 0x34c7acu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x34c7b0: 0x3c0141b0  lui         $at, 0x41B0
    ctx->pc = 0x34c7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16816 << 16));
    // 0x34c7b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34c7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c7b8: 0x0  nop
    ctx->pc = 0x34c7b8u;
    // NOP
    // 0x34c7bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34c7bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c7c0: 0x0  nop
    ctx->pc = 0x34c7c0u;
    // NOP
    // 0x34c7c4: 0x45020071  bc1fl       . + 4 + (0x71 << 2)
    ctx->pc = 0x34C7C4u;
    {
        const bool branch_taken_0x34c7c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34c7c4) {
            ctx->pc = 0x34C7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C7C4u;
            // 0x34c7c8: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C98Cu;
            goto label_34c98c;
        }
    }
    ctx->pc = 0x34C7CCu;
    // 0x34c7cc: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x34c7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x34c7d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34c7d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c7d4: 0x0  nop
    ctx->pc = 0x34c7d4u;
    // NOP
    // 0x34c7d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34c7d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c7dc: 0x0  nop
    ctx->pc = 0x34c7dcu;
    // NOP
    // 0x34c7e0: 0x4502006a  bc1fl       . + 4 + (0x6A << 2)
    ctx->pc = 0x34C7E0u;
    {
        const bool branch_taken_0x34c7e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34c7e0) {
            ctx->pc = 0x34C7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C7E0u;
            // 0x34c7e4: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C98Cu;
            goto label_34c98c;
        }
    }
    ctx->pc = 0x34C7E8u;
    // 0x34c7e8: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x34c7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x34c7ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x34c7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34c7f0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x34c7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x34c7f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34c7f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34c7f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34c7fc: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x34c7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c800: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x34c800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x34c804: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x34c804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34c808: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x34c808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c80c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x34c80cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x34c810: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34c810u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34c814: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x34c814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c818: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x34c818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34c81c: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x34c81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34c820: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x34c820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x34c824: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x34c824u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x34c828: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x34c828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x34c82c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34C82Cu;
    SET_GPR_U32(ctx, 31, 0x34C834u);
    ctx->pc = 0x34C830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C82Cu;
    // 0x34c830: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34C82Cu, 0x34C834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C834u;
label_34c834:
    // 0x34c834: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34C834u;
    SET_GPR_U32(ctx, 31, 0x34C83Cu);
    ctx->pc = 0x34C838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C834u;
    // 0x34c838: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34C834u, 0x34C83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C83Cu;
label_34c83c:
    // 0x34c83c: 0x7a020070  lq          $v0, 0x70($s0)
    ctx->pc = 0x34c83cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x34c840: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x34c840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34c844: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x34c844u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c848: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x34c848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34c84c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x34c84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x34c850: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x34c850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34c854: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x34c854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x34c858: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x34c858u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34c85c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x34c85cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34c860: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34c860u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34c864: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x34c864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34c868: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x34c868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34c86c: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x34c86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34c870: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x34c870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34c874: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x34c874u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x34c878: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x34c878u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x34c87c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x34c87cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x34c880: 0x0  nop
    ctx->pc = 0x34c880u;
    // NOP
    // 0x34c884: 0x0  nop
    ctx->pc = 0x34c884u;
    // NOP
    // 0x34c888: 0x46010084  c1          0x10084
    ctx->pc = 0x34c888u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x34c88c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x34c88cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c890: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34c890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c894: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x34c894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x34c898: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x34c898u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c89c: 0x0  nop
    ctx->pc = 0x34c89cu;
    // NOP
    // 0x34c8a0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x34C8A0u;
    {
        const bool branch_taken_0x34c8a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C8A0u;
        // 0x34c8a4: 0xe7a20060  swc1        $f2, 0x60($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c8a0) {
            ctx->pc = 0x34C8CCu;
            goto label_34c8cc;
        }
    }
    ctx->pc = 0x34C8A8u;
    // 0x34c8a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34c8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34c8ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34c8acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c8b0: 0x0  nop
    ctx->pc = 0x34c8b0u;
    // NOP
    // 0x34c8b4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x34c8b4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x34c8b8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x34c8b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x34c8bc: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x34c8bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x34c8c0: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x34c8c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x34c8c4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34c8c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34c8c8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x34c8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_34c8cc:
    // 0x34c8cc: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x34c8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34c8d0: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x34C8D0u;
    SET_GPR_U32(ctx, 31, 0x34C8D8u);
    ctx->pc = 0x34C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C8D0u;
    // 0x34c8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x34C8D0u, 0x34C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C8D8u;
label_34c8d8:
    // 0x34c8d8: 0x7fa00070  sq          $zero, 0x70($sp)
    ctx->pc = 0x34c8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 0));
    // 0x34c8dc: 0x7fa00080  sq          $zero, 0x80($sp)
    ctx->pc = 0x34c8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 0));
    // 0x34c8e0: 0xc6a06648  lwc1        $f0, 0x6648($s5)
    ctx->pc = 0x34c8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 26184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c8e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34c8e8: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x34c8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x34c8ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34c8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c8f0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x34c8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x34c8f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34c8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c8f8: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x34c8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x34c8fc: 0x27a60124  addiu       $a2, $sp, 0x124
    ctx->pc = 0x34c8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x34c900: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x34c900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x34c904: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x34c904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x34c908: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x34c908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x34c90c: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x34c90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x34c910: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x34c910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x34c914: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x34c914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x34c918: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x34c918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x34c91c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34c91cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c920: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x34c920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x34c924: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x34c924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x34c928: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x34c928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x34c92c: 0xc077824  jal         func_1DE090
    ctx->pc = 0x34C92Cu;
    SET_GPR_U32(ctx, 31, 0x34C934u);
    ctx->pc = 0x34C930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C92Cu;
    // 0x34c930: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x34C92Cu, 0x34C934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C934u;
label_34c934:
    // 0x34c934: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x34C934u;
    {
        const bool branch_taken_0x34c934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c934) {
            ctx->pc = 0x34C938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C934u;
            // 0x34c938: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C98Cu;
            goto label_34c98c;
        }
    }
    ctx->pc = 0x34C93Cu;
    // 0x34c93c: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x34c93cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x34c940: 0x8fc32cf0  lw          $v1, 0x2CF0($fp)
    ctx->pc = 0x34c940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11504)));
    // 0x34c944: 0x8ce22cec  lw          $v0, 0x2CEC($a3)
    ctx->pc = 0x34c944u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482CECu));
    // 0x34c948: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x34c948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x34c94c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x34C94Cu;
    {
        const bool branch_taken_0x34c94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c94c) {
            ctx->pc = 0x34C950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C94Cu;
            // 0x34c950: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C98Cu;
            goto label_34c98c;
        }
    }
    ctx->pc = 0x34C954u;
    // 0x34c954: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x34c954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_34c958:
    // 0x34c958: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x34c958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x34c95c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x34c95cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x34c960: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x34c960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34c964: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34c964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34c968: 0xc0d351c  jal         func_34D470
    ctx->pc = 0x34C968u;
    SET_GPR_U32(ctx, 31, 0x34C970u);
    ctx->pc = 0x34C96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C968u;
    // 0x34c96c: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D470u, 0x34C968u, 0x34C970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C970u;
label_34c970:
    // 0x34c970: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x34c970u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x34c974: 0x8fc32cf0  lw          $v1, 0x2CF0($fp)
    ctx->pc = 0x34c974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11504)));
    // 0x34c978: 0x8d022cec  lw          $v0, 0x2CEC($t0)
    ctx->pc = 0x34c978u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482CECu));
    // 0x34c97c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x34c97cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x34c980: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x34C980u;
    {
        const bool branch_taken_0x34c980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c980) {
            ctx->pc = 0x34C984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C980u;
            // 0x34c984: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34c958;
        }
    }
    ctx->pc = 0x34C988u;
label_34c988:
    // 0x34c988: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x34c988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_34c98c:
    // 0x34c98c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34c98cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c990: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x34C990u;
    {
        const bool branch_taken_0x34c990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C990u;
        // 0x34c994: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c990) {
            ctx->pc = 0x34C99Cu;
            goto label_34c99c;
        }
    }
    ctx->pc = 0x34C998u;
    // 0x34c998: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x34c998u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34c99c:
    // 0x34c99c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34C99Cu;
    {
        const bool branch_taken_0x34c99c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c99c) {
            ctx->pc = 0x34C9ACu;
            goto label_34c9ac;
        }
    }
    ctx->pc = 0x34C9A4u;
    // 0x34c9a4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x34c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x34c9a8: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x34c9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_34c9ac:
    // 0x34c9ac: 0x5620ff5c  bnel        $s1, $zero, . + 4 + (-0xA4 << 2)
    ctx->pc = 0x34C9ACu;
    {
        const bool branch_taken_0x34c9ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c9ac) {
            ctx->pc = 0x34C9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34C9ACu;
            // 0x34c9b0: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34C720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34c720;
        }
    }
    ctx->pc = 0x34C9B4u;
    // 0x34c9b4: 0x26c23510  addiu       $v0, $s6, 0x3510
    ctx->pc = 0x34c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 13584));
    // 0x34c9b8: 0xc6a66648  lwc1        $f6, 0x6648($s5)
    ctx->pc = 0x34c9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 26184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x34c9bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x34c9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x34c9c0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x34c9c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c9c4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x34c9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x34c9c8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x34c9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x34c9cc: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x34c9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x34c9d0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x34c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x34c9d4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x34c9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x34c9d8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x34c9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x34c9dc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x34c9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x34c9e0: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x34C9E0u;
    {
        const bool branch_taken_0x34c9e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C9E0u;
        // 0x34c9e4: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c9e0) {
            ctx->pc = 0x34CB30u;
            goto label_34cb30;
        }
    }
    ctx->pc = 0x34C9E8u;
    // 0x34c9e8: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x34c9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x34c9ec: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x34c9ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x34c9f0: 0x3c070020  lui         $a3, 0x20
    ctx->pc = 0x34c9f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32 << 16));
    // 0x34c9f4: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x34c9f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x34c9f8: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x34c9f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x34c9fc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x34c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_34ca00:
    // 0x34ca00: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x34ca00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34ca04: 0x10c0003d  beqz        $a2, . + 4 + (0x3D << 2)
    ctx->pc = 0x34CA04u;
    {
        const bool branch_taken_0x34ca04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ca04) {
            ctx->pc = 0x34CAFCu;
            goto label_34cafc;
        }
    }
    ctx->pc = 0x34CA0Cu;
    // 0x34ca0c: 0x8cc200b8  lw          $v0, 0xB8($a2)
    ctx->pc = 0x34ca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 184)));
    // 0x34ca10: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x34CA10u;
    {
        const bool branch_taken_0x34ca10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ca10) {
            ctx->pc = 0x34CA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34CA10u;
            // 0x34ca14: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34CAFCu;
            goto label_34cafc;
        }
    }
    ctx->pc = 0x34CA18u;
    // 0x34ca18: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x34ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x34ca1c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x34ca1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x34ca20: 0x14470036  bne         $v0, $a3, . + 4 + (0x36 << 2)
    ctx->pc = 0x34CA20u;
    {
        const bool branch_taken_0x34ca20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x34CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CA20u;
        // 0x34ca24: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ca20) {
            ctx->pc = 0x34CAFCu;
            goto label_34cafc;
        }
    }
    ctx->pc = 0x34CA28u;
    // 0x34ca28: 0x8cc40104  lw          $a0, 0x104($a2)
    ctx->pc = 0x34ca28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x34ca2c: 0x8d05bd48  lw          $a1, -0x42B8($t0)
    ctx->pc = 0x34ca2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294950216)));
    // 0x34ca30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34ca30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34ca34: 0x8ca20100  lw          $v0, 0x100($a1)
    ctx->pc = 0x34ca34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x34ca38: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x34ca38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x34ca3c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x34ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x34ca40: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x34ca40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34ca44: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x34ca44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34ca48: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34ca48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34ca4c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x34ca4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34ca50: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x34ca50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34ca54: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x34ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34ca58: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x34ca58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ca5c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x34ca5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ca60: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x34ca60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x34ca64: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x34ca64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x34ca68: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x34ca68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x34ca6c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x34ca6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x34ca70: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x34ca70u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x34ca74: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x34ca74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34ca78: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x34ca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34ca7c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x34ca7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34ca80: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x34ca80u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x34ca84: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x34ca84u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x34ca88: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x34ca88u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x34ca8c: 0x46060834  c.lt.s      $f1, $f6
    ctx->pc = 0x34ca8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ca90: 0x0  nop
    ctx->pc = 0x34ca90u;
    // NOP
    // 0x34ca94: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x34CA94u;
    {
        const bool branch_taken_0x34ca94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CA94u;
        // 0x34ca98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ca94) {
            ctx->pc = 0x34CAF8u;
            goto label_34caf8;
        }
    }
    ctx->pc = 0x34CA9Cu;
    // 0x34ca9c: 0x46014034  c.lt.s      $f8, $f1
    ctx->pc = 0x34ca9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34caa0: 0x0  nop
    ctx->pc = 0x34caa0u;
    // NOP
    // 0x34caa4: 0x45030013  bc1tl       . + 4 + (0x13 << 2)
    ctx->pc = 0x34CAA4u;
    {
        const bool branch_taken_0x34caa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34caa4) {
            ctx->pc = 0x34CAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34CAA4u;
            // 0x34caa8: 0x46000986  mov.s       $f6, $f1 (Delay Slot)
            ctx->f[6] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34CAF4u;
            goto label_34caf4;
        }
    }
    ctx->pc = 0x34CAACu;
    // 0x34caac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x34caacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x34cab0: 0x8c62bd48  lw          $v0, -0x42B8($v1)
    ctx->pc = 0x34cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x34cab4: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x34cab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x34cab8: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x34cab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x34cabc: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x34cabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34cac0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x34cac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34cac4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x34cac4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34cac8: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x34cac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34cacc: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x34caccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34cad0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x34cad0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x34cad4: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x34cad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34cad8: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x34cad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34cadc: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x34cadcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34cae0: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x34cae0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cae4: 0x0  nop
    ctx->pc = 0x34cae4u;
    // NOP
    // 0x34cae8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x34CAE8u;
    {
        const bool branch_taken_0x34cae8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CAE8u;
        // 0x34caec: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cae8) {
            ctx->pc = 0x34CAFCu;
            goto label_34cafc;
        }
    }
    ctx->pc = 0x34CAF0u;
    // 0x34caf0: 0x46000986  mov.s       $f6, $f1
    ctx->pc = 0x34caf0u;
    ctx->f[6] = FPU_MOV_S(ctx->f[1]);
label_34caf4:
    // 0x34caf4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x34caf4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34caf8:
    // 0x34caf8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x34caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_34cafc:
    // 0x34cafc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x34CAFCu;
    {
        const bool branch_taken_0x34cafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cafc) {
            ctx->pc = 0x34CB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34CAFCu;
            // 0x34cb00: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34CB10u;
            goto label_34cb10;
        }
    }
    ctx->pc = 0x34CB04u;
    // 0x34cb04: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x34cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x34cb08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34CB08u;
    {
        const bool branch_taken_0x34cb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB08u;
        // 0x34cb0c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cb08) {
            ctx->pc = 0x34CB20u;
            goto label_34cb20;
        }
    }
    ctx->pc = 0x34CB10u;
label_34cb10:
    // 0x34cb10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34CB10u;
    {
        const bool branch_taken_0x34cb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB10u;
        // 0x34cb14: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cb10) {
            ctx->pc = 0x34CB24u;
            goto label_34cb24;
        }
    }
    ctx->pc = 0x34CB18u;
    // 0x34cb18: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x34cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x34cb1c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x34cb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_34cb20:
    // 0x34cb20: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x34cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_34cb24:
    // 0x34cb24: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x34cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x34cb28: 0x1462ffb5  bne         $v1, $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x34CB28u;
    {
        const bool branch_taken_0x34cb28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x34CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB28u;
        // 0x34cb2c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cb28) {
            ctx->pc = 0x34CA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34ca00;
        }
    }
    ctx->pc = 0x34CB30u;
label_34cb30:
    // 0x34cb30: 0x12a00047  beqz        $s5, . + 4 + (0x47 << 2)
    ctx->pc = 0x34CB30u;
    {
        const bool branch_taken_0x34cb30 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB30u;
        // 0x34cb34: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cb30) {
            ctx->pc = 0x34CC50u;
            goto label_34cc50;
        }
    }
    ctx->pc = 0x34CB38u;
    // 0x34cb38: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x34cb38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34cb3c: 0x24476630  addiu       $a3, $v0, 0x6630
    ctx->pc = 0x34cb3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 26160));
    // 0x34cb40: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x34cb40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x34cb44: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x34cb44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x34cb48: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x34cb48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x34cb4c: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x34cb4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x34cb50: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x34cb50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x34cb54: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x34cb54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x34cb58: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x34cb58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34cb5c: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x34cb5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34cb60: 0xb3a5002f  sdl         $a1, 0x2F($sp)
    ctx->pc = 0x34cb60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34cb64: 0xb7a50028  sdr         $a1, 0x28($sp)
    ctx->pc = 0x34cb64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34cb68: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x34cb68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34cb6c: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x34cb6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34cb70: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x34cb70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cb74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34cb74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cb78: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x34cb78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34cb7c: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x34cb7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cb80: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x34cb80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34cb84: 0x0  nop
    ctx->pc = 0x34cb84u;
    // NOP
label_34cb88:
    // 0x34cb88: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x34cb88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x34cb8c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x34cb8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x34cb90: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x34cb90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x34cb94: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x34cb94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34cb98: 0x8ea40104  lw          $a0, 0x104($s5)
    ctx->pc = 0x34cb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
    // 0x34cb9c: 0xc0c2e94  jal         func_30BA50
    ctx->pc = 0x34CB9Cu;
    SET_GPR_U32(ctx, 31, 0x34CBA4u);
    ctx->pc = 0x34CBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CB9Cu;
    // 0x34cba0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA50u, 0x34CB9Cu, 0x34CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CBA4u;
label_34cba4:
    // 0x34cba4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x34cba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x34cba8: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x34cba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x34cbac: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x34cbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x34cbb0: 0x82900b  movn        $s2, $a0, $v0
    ctx->pc = 0x34cbb0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
    // 0x34cbb4: 0x621fff4  bgez        $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x34CBB4u;
    {
        const bool branch_taken_0x34cbb4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x34CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CBB4u;
        // 0x34cbb8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cbb4) {
            ctx->pc = 0x34CB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34cb88;
        }
    }
    ctx->pc = 0x34CBBCu;
    // 0x34cbbc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x34CBBCu;
    {
        const bool branch_taken_0x34cbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cbbc) {
            ctx->pc = 0x34CC38u;
            goto label_34cc38;
        }
    }
    ctx->pc = 0x34CBC4u;
    // 0x34cbc4: 0x0  nop
    ctx->pc = 0x34cbc4u;
    // NOP
label_34cbc8:
    // 0x34cbc8: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34CBC8u;
    {
        const bool branch_taken_0x34cbc8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cbc8) {
            ctx->pc = 0x34CBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34CBC8u;
            // 0x34cbcc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34CBD0u;
            goto label_34cbd0;
        }
    }
    ctx->pc = 0x34CBD0u;
label_34cbd0:
    // 0x34cbd0: 0x52001a  div         $zero, $v0, $s2
    ctx->pc = 0x34cbd0u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34cbd4: 0x1810  mfhi        $v1
    ctx->pc = 0x34cbd4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x34cbd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34cbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34cbdc: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x34cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x34cbe0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x34cbe0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34cbe4: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x34CBE4u;
    {
        const bool branch_taken_0x34cbe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cbe4) {
            ctx->pc = 0x34CBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34CBE4u;
            // 0x34cbe8: 0x8ea20104  lw          $v0, 0x104($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34CC20u;
            goto label_34cc20;
        }
    }
    ctx->pc = 0x34CBECu;
    // 0x34cbec: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x34CBECu;
    SET_GPR_U32(ctx, 31, 0x34CBF4u);
    ctx->pc = 0x34CBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CBECu;
    // 0x34cbf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x34CBECu, 0x34CBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CBF4u;
label_34cbf4:
    // 0x34cbf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34CBF4u;
    {
        const bool branch_taken_0x34cbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cbf4) {
            ctx->pc = 0x34CC04u;
            goto label_34cc04;
        }
    }
    ctx->pc = 0x34CBFCu;
    // 0x34cbfc: 0xc0c4900  jal         func_312400
    ctx->pc = 0x34CBFCu;
    SET_GPR_U32(ctx, 31, 0x34CC04u);
    ctx->pc = 0x34CC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CBFCu;
    // 0x34cc00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x34CBFCu, 0x34CC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CC04u;
label_34cc04:
    // 0x34cc04: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x34cc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x34cc08: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x34cc08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x34cc0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x34cc0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34cc10: 0xc0d351c  jal         func_34D470
    ctx->pc = 0x34CC10u;
    SET_GPR_U32(ctx, 31, 0x34CC18u);
    ctx->pc = 0x34CC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CC10u;
    // 0x34cc14: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D470u, 0x34CC10u, 0x34CC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CC18u;
label_34cc18:
    // 0x34cc18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34CC18u;
    {
        const bool branch_taken_0x34cc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cc18) {
            ctx->pc = 0x34CC38u;
            goto label_34cc38;
        }
    }
    ctx->pc = 0x34CC20u;
label_34cc20:
    // 0x34cc20: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x34cc20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x34cc24: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x34cc24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x34cc28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x34cc28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34cc2c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34cc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34cc30: 0xc0d351c  jal         func_34D470
    ctx->pc = 0x34CC30u;
    SET_GPR_U32(ctx, 31, 0x34CC38u);
    ctx->pc = 0x34CC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CC30u;
    // 0x34cc34: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D470u, 0x34CC30u, 0x34CC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CC38u;
label_34cc38:
    // 0x34cc38: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x34cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x34cc3c: 0x8fc32cf0  lw          $v1, 0x2CF0($fp)
    ctx->pc = 0x34cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11504)));
    // 0x34cc40: 0x8c822cec  lw          $v0, 0x2CEC($a0)
    ctx->pc = 0x34cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482CECu));
    // 0x34cc44: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x34cc44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x34cc48: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x34CC48u;
    {
        const bool branch_taken_0x34cc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CC48u;
        // 0x34cc4c: 0x8c822cec  lw          $v0, 0x2CEC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cc48) {
            ctx->pc = 0x34CBC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34cbc8;
        }
    }
    ctx->pc = 0x34CC50u;
label_34cc50:
    // 0x34cc50: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x34cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_34cc54:
    // 0x34cc54: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x34cc54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34cc58: 0x8c432b44  lw          $v1, 0x2B44($v0)
    ctx->pc = 0x34cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11076)));
    // 0x34cc5c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x34cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34cc60: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x34cc60u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x34cc64: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34CC64u;
    {
        const bool branch_taken_0x34cc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cc64) {
            ctx->pc = 0x34CC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34CC64u;
            // 0x34cc68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34CC6Cu;
            goto label_34cc6c;
        }
    }
    ctx->pc = 0x34CC6Cu;
label_34cc6c:
    // 0x34cc6c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x34cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x34cc70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34cc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cc74: 0x8c45c60c  lw          $a1, -0x39F4($v0)
    ctx->pc = 0x34cc74u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FC60Cu));
    // 0x34cc78: 0x2010  mfhi        $a0
    ctx->pc = 0x34cc78u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x34cc7c: 0x868018  mult        $s0, $a0, $a2
    ctx->pc = 0x34cc7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x34cc80: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x34cc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x34cc84: 0x90820045  lbu         $v0, 0x45($a0)
    ctx->pc = 0x34cc84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 69)));
    // 0x34cc88: 0x144300d3  bne         $v0, $v1, . + 4 + (0xD3 << 2)
    ctx->pc = 0x34CC88u;
    {
        const bool branch_taken_0x34cc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x34CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CC88u;
        // 0x34cc8c: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cc88) {
            ctx->pc = 0x34CFD8u;
            goto label_34cfd8;
        }
    }
    ctx->pc = 0x34CC90u;
    // 0x34cc90: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34CC90u;
    SET_GPR_U32(ctx, 31, 0x34CC98u);
    ctx->pc = 0x34CC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CC90u;
    // 0x34cc94: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34CC90u, 0x34CC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CC98u;
label_34cc98:
    // 0x34cc98: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x34cc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x34cc9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34cca0: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x34CCA0u;
    {
        const bool branch_taken_0x34cca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34cca0) {
            ctx->pc = 0x34CCA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34CCA0u;
            // 0x34cca4: 0xc6e40008  lwc1        $f4, 0x8($s7) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34CCC4u;
            goto label_34ccc4;
        }
    }
    ctx->pc = 0x34CCA8u;
    // 0x34cca8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x34cca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x34ccac: 0x8c62c60c  lw          $v0, -0x39F4($v1)
    ctx->pc = 0x34ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FC60Cu));
    // 0x34ccb0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x34ccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x34ccb4: 0x8c642b00  lw          $a0, 0x2B00($v1)
    ctx->pc = 0x34ccb4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482B00u));
    // 0x34ccb8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x34ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x34ccbc: 0xac440038  sw          $a0, 0x38($v0)
    ctx->pc = 0x34ccbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 4));
    // 0x34ccc0: 0xc6e40008  lwc1        $f4, 0x8($s7)
    ctx->pc = 0x34ccc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_34ccc4:
    // 0x34ccc4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x34ccc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ccc8: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x34ccc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34cccc: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x34ccccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ccd0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x34ccd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x34ccd4: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x34ccd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
    // 0x34ccd8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x34ccd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34ccdc: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x34ccdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x34cce0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x34cce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x34cce4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x34cce4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x34cce8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34cce8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34ccec: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x34ccecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34ccf0: 0x0  nop
    ctx->pc = 0x34ccf0u;
    // NOP
    // 0x34ccf4: 0x450300ae  bc1tl       . + 4 + (0xAE << 2)
    ctx->pc = 0x34CCF4u;
    {
        const bool branch_taken_0x34ccf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34ccf4) {
            ctx->pc = 0x34CCF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34CCF4u;
            // 0x34ccf8: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34CFB0u;
            goto label_34cfb0;
        }
    }
    ctx->pc = 0x34CCFCu;
    // 0x34ccfc: 0x92230044  lbu         $v1, 0x44($s1)
    ctx->pc = 0x34ccfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x34cd00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34cd04: 0x146200b4  bne         $v1, $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x34CD04u;
    {
        const bool branch_taken_0x34cd04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x34CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CD04u;
        // 0x34cd08: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cd04) {
            ctx->pc = 0x34CFD8u;
            goto label_34cfd8;
        }
    }
    ctx->pc = 0x34CD0Cu;
    // 0x34cd0c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34CD0Cu;
    SET_GPR_U32(ctx, 31, 0x34CD14u);
    ctx->pc = 0x34CD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CD0Cu;
    // 0x34cd10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34CD0Cu, 0x34CD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CD14u;
label_34cd14:
    // 0x34cd14: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x34CD14u;
    SET_GPR_U32(ctx, 31, 0x34CD1Cu);
    ctx->pc = 0x34CD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CD14u;
    // 0x34cd18: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x34CD14u, 0x34CD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CD1Cu;
label_34cd1c:
    // 0x34cd1c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x34cd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x34cd20: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x34cd20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34cd24: 0x8c93bd48  lw          $s3, -0x42B8($a0)
    ctx->pc = 0x34cd24u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x34cd28: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x34CD28u;
    SET_GPR_U32(ctx, 31, 0x34CD30u);
    ctx->pc = 0x34CD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CD28u;
    // 0x34cd2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x34CD28u, 0x34CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CD30u;
label_34cd30:
    // 0x34cd30: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34CD30u;
    SET_GPR_U32(ctx, 31, 0x34CD38u);
    ctx->pc = 0x34CD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CD30u;
    // 0x34cd34: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34CD30u, 0x34CD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CD38u;
label_34cd38:
    // 0x34cd38: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34CD38u;
    SET_GPR_U32(ctx, 31, 0x34CD40u);
    ctx->pc = 0x34CD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CD38u;
    // 0x34cd3c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34CD38u, 0x34CD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CD40u;
label_34cd40:
    // 0x34cd40: 0x8e700100  lw          $s0, 0x100($s3)
    ctx->pc = 0x34cd40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
    // 0x34cd44: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x34CD44u;
    SET_GPR_U32(ctx, 31, 0x34CD4Cu);
    ctx->pc = 0x34CD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CD44u;
    // 0x34cd48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x34CD44u, 0x34CD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CD4Cu;
label_34cd4c:
    // 0x34cd4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34CD4Cu;
    {
        const bool branch_taken_0x34cd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CD4Cu;
        // 0x34cd50: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cd4c) {
            ctx->pc = 0x34CD60u;
            goto label_34cd60;
        }
    }
    ctx->pc = 0x34CD54u;
    // 0x34cd54: 0xc0c4900  jal         func_312400
    ctx->pc = 0x34CD54u;
    SET_GPR_U32(ctx, 31, 0x34CD5Cu);
    ctx->pc = 0x34CD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CD54u;
    // 0x34cd58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x34CD54u, 0x34CD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CD5Cu;
label_34cd5c:
    // 0x34cd5c: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x34cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_34cd60:
    // 0x34cd60: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34cd60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34cd64: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x34cd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34cd68: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x34cd68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34cd6c: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x34cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x34cd70: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34cd70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34cd74: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x34cd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34cd78: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x34cd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34cd7c: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x34cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x34cd80: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34cd80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34cd84: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x34cd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34cd88: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x34cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x34cd8c: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x34cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x34cd90: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x34cd90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34cd94: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x34cd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34cd98: 0xc66000e0  lwc1        $f0, 0xE0($s3)
    ctx->pc = 0x34cd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cd9c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x34cd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x34cda0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x34cda0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x34cda4: 0x0  nop
    ctx->pc = 0x34cda4u;
    // NOP
    // 0x34cda8: 0x460031c3  div.s       $f7, $f6, $f0
    ctx->pc = 0x34cda8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
    // 0x34cdac: 0x44063800  mfc1        $a2, $f7
    ctx->pc = 0x34cdacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x34cdb0: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x34cdb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34cdb4: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x34cdb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x34cdb8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34cdb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34cdbc: 0xfa410040  sqc2        $vf1, 0x40($s2)
    ctx->pc = 0x34cdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34cdc0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x34cdc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x34cdc4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x34cdc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x34cdc8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x34cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x34cdcc: 0x44083800  mfc1        $t0, $f7
    ctx->pc = 0x34cdccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x34cdd0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x34cdd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34cdd4: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x34cdd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x34cdd8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34cdd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34cddc: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x34cddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34cde0: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x34cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x34cde4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34cde4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34cde8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x34cde8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34cdec: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34cdecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34cdf0: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x34cdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34cdf4: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x34cdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34cdf8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x34cdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x34cdfc: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x34cdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ce00: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x34ce00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ce04: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x34ce04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34ce08: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x34ce08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x34ce0c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x34ce0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x34ce10: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x34ce10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x34ce14: 0xe7a200bc  swc1        $f2, 0xBC($sp)
    ctx->pc = 0x34ce14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x34ce18: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x34ce18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34ce1c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x34ce1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34ce20: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x34ce20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ce24: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x34ce24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ce28: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x34ce28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34ce2c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x34ce2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x34ce30: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x34ce30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x34ce34: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x34ce34u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x34ce38: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x34ce38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34ce3c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x34ce3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34ce40: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x34ce40u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34ce44: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x34ce44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34ce48: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x34ce48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34ce4c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x34ce4cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x34ce50: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x34ce50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34ce54: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x34ce54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34ce58: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x34ce58u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34ce5c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x34ce5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x34ce60: 0x46003946  mov.s       $f5, $f7
    ctx->pc = 0x34ce60u;
    ctx->f[5] = FPU_MOV_S(ctx->f[7]);
    // 0x34ce64: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x34ce64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x34ce68: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x34ce68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x34ce6c: 0xc66100e4  lwc1        $f1, 0xE4($s3)
    ctx->pc = 0x34ce6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ce70: 0x0  nop
    ctx->pc = 0x34ce70u;
    // NOP
    // 0x34ce74: 0x460131c3  div.s       $f7, $f6, $f1
    ctx->pc = 0x34ce74u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[6], ctx->f[1]); }
    // 0x34ce78: 0x44083800  mfc1        $t0, $f7
    ctx->pc = 0x34ce78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x34ce7c: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x34ce7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34ce80: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x34ce80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x34ce84: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34ce84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34ce88: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x34ce88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34ce8c: 0x44072800  mfc1        $a3, $f5
    ctx->pc = 0x34ce8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x34ce90: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x34ce90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34ce94: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x34ce94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x34ce98: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34ce98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34ce9c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x34ce9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34cea0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34cea0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34cea4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x34cea4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34cea8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34cea8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34ceac: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x34ceacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34ceb0: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x34ceb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ceb4: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x34ceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ceb8: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x34ceb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34cebc: 0xc7a300cc  lwc1        $f3, 0xCC($sp)
    ctx->pc = 0x34cebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34cec0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x34cec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x34cec4: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x34cec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x34cec8: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x34cec8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x34cecc: 0xe7a300bc  swc1        $f3, 0xBC($sp)
    ctx->pc = 0x34ceccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x34ced0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x34ced0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34ced4: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x34ced4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34ced8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x34ced8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cedc: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x34cedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cee0: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x34cee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34cee4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x34cee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x34cee8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x34cee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x34ceec: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x34ceecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x34cef0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x34cef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34cef4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x34cef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34cef8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x34cef8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34cefc: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x34cefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34cf00: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x34cf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34cf04: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x34cf04u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x34cf08: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x34cf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34cf0c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x34cf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34cf10: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x34cf10u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34cf14: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x34cf14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x34cf18: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x34cf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cf1c: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x34cf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34cf20: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x34cf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34cf24: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x34cf24u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x34cf28: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x34cf28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x34cf2c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x34cf2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x34cf30: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x34cf30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x34cf34: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x34cf34u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x34cf38: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x34cf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34cf3c: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x34cf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34cf40: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x34cf40u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34cf44: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x34cf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34cf48: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x34cf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34cf4c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x34cf4cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x34cf50: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x34cf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34cf54: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x34cf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34cf58: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x34cf58u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34cf5c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x34cf5cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x34cf60: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x34cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34cf64: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x34cf64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x34cf68: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x34cf68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34cf6c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x34cf6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34cf70: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x34cf70u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x34cf74: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x34cf74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x34cf78: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x34cf78u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x34cf7c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x34cf7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34cf80: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x34cf80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34cf84: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x34cf84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34cf88: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x34cf88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34cf8c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x34cf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34cf90: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x34cf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cf94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34cf94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cf98: 0x0  nop
    ctx->pc = 0x34cf98u;
    // NOP
    // 0x34cf9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34cf9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cfa0: 0x0  nop
    ctx->pc = 0x34cfa0u;
    // NOP
    // 0x34cfa4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x34CFA4u;
    {
        const bool branch_taken_0x34cfa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CFA4u;
        // 0x34cfa8: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cfa4) {
            ctx->pc = 0x34CFD8u;
            goto label_34cfd8;
        }
    }
    ctx->pc = 0x34CFACu;
    // 0x34cfac: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x34cfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_34cfb0:
    // 0x34cfb0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34CFB0u;
    {
        const bool branch_taken_0x34cfb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CFB0u;
        // 0x34cfb4: 0xa2200045  sb          $zero, 0x45($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 69), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cfb0) {
            ctx->pc = 0x34CFC4u;
            goto label_34cfc4;
        }
    }
    ctx->pc = 0x34CFB8u;
    // 0x34cfb8: 0xc0c3212  jal         func_30C848
    ctx->pc = 0x34CFB8u;
    SET_GPR_U32(ctx, 31, 0x34CFC0u);
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x34CFB8u, 0x34CFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CFC0u;
label_34cfc0:
    // 0x34cfc0: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x34cfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_34cfc4:
    // 0x34cfc4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x34cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x34cfc8: 0x8c622cec  lw          $v0, 0x2CEC($v1)
    ctx->pc = 0x34cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482CECu));
    // 0x34cfcc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34cfd0: 0xac622cec  sw          $v0, 0x2CEC($v1)
    ctx->pc = 0x34cfd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x482CECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CECu, _value); } while (0);
    // 0x34cfd4: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x34cfd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
label_34cfd8:
    // 0x34cfd8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34cfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34cfdc: 0x8d02bd50  lw          $v0, -0x42B0($t0)
    ctx->pc = 0x34cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294950224)));
    // 0x34cfe0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x34cfe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cfe4: 0x3c1e41a0  lui         $fp, 0x41A0
    ctx->pc = 0x34cfe4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)16800 << 16));
    // 0x34cfe8: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x34cfe8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
    // 0x34cfec: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x34cfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x34cff0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34cff4: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x34cff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cff8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x34cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x34cffc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x34cffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34d000: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x34d000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d004: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x34d004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x34d008: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x34d008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d00c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x34d00cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34d010: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x34d010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d014: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34D014u;
    SET_GPR_U32(ctx, 31, 0x34D01Cu);
    ctx->pc = 0x34D018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D014u;
    // 0x34d018: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34D014u, 0x34D01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D01Cu;
label_34d01c:
    // 0x34d01c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34D01Cu;
    SET_GPR_U32(ctx, 31, 0x34D024u);
    ctx->pc = 0x34D020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D01Cu;
    // 0x34d020: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34D01Cu, 0x34D024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D024u;
label_34d024:
    // 0x34d024: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x34d024u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34d028: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x34d028u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34d02c: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x34d02cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34d030: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x34d030u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34d034: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x34d034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_34d038:
    // 0x34d038: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x34d038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x34d03c: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x34d03cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34d040: 0x8c83c60c  lw          $v1, -0x39F4($a0)
    ctx->pc = 0x34d040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294952460)));
    // 0x34d044: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34d044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d048: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x34d048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34d04c: 0x92220045  lbu         $v0, 0x45($s1)
    ctx->pc = 0x34d04cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
    // 0x34d050: 0x544400f5  bnel        $v0, $a0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x34D050u;
    {
        const bool branch_taken_0x34d050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x34d050) {
            ctx->pc = 0x34D054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34D050u;
            // 0x34d054: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34D428u;
            goto label_34d428;
        }
    }
    ctx->pc = 0x34D058u;
    // 0x34d058: 0x92230044  lbu         $v1, 0x44($s1)
    ctx->pc = 0x34d058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x34d05c: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x34D05Cu;
    {
        const bool branch_taken_0x34d05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D05Cu;
        // 0x34d060: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d05c) {
            ctx->pc = 0x34D120u;
            goto label_34d120;
        }
    }
    ctx->pc = 0x34D064u;
    // 0x34d064: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34D064u;
    {
        const bool branch_taken_0x34d064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D064u;
        // 0x34d068: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d064) {
            ctx->pc = 0x34D07Cu;
            goto label_34d07c;
        }
    }
    ctx->pc = 0x34D06Cu;
    // 0x34d06c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34D06Cu;
    {
        const bool branch_taken_0x34d06c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D06Cu;
        // 0x34d070: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d06c) {
            ctx->pc = 0x34D08Cu;
            goto label_34d08c;
        }
    }
    ctx->pc = 0x34D074u;
    // 0x34d074: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x34D074u;
    {
        const bool branch_taken_0x34d074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D074u;
        // 0x34d078: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d074) {
            ctx->pc = 0x34D428u;
            goto label_34d428;
        }
    }
    ctx->pc = 0x34D07Cu;
label_34d07c:
    // 0x34d07c: 0x10620076  beq         $v1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x34D07Cu;
    {
        const bool branch_taken_0x34d07c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34D080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D07Cu;
        // 0x34d080: 0x8e432b00  lw          $v1, 0x2B00($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d07c) {
            ctx->pc = 0x34D258u;
            goto label_34d258;
        }
    }
    ctx->pc = 0x34D084u;
    // 0x34d084: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x34D084u;
    {
        const bool branch_taken_0x34d084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D084u;
        // 0x34d088: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d084) {
            ctx->pc = 0x34D428u;
            goto label_34d428;
        }
    }
    ctx->pc = 0x34D08Cu;
label_34d08c:
    // 0x34d08c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x34d08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34d090: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x34d090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d094: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x34d094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34d098: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x34d098u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x34d09c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x34d09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x34d0a0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x34d0a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x34d0a4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x34d0a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x34d0a8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x34d0a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x34d0ac: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x34d0acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x34d0b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34d0b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34d0b4: 0x0  nop
    ctx->pc = 0x34d0b4u;
    // NOP
    // 0x34d0b8: 0x0  nop
    ctx->pc = 0x34d0b8u;
    // NOP
    // 0x34d0bc: 0x46000004  c1          0x4
    ctx->pc = 0x34d0bcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x34d0c0: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x34d0c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d0c4: 0x0  nop
    ctx->pc = 0x34d0c4u;
    // NOP
    // 0x34d0c8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x34D0C8u;
    {
        const bool branch_taken_0x34d0c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D0C8u;
        // 0x34d0cc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d0c8) {
            ctx->pc = 0x34D0DCu;
            goto label_34d0dc;
        }
    }
    ctx->pc = 0x34D0D0u;
    // 0x34d0d0: 0x90432b94  lbu         $v1, 0x2B94($v0)
    ctx->pc = 0x34d0d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11156)));
    // 0x34d0d4: 0x506000d4  beql        $v1, $zero, . + 4 + (0xD4 << 2)
    ctx->pc = 0x34D0D4u;
    {
        const bool branch_taken_0x34d0d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d0d4) {
            ctx->pc = 0x34D0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34D0D4u;
            // 0x34d0d8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34D428u;
            goto label_34d428;
        }
    }
    ctx->pc = 0x34D0DCu;
label_34d0dc:
    // 0x34d0dc: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34D0DCu;
    SET_GPR_U32(ctx, 31, 0x34D0E4u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34D0DCu, 0x34D0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D0E4u;
label_34d0e4:
    // 0x34d0e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34d0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34d0e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34D0E8u;
    {
        const bool branch_taken_0x34d0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d0e8) {
            ctx->pc = 0x34D100u;
            goto label_34d100;
        }
    }
    ctx->pc = 0x34D0F0u;
    // 0x34d0f0: 0xc0d3650  jal         func_34D940
    ctx->pc = 0x34D0F0u;
    SET_GPR_U32(ctx, 31, 0x34D0F8u);
    ctx->pc = 0x34D0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D0F0u;
    // 0x34d0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D940u, 0x34D0F0u, 0x34D0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D0F8u;
label_34d0f8:
    // 0x34d0f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34D0F8u;
    {
        const bool branch_taken_0x34d0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d0f8) {
            ctx->pc = 0x34D108u;
            goto label_34d108;
        }
    }
    ctx->pc = 0x34D100u;
label_34d100:
    // 0x34d100: 0xc0d356a  jal         func_34D5A8
    ctx->pc = 0x34D100u;
    SET_GPR_U32(ctx, 31, 0x34D108u);
    ctx->pc = 0x34D104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D100u;
    // 0x34d104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D5A8u, 0x34D100u, 0x34D108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D108u;
label_34d108:
    // 0x34d108: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34D108u;
    SET_GPR_U32(ctx, 31, 0x34D110u);
    ctx->pc = 0x34D10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D108u;
    // 0x34d10c: 0x8e502b00  lw          $s0, 0x2B00($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11008)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34D108u, 0x34D110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D110u;
label_34d110:
    // 0x34d110: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x34d110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x34d114: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x34d114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x34d118: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x34D118u;
    {
        const bool branch_taken_0x34d118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D118u;
        // 0x34d11c: 0xae30003c  sw          $s0, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d118) {
            ctx->pc = 0x34D424u;
            goto label_34d424;
        }
    }
    ctx->pc = 0x34D120u;
label_34d120:
    // 0x34d120: 0x8e432b00  lw          $v1, 0x2B00($s2)
    ctx->pc = 0x34d120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11008)));
    // 0x34d124: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x34d124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x34d128: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x34d128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34d12c: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x34D12Cu;
    {
        const bool branch_taken_0x34d12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D12Cu;
        // 0x34d130: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d12c) {
            ctx->pc = 0x34D424u;
            goto label_34d424;
        }
    }
    ctx->pc = 0x34D134u;
    // 0x34d134: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34d134u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34d138: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x34d138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34d13c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x34d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x34d140: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x34d140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x34d144: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34d144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d148: 0xc4612b30  lwc1        $f1, 0x2B30($v1)
    ctx->pc = 0x34d148u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d14c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34d14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34d150: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34d150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34d154: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x34d154u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34d158: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x34d158u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d15c: 0x0  nop
    ctx->pc = 0x34d15cu;
    // NOP
    // 0x34d160: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x34D160u;
    {
        const bool branch_taken_0x34d160 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D160u;
        // 0x34d164: 0x46000a06  mov.s       $f8, $f1 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d160) {
            ctx->pc = 0x34D16Cu;
            goto label_34d16c;
        }
    }
    ctx->pc = 0x34D168u;
    // 0x34d168: 0x46001206  mov.s       $f8, $f2
    ctx->pc = 0x34d168u;
    ctx->f[8] = FPU_MOV_S(ctx->f[2]);
label_34d16c:
    // 0x34d16c: 0x46081041  sub.s       $f1, $f2, $f8
    ctx->pc = 0x34d16cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x34d170: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x34d170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x34d174: 0xc6250010  lwc1        $f5, 0x10($s1)
    ctx->pc = 0x34d174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x34d178: 0xc4460004  lwc1        $f6, 0x4($v0)
    ctx->pc = 0x34d178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x34d17c: 0xc4470008  lwc1        $f7, 0x8($v0)
    ctx->pc = 0x34d17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x34d180: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x34d180u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x34d184: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x34d184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d188: 0x46060982  mul.s       $f6, $f1, $f6
    ctx->pc = 0x34d188u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x34d18c: 0x460709c2  mul.s       $f7, $f1, $f7
    ctx->pc = 0x34d18cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x34d190: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x34d190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34d194: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x34d194u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34d198: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x34d198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34d19c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x34d19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34d1a0: 0x46044102  mul.s       $f4, $f8, $f4
    ctx->pc = 0x34d1a0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x34d1a4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x34d1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d1a8: 0x460340c2  mul.s       $f3, $f8, $f3
    ctx->pc = 0x34d1a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x34d1ac: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x34d1acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x34d1b0: 0xe7a50040  swc1        $f5, 0x40($sp)
    ctx->pc = 0x34d1b0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x34d1b4: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x34d1b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x34d1b8: 0xe7a60044  swc1        $f6, 0x44($sp)
    ctx->pc = 0x34d1b8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x34d1bc: 0xe7a70048  swc1        $f7, 0x48($sp)
    ctx->pc = 0x34d1bcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x34d1c0: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x34d1c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x34d1c4: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x34d1c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x34d1c8: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x34d1c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x34d1cc: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x34d1ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x34d1d0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x34d1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x34d1d4: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x34d1d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x34d1d8: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x34d1d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x34d1dc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34d1dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34d1e0: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x34d1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34d1e4: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x34d1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d1e8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x34d1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d1ec: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x34d1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34d1f0: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x34d1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34d1f4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x34d1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x34d1f8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x34d1f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x34d1fc: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x34d1fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x34d200: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x34d200u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x34d204: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x34d204u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x34d208: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x34d208u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34d20c: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x34d20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34d210: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x34d210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d214: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x34d214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34d218: 0xc4602b30  lwc1        $f0, 0x2B30($v1)
    ctx->pc = 0x34d218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d21c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x34d21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34d220: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x34d220u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x34d224: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x34d224u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34d228: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34d228u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34d22c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x34d22cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x34d230: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x34d230u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x34d234: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x34d234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x34d238: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x34d238u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x34d23c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x34d23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x34d240: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x34d240u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34d244: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x34d244u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x34d248: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34d248u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34d24c: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x34d24cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34d250: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x34D250u;
    {
        const bool branch_taken_0x34d250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D250u;
        // 0x34d254: 0xc7ac0020  lwc1        $f12, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d250) {
            ctx->pc = 0x34D3F0u;
            goto label_34d3f0;
        }
    }
    ctx->pc = 0x34D258u;
label_34d258:
    // 0x34d258: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x34d258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x34d25c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x34d25cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34d260: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x34D260u;
    {
        const bool branch_taken_0x34d260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D260u;
        // 0x34d264: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d260) {
            ctx->pc = 0x34D424u;
            goto label_34d424;
        }
    }
    ctx->pc = 0x34D268u;
    // 0x34d268: 0x8ca3bd48  lw          $v1, -0x42B8($a1)
    ctx->pc = 0x34d268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950216)));
    // 0x34d26c: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x34d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x34d270: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x34d270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x34d274: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34d274u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34d278: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x34d278u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34d27c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34d27cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34d280: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x34d280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34d284: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x34d284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d288: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x34d288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34d28c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x34d28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d290: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x34d290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34d294: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x34d294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34d298: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x34d298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34d29c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x34d29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x34d2a0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x34d2a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x34d2a4: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x34d2a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x34d2a8: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x34d2a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x34d2ac: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x34d2acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34d2b0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x34d2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34d2b4: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x34d2b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x34d2b8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x34d2b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34d2bc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x34d2bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34d2c0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x34d2c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34d2c4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x34d2c4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x34d2c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x34d2c8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x34d2cc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x34d2ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34d2d0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x34d2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34d2d4: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x34d2d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x34d2d8: 0x48be1000  qmtc2.ni    $fp, $vf2
    ctx->pc = 0x34d2d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 30));
    // 0x34d2dc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34d2dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34d2e0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x34d2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34d2e4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x34d2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x34d2e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34d2e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34d2ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34d2ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d2f0: 0xc4a02b30  lwc1        $f0, 0x2B30($a1)
    ctx->pc = 0x34d2f0u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d2f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34d2f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d2f8: 0x0  nop
    ctx->pc = 0x34d2f8u;
    // NOP
    // 0x34d2fc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x34D2FCu;
    {
        const bool branch_taken_0x34d2fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D2FCu;
        // 0x34d300: 0x46000206  mov.s       $f8, $f0 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d2fc) {
            ctx->pc = 0x34D308u;
            goto label_34d308;
        }
    }
    ctx->pc = 0x34D304u;
    // 0x34d304: 0x46000a06  mov.s       $f8, $f1
    ctx->pc = 0x34d304u;
    ctx->f[8] = FPU_MOV_S(ctx->f[1]);
label_34d308:
    // 0x34d308: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x34d308u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x34d30c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x34d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x34d310: 0xc6250010  lwc1        $f5, 0x10($s1)
    ctx->pc = 0x34d310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x34d314: 0xc4460004  lwc1        $f6, 0x4($v0)
    ctx->pc = 0x34d314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x34d318: 0xc4470008  lwc1        $f7, 0x8($v0)
    ctx->pc = 0x34d318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x34d31c: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x34d31cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x34d320: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x34d320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d324: 0x46060982  mul.s       $f6, $f1, $f6
    ctx->pc = 0x34d324u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x34d328: 0x460709c2  mul.s       $f7, $f1, $f7
    ctx->pc = 0x34d328u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x34d32c: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x34d32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34d330: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x34d330u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34d334: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x34d334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34d338: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x34d338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34d33c: 0x46044102  mul.s       $f4, $f8, $f4
    ctx->pc = 0x34d33cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x34d340: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x34d340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d344: 0x460340c2  mul.s       $f3, $f8, $f3
    ctx->pc = 0x34d344u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x34d348: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x34d348u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x34d34c: 0xe7a50040  swc1        $f5, 0x40($sp)
    ctx->pc = 0x34d34cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x34d350: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x34d350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x34d354: 0xe7a60044  swc1        $f6, 0x44($sp)
    ctx->pc = 0x34d354u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x34d358: 0xe7a70048  swc1        $f7, 0x48($sp)
    ctx->pc = 0x34d358u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x34d35c: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x34d35cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x34d360: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x34d360u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x34d364: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x34d364u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x34d368: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x34d368u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x34d36c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x34d36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x34d370: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x34d370u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34d374: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x34d374u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x34d378: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34d378u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34d37c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x34d37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34d380: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x34d380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d384: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x34d384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d388: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x34d388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34d38c: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x34d38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34d390: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x34d390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x34d394: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x34d394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x34d398: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x34d398u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x34d39c: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x34d39cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x34d3a0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x34d3a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34d3a4: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x34d3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34d3a8: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x34d3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34d3ac: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x34d3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d3b0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x34d3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34d3b4: 0xc4a02b30  lwc1        $f0, 0x2B30($a1)
    ctx->pc = 0x34d3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d3b8: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x34d3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34d3bc: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x34d3bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x34d3c0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x34d3c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34d3c4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x34d3c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x34d3c8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x34d3c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x34d3cc: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x34d3ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x34d3d0: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x34d3d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x34d3d4: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x34d3d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x34d3d8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x34d3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x34d3dc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x34d3dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34d3e0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x34d3e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34d3e4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34d3e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34d3e8: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x34d3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34d3ec: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x34d3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_34d3f0:
    // 0x34d3f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34d3f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d3f4: 0x0  nop
    ctx->pc = 0x34d3f4u;
    // NOP
    // 0x34d3f8: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x34d3f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d3fc: 0x0  nop
    ctx->pc = 0x34d3fcu;
    // NOP
    // 0x34d400: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x34D400u;
    {
        const bool branch_taken_0x34d400 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D400u;
        // 0x34d404: 0xc7ad0028  lwc1        $f13, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d400) {
            ctx->pc = 0x34D418u;
            goto label_34d418;
        }
    }
    ctx->pc = 0x34D408u;
    // 0x34d408: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x34d408u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d40c: 0x0  nop
    ctx->pc = 0x34d40cu;
    // NOP
    // 0x34d410: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x34D410u;
    {
        const bool branch_taken_0x34d410 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34d410) {
            ctx->pc = 0x34D414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34D410u;
            // 0x34d414: 0xe6200034  swc1        $f0, 0x34($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34D424u;
            goto label_34d424;
        }
    }
    ctx->pc = 0x34D418u;
label_34d418:
    // 0x34d418: 0xc0e404c  jal         func_390130
    ctx->pc = 0x34D418u;
    SET_GPR_U32(ctx, 31, 0x34D420u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x34D418u, 0x34D420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D420u;
label_34d420:
    // 0x34d420: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x34d420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_34d424:
    // 0x34d424: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x34d424u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_34d428:
    // 0x34d428: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x34d428u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x34d42c: 0x5440ff02  bnel        $v0, $zero, . + 4 + (-0xFE << 2)
    ctx->pc = 0x34D42Cu;
    {
        const bool branch_taken_0x34d42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d42c) {
            ctx->pc = 0x34D430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34D42Cu;
            // 0x34d430: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34D038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d038;
        }
    }
    ctx->pc = 0x34D434u;
    // 0x34d434: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x34d434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x34d438: 0xdfb10138  ld          $s1, 0x138($sp)
    ctx->pc = 0x34d438u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x34d43c: 0xdfb20140  ld          $s2, 0x140($sp)
    ctx->pc = 0x34d43cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x34d440: 0xdfb30148  ld          $s3, 0x148($sp)
    ctx->pc = 0x34d440u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x34d444: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x34d444u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x34d448: 0xdfb50158  ld          $s5, 0x158($sp)
    ctx->pc = 0x34d448u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34d44c: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x34d44cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x34d450: 0xdfb70168  ld          $s7, 0x168($sp)
    ctx->pc = 0x34d450u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x34d454: 0xdfbe0170  ld          $fp, 0x170($sp)
    ctx->pc = 0x34d454u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x34d458: 0xdfbf0178  ld          $ra, 0x178($sp)
    ctx->pc = 0x34d458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x34d45c: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x34d45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34d460: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x34d460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34d464: 0x3e00008  jr          $ra
    ctx->pc = 0x34D464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D464u;
        // 0x34d468: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D46Cu;
    // 0x34d46c: 0x0  nop
    ctx->pc = 0x34d46cu;
    // NOP
    ctx->pc = 0x34d470u;
}
