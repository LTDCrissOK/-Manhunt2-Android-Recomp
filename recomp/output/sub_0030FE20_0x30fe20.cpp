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

// Function: sub_0030FE20
// Address: 0x30fe20 - 0x310c48
void sub_0030FE20_0x30fe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030FE20_0x30fe20");
#endif

    switch (ctx->pc) {
        case 0x30fe90u: goto label_30fe90;
        case 0x30fea8u: goto label_30fea8;
        case 0x30ffa8u: goto label_30ffa8;
        case 0x310030u: goto label_310030;
        case 0x310188u: goto label_310188;
        case 0x3101ccu: goto label_3101cc;
        case 0x31022cu: goto label_31022c;
        case 0x310234u: goto label_310234;
        case 0x310334u: goto label_310334;
        case 0x310378u: goto label_310378;
        case 0x3103d0u: goto label_3103d0;
        case 0x3103f0u: goto label_3103f0;
        case 0x310434u: goto label_310434;
        case 0x310444u: goto label_310444;
        case 0x310454u: goto label_310454;
        case 0x31048cu: goto label_31048c;
        case 0x3104dcu: goto label_3104dc;
        case 0x310510u: goto label_310510;
        case 0x310520u: goto label_310520;
        case 0x310720u: goto label_310720;
        case 0x310860u: goto label_310860;
        case 0x3108e4u: goto label_3108e4;
        case 0x3108ecu: goto label_3108ec;
        case 0x310944u: goto label_310944;
        case 0x310ae4u: goto label_310ae4;
        case 0x310bbcu: goto label_310bbc;
        default: break;
    }

    ctx->pc = 0x30fe20u;

    // 0x30fe20: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x30fe20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x30fe24: 0xffb10148  sd          $s1, 0x148($sp)
    ctx->pc = 0x30fe24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 17));
    // 0x30fe28: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x30fe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x30fe2c: 0xffb00140  sd          $s0, 0x140($sp)
    ctx->pc = 0x30fe2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 16));
    // 0x30fe30: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x30fe30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fe34: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x30fe34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
    // 0x30fe38: 0xffb30158  sd          $s3, 0x158($sp)
    ctx->pc = 0x30fe38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 19));
    // 0x30fe3c: 0xffb40160  sd          $s4, 0x160($sp)
    ctx->pc = 0x30fe3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 20));
    // 0x30fe40: 0xffb50168  sd          $s5, 0x168($sp)
    ctx->pc = 0x30fe40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 21));
    // 0x30fe44: 0xffb70178  sd          $s7, 0x178($sp)
    ctx->pc = 0x30fe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 23));
    // 0x30fe48: 0xffbe0180  sd          $fp, 0x180($sp)
    ctx->pc = 0x30fe48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 30));
    // 0x30fe4c: 0xffbf0188  sd          $ra, 0x188($sp)
    ctx->pc = 0x30fe4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 31));
    // 0x30fe50: 0xe7b901b8  swc1        $f25, 0x1B8($sp)
    ctx->pc = 0x30fe50u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x30fe54: 0xe7b801b0  swc1        $f24, 0x1B0($sp)
    ctx->pc = 0x30fe54u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x30fe58: 0xe7b701a8  swc1        $f23, 0x1A8($sp)
    ctx->pc = 0x30fe58u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x30fe5c: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x30fe5cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x30fe60: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x30fe60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x30fe64: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x30fe64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x30fe68: 0x8ec200bc  lw          $v0, 0xBC($s6)
    ctx->pc = 0x30fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 188)));
    // 0x30fe6c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x30fe6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x30fe70: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x30FE70u;
    {
        const bool branch_taken_0x30fe70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FE70u;
        // 0x30fe74: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fe70) {
            ctx->pc = 0x30FED0u;
            goto label_30fed0;
        }
    }
    ctx->pc = 0x30FE78u;
    // 0x30fe78: 0x8ec30418  lw          $v1, 0x418($s6)
    ctx->pc = 0x30fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1048)));
    // 0x30fe7c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30fe80: 0x1062035e  beq         $v1, $v0, . + 4 + (0x35E << 2)
    ctx->pc = 0x30FE80u;
    {
        const bool branch_taken_0x30fe80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FE80u;
        // 0x30fe84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fe80) {
            ctx->pc = 0x310BFCu;
            goto label_310bfc;
        }
    }
    ctx->pc = 0x30FE88u;
    // 0x30fe88: 0xc092432  jal         func_2490C8
    ctx->pc = 0x30FE88u;
    SET_GPR_U32(ctx, 31, 0x30FE90u);
    ctx->pc = 0x30FE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FE88u;
    // 0x30fe8c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2490C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490C8u, 0x30FE88u, 0x30FE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FE90u;
label_30fe90:
    // 0x30fe90: 0x1440035a  bnez        $v0, . + 4 + (0x35A << 2)
    ctx->pc = 0x30FE90u;
    {
        const bool branch_taken_0x30fe90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FE90u;
        // 0x30fe94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fe90) {
            ctx->pc = 0x310BFCu;
            goto label_310bfc;
        }
    }
    ctx->pc = 0x30FE98u;
    // 0x30fe98: 0x8e220800  lw          $v0, 0x800($s1)
    ctx->pc = 0x30fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
    // 0x30fe9c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30FE9Cu;
    {
        const bool branch_taken_0x30fe9c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FE9Cu;
        // 0x30fea0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fe9c) {
            ctx->pc = 0x30FEC8u;
            goto label_30fec8;
        }
    }
    ctx->pc = 0x30FEA4u;
    // 0x30fea4: 0x26230804  addiu       $v1, $s1, 0x804
    ctx->pc = 0x30fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2052));
label_30fea8:
    // 0x30fea8: 0x8c62fe6c  lw          $v0, -0x194($v1)
    ctx->pc = 0x30fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966892)));
    // 0x30feac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30feacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30feb0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x30feb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x30feb4: 0x8e220800  lw          $v0, 0x800($s1)
    ctx->pc = 0x30feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
    // 0x30feb8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x30feb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30febc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30FEBCu;
    {
        const bool branch_taken_0x30febc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FEBCu;
        // 0x30fec0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30febc) {
            ctx->pc = 0x30FEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30fea8;
        }
    }
    ctx->pc = 0x30FEC4u;
    // 0x30fec4: 0x8e220800  lw          $v0, 0x800($s1)
    ctx->pc = 0x30fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
label_30fec8:
    // 0x30fec8: 0xae200800  sw          $zero, 0x800($s1)
    ctx->pc = 0x30fec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2048), GPR_U32(ctx, 0));
    // 0x30fecc: 0xae220994  sw          $v0, 0x994($s1)
    ctx->pc = 0x30feccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2452), GPR_U32(ctx, 2));
label_30fed0:
    // 0x30fed0: 0x8e22055c  lw          $v0, 0x55C($s1)
    ctx->pc = 0x30fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1372)));
    // 0x30fed4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x30fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30fed8: 0x9225055c  lbu         $a1, 0x55C($s1)
    ctx->pc = 0x30fed8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1372)));
    // 0x30fedc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x30fedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30fee0: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x30fee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x30fee4: 0x8e270530  lw          $a3, 0x530($s1)
    ctx->pc = 0x30fee4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1328)));
    // 0x30fee8: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x30fee8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x30feec: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x30feecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x30fef0: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x30fef0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30fef4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x30FEF4u;
    {
        const bool branch_taken_0x30fef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fef4) {
            ctx->pc = 0x30FEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FEF4u;
            // 0x30fef8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FEFCu;
            goto label_30fefc;
        }
    }
    ctx->pc = 0x30FEFCu;
label_30fefc:
    // 0x30fefc: 0x8ec200bc  lw          $v0, 0xBC($s6)
    ctx->pc = 0x30fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 188)));
    // 0x30ff00: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30ff04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x30ff04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30ff08: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x30ff08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x30ff0c: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x30ff0cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x30ff10: 0x3012  mflo        $a2
    ctx->pc = 0x30ff10u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x30ff14: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x30ff14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x30ff18: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x30ff18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x30ff1c: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x30ff1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x30ff20: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x30ff20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ff24: 0xafa60124  sw          $a2, 0x124($sp)
    ctx->pc = 0x30ff24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 6));
    // 0x30ff28: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x30ff28u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x30ff2c: 0x28e7000a  slti        $a3, $a3, 0xA
    ctx->pc = 0x30ff2cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x30ff30: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x30ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
    // 0x30ff34: 0x24840210  addiu       $a0, $a0, 0x210
    ctx->pc = 0x30ff34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 528));
    // 0x30ff38: 0x10e0032f  beqz        $a3, . + 4 + (0x32F << 2)
    ctx->pc = 0x30FF38u;
    {
        const bool branch_taken_0x30ff38 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FF38u;
        // 0x30ff3c: 0x2249821  addu        $s3, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff38) {
            ctx->pc = 0x310BF8u;
            goto label_310bf8;
        }
    }
    ctx->pc = 0x30FF40u;
    // 0x30ff40: 0x8ec30104  lw          $v1, 0x104($s6)
    ctx->pc = 0x30ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
    // 0x30ff44: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x30ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x30ff48: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x30ff48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
    // 0x30ff4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30ff4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ff50: 0x8c44bd48  lw          $a0, -0x42B8($v0)
    ctx->pc = 0x30ff50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x30ff54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30ff58: 0xafa5012c  sw          $a1, 0x12C($sp)
    ctx->pc = 0x30ff58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 5));
    // 0x30ff5c: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x30ff5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x30ff60: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x30ff60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ff64: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x30ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x30ff68: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x30ff68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30ff6c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x30ff6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ff70: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x30ff70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30ff74: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x30ff74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ff78: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x30ff78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30ff7c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x30ff7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ff80: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x30ff80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x30ff84: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x30ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x30ff88: 0x24500070  addiu       $s0, $v0, 0x70
    ctx->pc = 0x30ff88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x30ff8c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x30ff8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ff90: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x30ff90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ff94: 0x0  nop
    ctx->pc = 0x30ff94u;
    // NOP
    // 0x30ff98: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x30FF98u;
    {
        const bool branch_taken_0x30ff98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ff98) {
            ctx->pc = 0x30FF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FF98u;
            // 0x30ff9c: 0xafa0012c  sw          $zero, 0x12C($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FFA0u;
            goto label_30ffa0;
        }
    }
    ctx->pc = 0x30FFA0u;
label_30ffa0:
    // 0x30ffa0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30FFA0u;
    SET_GPR_U32(ctx, 31, 0x30FFA8u);
    ctx->pc = 0x30FFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FFA0u;
    // 0x30ffa4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30FFA0u, 0x30FFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FFA8u;
label_30ffa8:
    // 0x30ffa8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x30ffa8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30ffac: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x30ffacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ffb0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x30ffb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30ffb4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x30ffb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30ffb8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x30ffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30ffbc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x30ffbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ffc0: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x30ffc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30ffc4: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x30ffc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30ffc8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x30ffc8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x30ffcc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x30ffccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x30ffd0: 0x4604259c  madd.s      $f22, $f4, $f4
    ctx->pc = 0x30ffd0u;
    ctx->f[22] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x30ffd4: 0x8ec200bc  lw          $v0, 0xBC($s6)
    ctx->pc = 0x30ffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 188)));
    // 0x30ffd8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x30ffd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x30ffdc: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x30ffdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x30ffe0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30FFE0u;
    {
        const bool branch_taken_0x30ffe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FFE0u;
        // 0x30ffe4: 0xafa00130  sw          $zero, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ffe0) {
            ctx->pc = 0x30FFFCu;
            goto label_30fffc;
        }
    }
    ctx->pc = 0x30FFE8u;
    // 0x30ffe8: 0x8ec30334  lw          $v1, 0x334($s6)
    ctx->pc = 0x30ffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 820)));
    // 0x30ffec: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x30ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x30fff0: 0x2442ffed  addiu       $v0, $v0, -0x13
    ctx->pc = 0x30fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967277));
    // 0x30fff4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x30fff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x30fff8: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x30fff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_30fffc:
    // 0x30fffc: 0x8e2201f0  lw          $v0, 0x1F0($s1)
    ctx->pc = 0x30fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x310000: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x310000u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310004: 0x18400223  blez        $v0, . + 4 + (0x223 << 2)
    ctx->pc = 0x310004u;
    {
        const bool branch_taken_0x310004 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x310008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310004u;
        // 0x310008: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310004) {
            ctx->pc = 0x310894u;
            goto label_310894;
        }
    }
    ctx->pc = 0x31000Cu;
    // 0x31000c: 0x8e320060  lw          $s2, 0x60($s1)
    ctx->pc = 0x31000cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x310010: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x310010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x310014: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x310014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x310018: 0x54400211  bnel        $v0, $zero, . + 4 + (0x211 << 2)
    ctx->pc = 0x310018u;
    {
        const bool branch_taken_0x310018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x310018) {
            ctx->pc = 0x31001Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310018u;
            // 0x31001c: 0x8e2201f0  lw          $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310860u;
            goto label_310860;
        }
    }
    ctx->pc = 0x310020u;
    // 0x310020: 0x9222057d  lbu         $v0, 0x57D($s1)
    ctx->pc = 0x310020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1405)));
    // 0x310024: 0x5040021c  beql        $v0, $zero, . + 4 + (0x21C << 2)
    ctx->pc = 0x310024u;
    {
        const bool branch_taken_0x310024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310024) {
            ctx->pc = 0x310028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310024u;
            // 0x310028: 0x8e220530  lw          $v0, 0x530($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310898u;
            goto label_310898;
        }
    }
    ctx->pc = 0x31002Cu;
    // 0x31002c: 0x265502b0  addiu       $s5, $s2, 0x2B0
    ctx->pc = 0x31002cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 688));
label_310030:
    // 0x310030: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x310030u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x310034: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x310034u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310038: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x310038u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31003c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x31003cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x310040: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x310040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x310044: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x310044u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310048: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x310048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31004c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x31004cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310050: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x310050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310054: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x310054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x310058: 0xafb50134  sw          $s5, 0x134($sp)
    ctx->pc = 0x310058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 21));
    // 0x31005c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x31005cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x310060: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x310060u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x310064: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x310064u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x310068: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x310068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x31006c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31006cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310070: 0x92420292  lbu         $v0, 0x292($s2)
    ctx->pc = 0x310070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 658)));
    // 0x310074: 0x46001d41  sub.s       $f21, $f3, $f0
    ctx->pc = 0x310074u;
    ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x310078: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x310078u;
    {
        const bool branch_taken_0x310078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310078u;
        // 0x31007c: 0xc6210574  lwc1        $f1, 0x574($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310078) {
            ctx->pc = 0x3100A0u;
            goto label_3100a0;
        }
    }
    ctx->pc = 0x310080u;
    // 0x310080: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x310080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x310084: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x310084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310088: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x310088u;
    {
        const bool branch_taken_0x310088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x310088) {
            ctx->pc = 0x31008Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310088u;
            // 0x31008c: 0xc4410024  lwc1        $f1, 0x24($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x310090u;
            goto label_310090;
        }
    }
    ctx->pc = 0x310090u;
label_310090:
    // 0x310090: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x310090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x310094: 0xc440bcd0  lwc1        $f0, -0x4330($v0)
    ctx->pc = 0x310094u;
    { uint32_t bits = FAST_READ32(0x3FBCD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310098: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x310098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31009c: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x31009cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_3100a0:
    // 0x3100a0: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x3100a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x3100a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3100a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3100a8: 0x0  nop
    ctx->pc = 0x3100a8u;
    // NOP
    // 0x3100ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3100acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3100b0: 0x0  nop
    ctx->pc = 0x3100b0u;
    // NOP
    // 0x3100b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3100B4u;
    {
        const bool branch_taken_0x3100b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3100B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100B4u;
        // 0x3100b8: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100b4) {
            ctx->pc = 0x3100C0u;
            goto label_3100c0;
        }
    }
    ctx->pc = 0x3100BCu;
    // 0x3100bc: 0x46000dc6  mov.s       $f23, $f1
    ctx->pc = 0x3100bcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[1]);
label_3100c0:
    // 0x3100c0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x3100c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3100c4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3100c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3100c8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x3100c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3100cc: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x3100ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3100d0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3100d0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x3100d4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x3100d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x3100d8: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x3100d8u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x3100dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3100dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3100e0: 0x0  nop
    ctx->pc = 0x3100e0u;
    // NOP
    // 0x3100e4: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x3100e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3100e8: 0x0  nop
    ctx->pc = 0x3100e8u;
    // NOP
    // 0x3100ec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3100ECu;
    {
        const bool branch_taken_0x3100ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3100F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100ECu;
        // 0x3100f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100ec) {
            ctx->pc = 0x3100F8u;
            goto label_3100f8;
        }
    }
    ctx->pc = 0x3100F4u;
    // 0x3100f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3100f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3100f8:
    // 0x3100f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3100f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3100fc: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3100FCu;
    {
        const bool branch_taken_0x3100fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x310100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100FCu;
        // 0x310100: 0x8fa4012c  lw          $a0, 0x12C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100fc) {
            ctx->pc = 0x310114u;
            goto label_310114;
        }
    }
    ctx->pc = 0x310104u;
    // 0x310104: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x310104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x310108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x310108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31010c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x31010Cu;
    {
        const bool branch_taken_0x31010c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31010Cu;
        // 0x310110: 0x43b80b  movn        $s7, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31010c) {
            ctx->pc = 0x310174u;
            goto label_310174;
        }
    }
    ctx->pc = 0x310114u;
label_310114:
    // 0x310114: 0x2c900001  sltiu       $s0, $a0, 0x1
    ctx->pc = 0x310114u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x310118: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x310118u;
    {
        const bool branch_taken_0x310118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x310118) {
            ctx->pc = 0x31011Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310118u;
            // 0x31011c: 0x8ec200bc  lw          $v0, 0xBC($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310178u;
            goto label_310178;
        }
    }
    ctx->pc = 0x310120u;
    // 0x310120: 0x92420297  lbu         $v0, 0x297($s2)
    ctx->pc = 0x310120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 663)));
    // 0x310124: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x310124u;
    {
        const bool branch_taken_0x310124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x310124) {
            ctx->pc = 0x310154u;
            goto label_310154;
        }
    }
    ctx->pc = 0x31012Cu;
    // 0x31012c: 0x3c014470  lui         $at, 0x4470
    ctx->pc = 0x31012cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17520 << 16));
    // 0x310130: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x310130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x310134: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x310134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310138: 0x0  nop
    ctx->pc = 0x310138u;
    // NOP
    // 0x31013c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x31013cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310140: 0x0  nop
    ctx->pc = 0x310140u;
    // NOP
    // 0x310144: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x310144u;
    {
        const bool branch_taken_0x310144 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x310148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310144u;
        // 0x310148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310144) {
            ctx->pc = 0x310150u;
            goto label_310150;
        }
    }
    ctx->pc = 0x31014Cu;
    // 0x31014c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31014cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_310150:
    // 0x310150: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x310150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_310154:
    // 0x310154: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x310154u;
    {
        const bool branch_taken_0x310154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x310154) {
            ctx->pc = 0x310158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310154u;
            // 0x310158: 0x8ec200bc  lw          $v0, 0xBC($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310178u;
            goto label_310178;
        }
    }
    ctx->pc = 0x31015Cu;
    // 0x31015c: 0x4617a036  c.le.s      $f20, $f23
    ctx->pc = 0x31015cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310160: 0x0  nop
    ctx->pc = 0x310160u;
    // NOP
    // 0x310164: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x310164u;
    {
        const bool branch_taken_0x310164 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x310168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310164u;
        // 0x310168: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310164) {
            ctx->pc = 0x310170u;
            goto label_310170;
        }
    }
    ctx->pc = 0x31016Cu;
    // 0x31016c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31016cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_310170:
    // 0x310170: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x310170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_310174:
    // 0x310174: 0x8ec200bc  lw          $v0, 0xBC($s6)
    ctx->pc = 0x310174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 188)));
label_310178:
    // 0x310178: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x310178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x31017c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x31017Cu;
    {
        const bool branch_taken_0x31017c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31017Cu;
        // 0x310180: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31017c) {
            ctx->pc = 0x3101F0u;
            goto label_3101f0;
        }
    }
    ctx->pc = 0x310184u;
    // 0x310184: 0x0  nop
    ctx->pc = 0x310184u;
    // NOP
label_310188:
    // 0x310188: 0x2882000a  slti        $v0, $a0, 0xA
    ctx->pc = 0x310188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x31018c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x31018Cu;
    {
        const bool branch_taken_0x31018c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31018Cu;
        // 0x310190: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31018c) {
            ctx->pc = 0x3101CCu;
            goto label_3101cc;
        }
    }
    ctx->pc = 0x310194u;
    // 0x310194: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x310194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x310198: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x310198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x31019c: 0x8c430584  lw          $v1, 0x584($v0)
    ctx->pc = 0x31019cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1412)));
    // 0x3101a0: 0x5472fff9  bnel        $v1, $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3101A0u;
    {
        const bool branch_taken_0x3101a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x3101a0) {
            ctx->pc = 0x3101A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3101A0u;
            // 0x3101a4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310188;
        }
    }
    ctx->pc = 0x3101A8u;
    // 0x3101a8: 0x851018  mult        $v0, $a0, $a1
    ctx->pc = 0x3101a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3101ac: 0x24420580  addiu       $v0, $v0, 0x580
    ctx->pc = 0x3101acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x3101b0: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x3101b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3101b4: 0x92830011  lbu         $v1, 0x11($s4)
    ctx->pc = 0x3101b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 17)));
    // 0x3101b8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3101B8u;
    {
        const bool branch_taken_0x3101b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3101BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101B8u;
        // 0x3101bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3101b8) {
            ctx->pc = 0x3101CCu;
            goto label_3101cc;
        }
    }
    ctx->pc = 0x3101C0u;
    // 0x3101c0: 0x92820012  lbu         $v0, 0x12($s4)
    ctx->pc = 0x3101c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x3101c4: 0xc0c9a70  jal         func_3269C0
    ctx->pc = 0x3101C4u;
    SET_GPR_U32(ctx, 31, 0x3101CCu);
    ctx->pc = 0x3101C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3101C4u;
    // 0x3101c8: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3269C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3269C0u, 0x3101C4u, 0x3101CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3101CCu;
label_3101cc:
    // 0x3101cc: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x3101CCu;
    {
        const bool branch_taken_0x3101cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3101D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101CCu;
        // 0x3101d0: 0xc7a20004  lwc1        $f2, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3101cc) {
            ctx->pc = 0x3101F8u;
            goto label_3101f8;
        }
    }
    ctx->pc = 0x3101D4u;
    // 0x3101d4: 0x8e220800  lw          $v0, 0x800($s1)
    ctx->pc = 0x3101d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
    // 0x3101d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3101d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3101dc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3101dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3101e0: 0xac520670  sw          $s2, 0x670($v0)
    ctx->pc = 0x3101e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1648), GPR_U32(ctx, 18));
    // 0x3101e4: 0x8e230800  lw          $v1, 0x800($s1)
    ctx->pc = 0x3101e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
    // 0x3101e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3101e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3101ec: 0xae230800  sw          $v1, 0x800($s1)
    ctx->pc = 0x3101ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2048), GPR_U32(ctx, 3));
label_3101f0:
    // 0x3101f0: 0x1200019a  beqz        $s0, . + 4 + (0x19A << 2)
    ctx->pc = 0x3101F0u;
    {
        const bool branch_taken_0x3101f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3101F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101F0u;
        // 0x3101f4: 0xc7a20004  lwc1        $f2, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3101f0) {
            ctx->pc = 0x31085Cu;
            goto label_31085c;
        }
    }
    ctx->pc = 0x3101F8u;
label_3101f8:
    // 0x3101f8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3101f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3101fc: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x3101fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x310200: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x310200u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x310204: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x310204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310208: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x310208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31020c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x31020cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x310210: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x310210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310214: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x310214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310218: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x310218u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x31021c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x31021cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x310220: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x310220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x310224: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x310224u;
    SET_GPR_U32(ctx, 31, 0x31022Cu);
    ctx->pc = 0x310228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310224u;
    // 0x310228: 0xe7a20034  swc1        $f2, 0x34($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x310224u, 0x31022Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31022Cu;
label_31022c:
    // 0x31022c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x31022Cu;
    SET_GPR_U32(ctx, 31, 0x310234u);
    ctx->pc = 0x310230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31022Cu;
    // 0x310230: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x31022Cu, 0x310234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310234u;
label_310234:
    // 0x310234: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x310234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x310238: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x310238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x31023c: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x31023cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x310240: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x310240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x310244: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x310244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x310248: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x310248u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31024c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x31024cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x310250: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x310250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x310254: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x310254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x310258: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x310258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x31025c: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x31025cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x310260: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x310260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x310264: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x310264u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x310268: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x310268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31026c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x31026cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x310270: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x310270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x310274: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x310274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x310278: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x310278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x31027c: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x31027cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x310280: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x310280u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x310284: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x310284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x310288: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x310288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x31028c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x31028cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x310290: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x310290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x310294: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x310294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x310298: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x310298u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31029c: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x31029cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3102a0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3102a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x3102a4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3102a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x3102a8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x3102a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3102ac: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x3102acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3102b0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3102b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3102b4: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x3102b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3102b8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x3102b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3102bc: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x3102bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3102c0: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x3102c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3102c4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3102c4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x3102c8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x3102c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x3102cc: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x3102ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x3102d0: 0x0  nop
    ctx->pc = 0x3102d0u;
    // NOP
    // 0x3102d4: 0x0  nop
    ctx->pc = 0x3102d4u;
    // NOP
    // 0x3102d8: 0x46010084  c1          0x10084
    ctx->pc = 0x3102d8u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x3102dc: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x3102dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x3102e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3102e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3102e4: 0x0  nop
    ctx->pc = 0x3102e4u;
    // NOP
    // 0x3102e8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3102e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3102ec: 0x0  nop
    ctx->pc = 0x3102ecu;
    // NOP
    // 0x3102f0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3102F0u;
    {
        const bool branch_taken_0x3102f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3102F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3102F0u;
        // 0x3102f4: 0xe7a20090  swc1        $f2, 0x90($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3102f0) {
            ctx->pc = 0x31031Cu;
            goto label_31031c;
        }
    }
    ctx->pc = 0x3102F8u;
    // 0x3102f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3102f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3102fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3102fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310300: 0x0  nop
    ctx->pc = 0x310300u;
    // NOP
    // 0x310304: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x310304u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x310308: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x310308u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31030c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x31030cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x310310: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x310310u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x310314: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x310314u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x310318: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x310318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_31031c:
    // 0x31031c: 0x3c051040  lui         $a1, 0x1040
    ctx->pc = 0x31031cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4160 << 16));
    // 0x310320: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x310320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310324: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x310324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x310328: 0x34a50610  ori         $a1, $a1, 0x610
    ctx->pc = 0x310328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1552);
    // 0x31032c: 0xc07789e  jal         func_1DE278
    ctx->pc = 0x31032Cu;
    SET_GPR_U32(ctx, 31, 0x310334u);
    ctx->pc = 0x310330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31032Cu;
    // 0x310330: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE278u, 0x31032Cu, 0x310334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310334u;
label_310334:
    // 0x310334: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x310334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310338: 0x8ec200bc  lw          $v0, 0xBC($s6)
    ctx->pc = 0x310338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 188)));
    // 0x31033c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x31033cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x310340: 0x54400062  bnel        $v0, $zero, . + 4 + (0x62 << 2)
    ctx->pc = 0x310340u;
    {
        const bool branch_taken_0x310340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x310340) {
            ctx->pc = 0x310344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310340u;
            // 0x310344: 0x2cf00001  sltiu       $s0, $a3, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3104CCu;
            goto label_3104cc;
        }
    }
    ctx->pc = 0x310348u;
    // 0x310348: 0x14e00014  bnez        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x310348u;
    {
        const bool branch_taken_0x310348 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x31034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310348u;
        // 0x31034c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310348) {
            ctx->pc = 0x31039Cu;
            goto label_31039c;
        }
    }
    ctx->pc = 0x310350u;
    // 0x310350: 0x8e220994  lw          $v0, 0x994($s1)
    ctx->pc = 0x310350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2452)));
    // 0x310354: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x310354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310358: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x310358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31035c: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x31035cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x310360: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x310360u;
    {
        const bool branch_taken_0x310360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310360u;
        // 0x310364: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310360) {
            ctx->pc = 0x3103E8u;
            goto label_3103e8;
        }
    }
    ctx->pc = 0x310368u;
    // 0x310368: 0x8e220804  lw          $v0, 0x804($s1)
    ctx->pc = 0x310368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2052)));
    // 0x31036c: 0x5052001e  beql        $v0, $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x31036Cu;
    {
        const bool branch_taken_0x31036c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x31036c) {
            ctx->pc = 0x310370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31036Cu;
            // 0x310370: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3103E8u;
            goto label_3103e8;
        }
    }
    ctx->pc = 0x310374u;
    // 0x310374: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x310374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_310378:
    // 0x310378: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x310378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x31037c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x31037Cu;
    {
        const bool branch_taken_0x31037c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31037Cu;
        // 0x310380: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31037c) {
            ctx->pc = 0x3103E8u;
            goto label_3103e8;
        }
    }
    ctx->pc = 0x310384u;
    // 0x310384: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x310384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x310388: 0x8c430804  lw          $v1, 0x804($v0)
    ctx->pc = 0x310388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2052)));
    // 0x31038c: 0x1472fffa  bne         $v1, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31038Cu;
    {
        const bool branch_taken_0x31038c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x310390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31038Cu;
        // 0x310390: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31038c) {
            ctx->pc = 0x310378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310378;
        }
    }
    ctx->pc = 0x310394u;
    // 0x310394: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x310394u;
    {
        const bool branch_taken_0x310394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310394u;
        // 0x310398: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310394) {
            ctx->pc = 0x3103E8u;
            goto label_3103e8;
        }
    }
    ctx->pc = 0x31039Cu;
label_31039c:
    // 0x31039c: 0x8e220800  lw          $v0, 0x800($s1)
    ctx->pc = 0x31039cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
    // 0x3103a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3103a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3103a4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3103a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3103a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3103a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3103ac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3103acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3103b0: 0xac520670  sw          $s2, 0x670($v0)
    ctx->pc = 0x3103b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1648), GPR_U32(ctx, 18));
    // 0x3103b4: 0x8e220800  lw          $v0, 0x800($s1)
    ctx->pc = 0x3103b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
    // 0x3103b8: 0x8e230994  lw          $v1, 0x994($s1)
    ctx->pc = 0x3103b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2452)));
    // 0x3103bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3103bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3103c0: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3103C0u;
    {
        const bool branch_taken_0x3103c0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3103C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103C0u;
        // 0x3103c4: 0xae220800  sw          $v0, 0x800($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3103c0) {
            ctx->pc = 0x3103E8u;
            goto label_3103e8;
        }
    }
    ctx->pc = 0x3103C8u;
    // 0x3103c8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3103c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3103cc: 0x26230804  addiu       $v1, $s1, 0x804
    ctx->pc = 0x3103ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2052));
label_3103d0:
    // 0x3103d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3103d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3103d4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3103d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3103d8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3103d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3103dc: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x3103dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
    // 0x3103e0: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3103E0u;
    {
        const bool branch_taken_0x3103e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3103E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103E0u;
        // 0x3103e4: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3103e0) {
            ctx->pc = 0x3103D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3103d0;
        }
    }
    ctx->pc = 0x3103E8u;
label_3103e8:
    // 0x3103e8: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3103E8u;
    {
        const bool branch_taken_0x3103e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3103ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103E8u;
        // 0x3103ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3103e8) {
            ctx->pc = 0x31045Cu;
            goto label_31045c;
        }
    }
    ctx->pc = 0x3103F0u;
label_3103f0:
    // 0x3103f0: 0x2882000a  slti        $v0, $a0, 0xA
    ctx->pc = 0x3103f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3103f4: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3103F4u;
    {
        const bool branch_taken_0x3103f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3103F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103F4u;
        // 0x3103f8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3103f4) {
            ctx->pc = 0x3104CCu;
            goto label_3104cc;
        }
    }
    ctx->pc = 0x3103FCu;
    // 0x3103fc: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x3103fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x310400: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x310400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x310404: 0x8c430584  lw          $v1, 0x584($v0)
    ctx->pc = 0x310404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1412)));
    // 0x310408: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x310408u;
    {
        const bool branch_taken_0x310408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x310408) {
            ctx->pc = 0x31040Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310408u;
            // 0x31040c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3103F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3103f0;
        }
    }
    ctx->pc = 0x310410u;
    // 0x310410: 0x851018  mult        $v0, $a0, $a1
    ctx->pc = 0x310410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x310414: 0x24420580  addiu       $v0, $v0, 0x580
    ctx->pc = 0x310414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x310418: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x310418u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x31041c: 0x92830010  lbu         $v1, 0x10($s4)
    ctx->pc = 0x31041cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x310420: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x310420u;
    {
        const bool branch_taken_0x310420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x310424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310420u;
        // 0x310424: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310420) {
            ctx->pc = 0x310434u;
            goto label_310434;
        }
    }
    ctx->pc = 0x310428u;
    // 0x310428: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x310428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31042c: 0xc0c9a50  jal         func_326940
    ctx->pc = 0x31042Cu;
    SET_GPR_U32(ctx, 31, 0x310434u);
    ctx->pc = 0x310430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31042Cu;
    // 0x310430: 0x240601f4  addiu       $a2, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326940u, 0x31042Cu, 0x310434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310434u;
label_310434:
    // 0x310434: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x310434u;
    {
        const bool branch_taken_0x310434 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x310434) {
            ctx->pc = 0x31044Cu;
            goto label_31044c;
        }
    }
    ctx->pc = 0x31043Cu;
    // 0x31043c: 0xc0c9a58  jal         func_326960
    ctx->pc = 0x31043Cu;
    SET_GPR_U32(ctx, 31, 0x310444u);
    ctx->pc = 0x310440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31043Cu;
    // 0x310440: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326960u, 0x31043Cu, 0x310444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310444u;
label_310444:
    // 0x310444: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x310444u;
    {
        const bool branch_taken_0x310444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310444u;
        // 0x310448: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310444) {
            ctx->pc = 0x3104CCu;
            goto label_3104cc;
        }
    }
    ctx->pc = 0x31044Cu;
label_31044c:
    // 0x31044c: 0xc0c9a64  jal         func_326990
    ctx->pc = 0x31044Cu;
    SET_GPR_U32(ctx, 31, 0x310454u);
    ctx->pc = 0x310450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31044Cu;
    // 0x310450: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326990u, 0x31044Cu, 0x310454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310454u;
label_310454:
    // 0x310454: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x310454u;
    {
        const bool branch_taken_0x310454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310454u;
        // 0x310458: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310454) {
            ctx->pc = 0x3104CCu;
            goto label_3104cc;
        }
    }
    ctx->pc = 0x31045Cu;
label_31045c:
    // 0x31045c: 0x26230580  addiu       $v1, $s1, 0x580
    ctx->pc = 0x31045cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x310460: 0x2cf00001  sltiu       $s0, $a3, 0x1
    ctx->pc = 0x310460u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x310464: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x310464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x310468: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x310468u;
    {
        const bool branch_taken_0x310468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x31046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310468u;
        // 0x31046c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310468) {
            ctx->pc = 0x310488u;
            goto label_310488;
        }
    }
    ctx->pc = 0x310470u;
    // 0x310470: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x310470u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310474: 0x92820011  lbu         $v0, 0x11($s4)
    ctx->pc = 0x310474u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 17)));
    // 0x310478: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x310478u;
    {
        const bool branch_taken_0x310478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x310478) {
            ctx->pc = 0x3104CCu;
            goto label_3104cc;
        }
    }
    ctx->pc = 0x310480u;
    // 0x310480: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x310480u;
    {
        const bool branch_taken_0x310480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310480u;
        // 0x310484: 0x92820012  lbu         $v0, 0x12($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310480) {
            ctx->pc = 0x3104C8u;
            goto label_3104c8;
        }
    }
    ctx->pc = 0x310488u;
label_310488:
    // 0x310488: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x310488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_31048c:
    // 0x31048c: 0x2882000a  slti        $v0, $a0, 0xA
    ctx->pc = 0x31048cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x310490: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x310490u;
    {
        const bool branch_taken_0x310490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310490u;
        // 0x310494: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310490) {
            ctx->pc = 0x3104CCu;
            goto label_3104cc;
        }
    }
    ctx->pc = 0x310498u;
    // 0x310498: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x310498u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x31049c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x31049cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3104a0: 0x8c430584  lw          $v1, 0x584($v0)
    ctx->pc = 0x3104a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1412)));
    // 0x3104a4: 0x5472fff9  bnel        $v1, $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3104A4u;
    {
        const bool branch_taken_0x3104a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x3104a4) {
            ctx->pc = 0x3104A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3104A4u;
            // 0x3104a8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31048Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31048c;
        }
    }
    ctx->pc = 0x3104ACu;
    // 0x3104ac: 0x851018  mult        $v0, $a0, $a1
    ctx->pc = 0x3104acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3104b0: 0x24420580  addiu       $v0, $v0, 0x580
    ctx->pc = 0x3104b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x3104b4: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x3104b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3104b8: 0x92830011  lbu         $v1, 0x11($s4)
    ctx->pc = 0x3104b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 17)));
    // 0x3104bc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3104BCu;
    {
        const bool branch_taken_0x3104bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3104bc) {
            ctx->pc = 0x3104CCu;
            goto label_3104cc;
        }
    }
    ctx->pc = 0x3104C4u;
    // 0x3104c4: 0x92820012  lbu         $v0, 0x12($s4)
    ctx->pc = 0x3104c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 18)));
label_3104c8:
    // 0x3104c8: 0xc2800a  movz        $s0, $a2, $v0
    ctx->pc = 0x3104c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
label_3104cc:
    // 0x3104cc: 0x120000e3  beqz        $s0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x3104CCu;
    {
        const bool branch_taken_0x3104cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3104D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3104CCu;
        // 0x3104d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3104cc) {
            ctx->pc = 0x31085Cu;
            goto label_31085c;
        }
    }
    ctx->pc = 0x3104D4u;
    // 0x3104d4: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x3104D4u;
    SET_GPR_U32(ctx, 31, 0x3104DCu);
    ctx->pc = 0x3104D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3104D4u;
    // 0x3104d8: 0x24050415  addiu       $a1, $zero, 0x415 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x3104D4u, 0x3104DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3104DCu;
label_3104dc:
    // 0x3104dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3104dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3104e0: 0xc6c00020  lwc1        $f0, 0x20($s6)
    ctx->pc = 0x3104e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3104e4: 0x26c20020  addiu       $v0, $s6, 0x20
    ctx->pc = 0x3104e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x3104e8: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x3104e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3104ec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3104ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3104f0: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x3104f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3104f4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3104f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3104f8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3104f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3104fc: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x3104fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x310500: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x310500u;
    {
        const bool branch_taken_0x310500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x310504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310500u;
        // 0x310504: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310500) {
            ctx->pc = 0x31052Cu;
            goto label_31052c;
        }
    }
    ctx->pc = 0x310508u;
    // 0x310508: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x310508u;
    SET_GPR_U32(ctx, 31, 0x310510u);
    ctx->pc = 0x31050Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310508u;
    // 0x31050c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x310508u, 0x310510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310510u;
label_310510:
    // 0x310510: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x310510u;
    {
        const bool branch_taken_0x310510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310510u;
        // 0x310514: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310510) {
            ctx->pc = 0x310524u;
            goto label_310524;
        }
    }
    ctx->pc = 0x310518u;
    // 0x310518: 0xc0c4900  jal         func_312400
    ctx->pc = 0x310518u;
    SET_GPR_U32(ctx, 31, 0x310520u);
    ctx->pc = 0x31051Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310518u;
    // 0x31051c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x310518u, 0x310520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310520u;
label_310520:
    // 0x310520: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x310520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_310524:
    // 0x310524: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x310524u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310528: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x310528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_31052c:
    // 0x31052c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x31052cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x310530: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x310530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x310534: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x310534u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x310538: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x310538u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31053c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x31053cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x310540: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x310540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x310544: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x310544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310548: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x310548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31054c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x31054cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310550: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x310550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310554: 0xc7a5005c  lwc1        $f5, 0x5C($sp)
    ctx->pc = 0x310554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x310558: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x310558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x31055c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x31055cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x310560: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x310560u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x310564: 0xe7a5004c  swc1        $f5, 0x4C($sp)
    ctx->pc = 0x310564u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x310568: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x310568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31056c: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x31056cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x310570: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x310570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x310574: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x310574u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x310578: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x310578u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x31057c: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x31057cu;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x310580: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x310580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x310584: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x310584u;
    {
        const bool branch_taken_0x310584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310584u;
        // 0x310588: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310584) {
            ctx->pc = 0x310590u;
            goto label_310590;
        }
    }
    ctx->pc = 0x31058Cu;
    // 0x31058c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31058cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_310590:
    // 0x310590: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x310590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310594: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x310594u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310598: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x310598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31059c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x31059cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3105a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3105a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3105a4: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x3105a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x3105a8: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x3105a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x3105ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3105acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3105b0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3105b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3105b4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3105b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3105b8: 0x14560009  bne         $v0, $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x3105B8u;
    {
        const bool branch_taken_0x3105b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x3105BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3105B8u;
        // 0x3105bc: 0x460200c2  mul.s       $f3, $f0, $f2 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3105b8) {
            ctx->pc = 0x3105E0u;
            goto label_3105e0;
        }
    }
    ctx->pc = 0x3105C0u;
    // 0x3105c0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3105c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3105c4: 0x54520007  bnel        $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3105C4u;
    {
        const bool branch_taken_0x3105c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3105c4) {
            ctx->pc = 0x3105C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3105C4u;
            // 0x3105c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3105E4u;
            goto label_3105e4;
        }
    }
    ctx->pc = 0x3105CCu;
    // 0x3105cc: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x3105ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3105d0: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x3105d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3105d4: 0x0  nop
    ctx->pc = 0x3105d4u;
    // NOP
    // 0x3105d8: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3105D8u;
    {
        const bool branch_taken_0x3105d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3105d8) {
            ctx->pc = 0x3105DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3105D8u;
            // 0x3105dc: 0xa2630009  sb          $v1, 0x9($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 9), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3105E8u;
            goto label_3105e8;
        }
    }
    ctx->pc = 0x3105E0u;
label_3105e0:
    // 0x3105e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3105e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3105e4:
    // 0x3105e4: 0xa2630009  sb          $v1, 0x9($s3)
    ctx->pc = 0x3105e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 9), (uint8_t)GPR_U32(ctx, 3));
label_3105e8:
    // 0x3105e8: 0xe665000c  swc1        $f5, 0xC($s3)
    ctx->pc = 0x3105e8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x3105ec: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x3105ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    // 0x3105f0: 0xae760004  sw          $s6, 0x4($s3)
    ctx->pc = 0x3105f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 22));
    // 0x3105f4: 0xa2600008  sb          $zero, 0x8($s3)
    ctx->pc = 0x3105f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x3105f8: 0xe6630010  swc1        $f3, 0x10($s3)
    ctx->pc = 0x3105f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x3105fc: 0x92420297  lbu         $v0, 0x297($s2)
    ctx->pc = 0x3105fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 663)));
    // 0x310600: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x310600u;
    {
        const bool branch_taken_0x310600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310600) {
            ctx->pc = 0x31063Cu;
            goto label_31063c;
        }
    }
    ctx->pc = 0x310608u;
    // 0x310608: 0x3c013a23  lui         $at, 0x3A23
    ctx->pc = 0x310608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14883 << 16));
    // 0x31060c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x31060cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x310610: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x310610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x310614: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x310614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x310618: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x310618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31061c: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x31061cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x310620: 0x3c0142c0  lui         $at, 0x42C0
    ctx->pc = 0x310620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17088 << 16));
    // 0x310624: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x310624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310628: 0x0  nop
    ctx->pc = 0x310628u;
    // NOP
    // 0x31062c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x31062cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x310630: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x310630u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x310634: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x310634u;
    {
        const bool branch_taken_0x310634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310634u;
        // 0x310638: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310634) {
            ctx->pc = 0x310660u;
            goto label_310660;
        }
    }
    ctx->pc = 0x31063Cu;
label_31063c:
    // 0x31063c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31063cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x310640: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x310640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310644: 0x3c0142c0  lui         $at, 0x42C0
    ctx->pc = 0x310644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17088 << 16));
    // 0x310648: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x310648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31064c: 0x46170803  div.s       $f0, $f1, $f23
    ctx->pc = 0x31064cu;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[23]); }
    // 0x310650: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x310650u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x310654: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x310654u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x310658: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x310658u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31065c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x31065cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_310660:
    // 0x310660: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x310660u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x310664: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x310664u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x310668: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x310668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31066c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x31066cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x310670: 0x0  nop
    ctx->pc = 0x310670u;
    // NOP
    // 0x310674: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x310674u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310678: 0x0  nop
    ctx->pc = 0x310678u;
    // NOP
    // 0x31067c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x31067Cu;
    {
        const bool branch_taken_0x31067c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x310680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31067Cu;
        // 0x310680: 0xa2620014  sb          $v0, 0x14($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31067c) {
            ctx->pc = 0x3106A4u;
            goto label_3106a4;
        }
    }
    ctx->pc = 0x310684u;
    // 0x310684: 0x92620014  lbu         $v0, 0x14($s3)
    ctx->pc = 0x310684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x310688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31068c: 0x0  nop
    ctx->pc = 0x31068cu;
    // NOP
    // 0x310690: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x310690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x310694: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x310694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x310698: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x310698u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31069c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x31069cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3106a0: 0xa2620014  sb          $v0, 0x14($s3)
    ctx->pc = 0x3106a0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 20), (uint8_t)GPR_U32(ctx, 2));
label_3106a4:
    // 0x3106a4: 0x8ec200bc  lw          $v0, 0xBC($s6)
    ctx->pc = 0x3106a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 188)));
    // 0x3106a8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x3106a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x3106ac: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3106ACu;
    {
        const bool branch_taken_0x3106ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3106B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3106ACu;
        // 0x3106b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3106ac) {
            ctx->pc = 0x310718u;
            goto label_310718;
        }
    }
    ctx->pc = 0x3106B4u;
    // 0x3106b4: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x3106B4u;
    {
        const bool branch_taken_0x3106b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3106b4) {
            ctx->pc = 0x310718u;
            goto label_310718;
        }
    }
    ctx->pc = 0x3106BCu;
    // 0x3106bc: 0x92820010  lbu         $v0, 0x10($s4)
    ctx->pc = 0x3106bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3106c0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3106C0u;
    {
        const bool branch_taken_0x3106c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3106c0) {
            ctx->pc = 0x310718u;
            goto label_310718;
        }
    }
    ctx->pc = 0x3106C8u;
    // 0x3106c8: 0x92820012  lbu         $v0, 0x12($s4)
    ctx->pc = 0x3106c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x3106cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3106CCu;
    {
        const bool branch_taken_0x3106cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3106D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3106CCu;
        // 0x3106d0: 0x92620014  lbu         $v0, 0x14($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3106cc) {
            ctx->pc = 0x3106E8u;
            goto label_3106e8;
        }
    }
    ctx->pc = 0x3106D4u;
    // 0x3106d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3106d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3106d8: 0x0  nop
    ctx->pc = 0x3106d8u;
    // NOP
    // 0x3106dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3106dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3106e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3106E0u;
    {
        const bool branch_taken_0x3106e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3106E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3106E0u;
        // 0x3106e4: 0xc6810014  lwc1        $f1, 0x14($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3106e0) {
            ctx->pc = 0x3106FCu;
            goto label_3106fc;
        }
    }
    ctx->pc = 0x3106E8u;
label_3106e8:
    // 0x3106e8: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x3106e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3106ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3106ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3106f0: 0x0  nop
    ctx->pc = 0x3106f0u;
    // NOP
    // 0x3106f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3106f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3106f8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3106f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3106fc:
    // 0x3106fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3106fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x310700: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x310700u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x310704: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x310704u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x310708: 0xa2620014  sb          $v0, 0x14($s3)
    ctx->pc = 0x310708u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x31070c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31070cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310710: 0xa2620009  sb          $v0, 0x9($s3)
    ctx->pc = 0x310710u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x310714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x310714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_310718:
    // 0x310718: 0xc0c47be  jal         func_311EF8
    ctx->pc = 0x310718u;
    SET_GPR_U32(ctx, 31, 0x310720u);
    ctx->pc = 0x31071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310718u;
    // 0x31071c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311EF8u, 0x310718u, 0x310720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310720u;
label_310720:
    // 0x310720: 0x92630014  lbu         $v1, 0x14($s3)
    ctx->pc = 0x310720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x310724: 0x4600c8c6  mov.s       $f3, $f25
    ctx->pc = 0x310724u;
    ctx->f[3] = FPU_MOV_S(ctx->f[25]);
    // 0x310728: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x310728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
    // 0x31072c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31072cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310730: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x310730u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310734: 0x0  nop
    ctx->pc = 0x310734u;
    // NOP
    // 0x310738: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x310738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31073c: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x31073cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310740: 0x0  nop
    ctx->pc = 0x310740u;
    // NOP
    // 0x310744: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x310744u;
    {
        const bool branch_taken_0x310744 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x310748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310744u;
        // 0x310748: 0x4601ce40  add.s       $f25, $f25, $f1 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310744) {
            ctx->pc = 0x3107A8u;
            goto label_3107a8;
        }
    }
    ctx->pc = 0x31074Cu;
    // 0x31074c: 0x3c014470  lui         $at, 0x4470
    ctx->pc = 0x31074cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17520 << 16));
    // 0x310750: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x310750u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x310754: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x310754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310758: 0x0  nop
    ctx->pc = 0x310758u;
    // NOP
    // 0x31075c: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x31075cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310760: 0x0  nop
    ctx->pc = 0x310760u;
    // NOP
    // 0x310764: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x310764u;
    {
        const bool branch_taken_0x310764 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x310764) {
            ctx->pc = 0x310768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310764u;
            // 0x310768: 0x46160001  sub.s       $f0, $f0, $f22 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x310774u;
            goto label_310774;
        }
    }
    ctx->pc = 0x31076Cu;
    // 0x31076c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31076Cu;
    {
        const bool branch_taken_0x31076c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31076Cu;
        // 0x310770: 0xa2600014  sb          $zero, 0x14($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31076c) {
            ctx->pc = 0x3107A8u;
            goto label_3107a8;
        }
    }
    ctx->pc = 0x310774u;
label_310774:
    // 0x310774: 0x3c0142c0  lui         $at, 0x42C0
    ctx->pc = 0x310774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17088 << 16));
    // 0x310778: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x310778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31077c: 0x3c014274  lui         $at, 0x4274
    ctx->pc = 0x31077cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17012 << 16));
    // 0x310780: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x310780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x310784: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x310784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x310788: 0x0  nop
    ctx->pc = 0x310788u;
    // NOP
    // 0x31078c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x31078cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x310790: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x310790u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x310794: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x310794u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x310798: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x310798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31079c: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x31079cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3107a0: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3107A0u;
    {
        const bool branch_taken_0x3107a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3107a0) {
            ctx->pc = 0x3107A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3107A0u;
            // 0x3107a4: 0xa2620014  sb          $v0, 0x14($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 20), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3107A8u;
            goto label_3107a8;
        }
    }
    ctx->pc = 0x3107A8u;
label_3107a8:
    // 0x3107a8: 0x92420292  lbu         $v0, 0x292($s2)
    ctx->pc = 0x3107a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 658)));
    // 0x3107ac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3107ACu;
    {
        const bool branch_taken_0x3107ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3107B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3107ACu;
        // 0x3107b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107ac) {
            ctx->pc = 0x3107D8u;
            goto label_3107d8;
        }
    }
    ctx->pc = 0x3107B4u;
    // 0x3107b4: 0x92420293  lbu         $v0, 0x293($s2)
    ctx->pc = 0x3107b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 659)));
    // 0x3107b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3107B8u;
    {
        const bool branch_taken_0x3107b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3107BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3107B8u;
        // 0x3107bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107b8) {
            ctx->pc = 0x3107D4u;
            goto label_3107d4;
        }
    }
    ctx->pc = 0x3107C0u;
    // 0x3107c0: 0x8e430220  lw          $v1, 0x220($s2)
    ctx->pc = 0x3107c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x3107c4: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x3107c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x3107c8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3107c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3107cc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3107ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3107d0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x3107d0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_3107d4:
    // 0x3107d4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3107d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3107d8:
    // 0x3107d8: 0x92420298  lbu         $v0, 0x298($s2)
    ctx->pc = 0x3107d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 664)));
    // 0x3107dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3107DCu;
    {
        const bool branch_taken_0x3107dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3107dc) {
            ctx->pc = 0x3107F4u;
            goto label_3107f4;
        }
    }
    ctx->pc = 0x3107E4u;
    // 0x3107e4: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3107E4u;
    {
        const bool branch_taken_0x3107e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3107E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3107E4u;
        // 0x3107e8: 0x8fa30128  lw          $v1, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107e4) {
            ctx->pc = 0x31081Cu;
            goto label_31081c;
        }
    }
    ctx->pc = 0x3107ECu;
    // 0x3107ec: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3107ECu;
    {
        const bool branch_taken_0x3107ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3107F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3107ECu;
        // 0x3107f0: 0x46001e46  mov.s       $f25, $f3 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107ec) {
            ctx->pc = 0x31085Cu;
            goto label_31085c;
        }
    }
    ctx->pc = 0x3107F4u;
label_3107f4:
    // 0x3107f4: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3107F4u;
    {
        const bool branch_taken_0x3107f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3107F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3107F4u;
        // 0x3107f8: 0x8fa30128  lw          $v1, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107f4) {
            ctx->pc = 0x31081Cu;
            goto label_31081c;
        }
    }
    ctx->pc = 0x3107FCu;
    // 0x3107fc: 0x92620014  lbu         $v0, 0x14($s3)
    ctx->pc = 0x3107fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x310800: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x310800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x310804: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x310804u;
    {
        const bool branch_taken_0x310804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x310804) {
            ctx->pc = 0x310808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310804u;
            // 0x310808: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31080Cu;
            goto label_31080c;
        }
    }
    ctx->pc = 0x31080Cu;
label_31080c:
    // 0x31080c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x31080cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x310810: 0x1012  mflo        $v0
    ctx->pc = 0x310810u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x310814: 0xa2620014  sb          $v0, 0x14($s3)
    ctx->pc = 0x310814u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x310818: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x310818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_31081c:
    // 0x31081c: 0x26730050  addiu       $s3, $s3, 0x50
    ctx->pc = 0x31081cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x310820: 0x8e220530  lw          $v0, 0x530($s1)
    ctx->pc = 0x310820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1328)));
    // 0x310824: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x310824u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310828: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x310828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31082c: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x31082cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
    // 0x310830: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x310830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x310834: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x310834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x310838: 0x104300e8  beq         $v0, $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x310838u;
    {
        const bool branch_taken_0x310838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x31083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310838u;
        // 0x31083c: 0xae220530  sw          $v0, 0x530($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310838) {
            ctx->pc = 0x310BDCu;
            goto label_310bdc;
        }
    }
    ctx->pc = 0x310840u;
    // 0x310840: 0x9222057d  lbu         $v0, 0x57D($s1)
    ctx->pc = 0x310840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1405)));
    // 0x310844: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x310844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x310848: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x310848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x31084c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31084cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x310850: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x310850u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x310854: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x310854u;
    {
        const bool branch_taken_0x310854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x310858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310854u;
        // 0x310858: 0xa222057d  sb          $v0, 0x57D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1405), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310854) {
            ctx->pc = 0x310894u;
            goto label_310894;
        }
    }
    ctx->pc = 0x31085Cu;
label_31085c:
    // 0x31085c: 0x8e2201f0  lw          $v0, 0x1F0($s1)
    ctx->pc = 0x31085cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
label_310860:
    // 0x310860: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x310860u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x310864: 0x3c2102a  slt         $v0, $fp, $v0
    ctx->pc = 0x310864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x310868: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x310868u;
    {
        const bool branch_taken_0x310868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310868u;
        // 0x31086c: 0x1e1080  sll         $v0, $fp, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310868) {
            ctx->pc = 0x310894u;
            goto label_310894;
        }
    }
    ctx->pc = 0x310870u;
    // 0x310870: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x310870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x310874: 0x8c520060  lw          $s2, 0x60($v0)
    ctx->pc = 0x310874u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x310878: 0x8e4300c0  lw          $v1, 0xC0($s2)
    ctx->pc = 0x310878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x31087c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x31087cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x310880: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x310880u;
    {
        const bool branch_taken_0x310880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x310880) {
            ctx->pc = 0x310884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310880u;
            // 0x310884: 0x8e2201f0  lw          $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310860;
        }
    }
    ctx->pc = 0x310888u;
    // 0x310888: 0x9222057d  lbu         $v0, 0x57D($s1)
    ctx->pc = 0x310888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1405)));
    // 0x31088c: 0x1440fde8  bnez        $v0, . + 4 + (-0x218 << 2)
    ctx->pc = 0x31088Cu;
    {
        const bool branch_taken_0x31088c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31088Cu;
        // 0x310890: 0x265502b0  addiu       $s5, $s2, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31088c) {
            ctx->pc = 0x310030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310030;
        }
    }
    ctx->pc = 0x310894u;
label_310894:
    // 0x310894: 0x8e220530  lw          $v0, 0x530($s1)
    ctx->pc = 0x310894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1328)));
label_310898:
    // 0x310898: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x310898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x31089c: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x31089Cu;
    {
        const bool branch_taken_0x31089c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3108A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31089Cu;
        // 0x3108a0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31089c) {
            ctx->pc = 0x310BF8u;
            goto label_310bf8;
        }
    }
    ctx->pc = 0x3108A4u;
    // 0x3108a4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x3108a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x3108a8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3108a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x3108ac: 0xc440bcd4  lwc1        $f0, -0x432C($v0)
    ctx->pc = 0x3108acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3108b0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3108b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3108b4: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x3108b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x3108b8: 0x4600c001  sub.s       $f0, $f24, $f0
    ctx->pc = 0x3108b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
    // 0x3108bc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3108bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3108c0: 0x0  nop
    ctx->pc = 0x3108c0u;
    // NOP
    // 0x3108c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3108C4u;
    {
        const bool branch_taken_0x3108c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3108C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3108C4u;
        // 0x3108c8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3108c4) {
            ctx->pc = 0x3108D0u;
            goto label_3108d0;
        }
    }
    ctx->pc = 0x3108CCu;
    // 0x3108cc: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x3108ccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_3108d0:
    // 0x3108d0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x3108d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3108d4: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x3108D4u;
    {
        const bool branch_taken_0x3108d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3108D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3108D4u;
        // 0x3108d8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3108d4) {
            ctx->pc = 0x310B48u;
            goto label_310b48;
        }
    }
    ctx->pc = 0x3108DCu;
    // 0x3108dc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3108DCu;
    SET_GPR_U32(ctx, 31, 0x3108E4u);
    ctx->pc = 0x3108E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3108DCu;
    // 0x3108e0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3108DCu, 0x3108E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3108E4u;
label_3108e4:
    // 0x3108e4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3108E4u;
    SET_GPR_U32(ctx, 31, 0x3108ECu);
    ctx->pc = 0x3108E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3108E4u;
    // 0x3108e8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3108E4u, 0x3108ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3108ECu;
label_3108ec:
    // 0x3108ec: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x3108ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3108f0: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x3108f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3108f4: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x3108f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x3108f8: 0xe7b40088  swc1        $f20, 0x88($sp)
    ctx->pc = 0x3108f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x3108fc: 0xe7b4008c  swc1        $f20, 0x8C($sp)
    ctx->pc = 0x3108fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x310900: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x310900u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x310904: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x310904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x310908: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x310908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x31090c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x31090cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x310910: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x310910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x310914: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x310914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x310918: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x310918u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x31091c: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x31091cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x310920: 0xe7b40088  swc1        $f20, 0x88($sp)
    ctx->pc = 0x310920u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x310924: 0xe7b4008c  swc1        $f20, 0x8C($sp)
    ctx->pc = 0x310924u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x310928: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x310928u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31092c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x31092cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x310930: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x310930u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x310934: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x310934u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x310938: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x310938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31093c: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x31093Cu;
    SET_GPR_U32(ctx, 31, 0x310944u);
    ctx->pc = 0x310940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31093Cu;
    // 0x310940: 0xe7b40074  swc1        $f20, 0x74($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x31093Cu, 0x310944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310944u;
label_310944:
    // 0x310944: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x310944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x310948: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x310948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x31094c: 0xe7b80120  swc1        $f24, 0x120($sp)
    ctx->pc = 0x31094cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x310950: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x310950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x310954: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x310954u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x310958: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x310958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x31095c: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x31095cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x310960: 0x4600a5c6  mov.s       $f23, $f20
    ctx->pc = 0x310960u;
    ctx->f[23] = FPU_MOV_S(ctx->f[20]);
    // 0x310964: 0xe7b40098  swc1        $f20, 0x98($sp)
    ctx->pc = 0x310964u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x310968: 0xe7b4009c  swc1        $f20, 0x9C($sp)
    ctx->pc = 0x310968u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x31096c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x31096cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310970: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x310970u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310974: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x310974u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x310978: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x310978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31097c: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x31097cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310980: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x310980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310984: 0xc7a300ac  lwc1        $f3, 0xAC($sp)
    ctx->pc = 0x310984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x310988: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x310988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31098c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x31098cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x310990: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x310990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x310994: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x310994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x310998: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x310998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x31099c: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x31099cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x3109a0: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x3109a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x3109a4: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x3109a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3109a8: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x3109a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3109ac: 0xe7b400a8  swc1        $f20, 0xA8($sp)
    ctx->pc = 0x3109acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3109b0: 0xe7b400ac  swc1        $f20, 0xAC($sp)
    ctx->pc = 0x3109b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x3109b4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3109b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3109b8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x3109b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3109bc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3109bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3109c0: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x3109c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3109c4: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x3109c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3109c8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3109c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3109cc: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x3109ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3109d0: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3109d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3109d4: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x3109d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3109d8: 0xc7a3011c  lwc1        $f3, 0x11C($sp)
    ctx->pc = 0x3109d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3109dc: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x3109dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3109e0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3109e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3109e4: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x3109e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x3109e8: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x3109e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x3109ec: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x3109ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x3109f0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3109f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x3109f4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x3109f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3109f8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x3109f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3109fc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3109fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x310a00: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x310a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x310a04: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x310a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310a08: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x310a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x310a0c: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x310a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x310a10: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x310a10u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x310a14: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x310a14u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x310a18: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x310a18u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x310a1c: 0x0  nop
    ctx->pc = 0x310a1cu;
    // NOP
    // 0x310a20: 0x0  nop
    ctx->pc = 0x310a20u;
    // NOP
    // 0x310a24: 0x46000044  c1          0x44
    ctx->pc = 0x310a24u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x310a28: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x310a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x310a2c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x310a2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310a30: 0x0  nop
    ctx->pc = 0x310a30u;
    // NOP
    // 0x310a34: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x310A34u;
    {
        const bool branch_taken_0x310a34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x310A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A34u;
        // 0x310a38: 0xe7a10070  swc1        $f1, 0x70($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a34) {
            ctx->pc = 0x310A5Cu;
            goto label_310a5c;
        }
    }
    ctx->pc = 0x310A3Cu;
    // 0x310a3c: 0x0  nop
    ctx->pc = 0x310a3cu;
    // NOP
    // 0x310a40: 0x0  nop
    ctx->pc = 0x310a40u;
    // NOP
    // 0x310a44: 0x4601b003  div.s       $f0, $f22, $f1
    ctx->pc = 0x310a44u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[22], ctx->f[1]); }
    // 0x310a48: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x310a48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x310a4c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x310a4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x310a50: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x310a50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x310a54: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x310a54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x310a58: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x310a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_310a5c:
    // 0x310a5c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x310a5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x310a60: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x310a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x310a64: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x310a64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x310a68: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x310a68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x310a6c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x310a6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x310a70: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x310a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x310a74: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x310a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310a78: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x310a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x310a7c: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x310a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x310a80: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x310a80u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x310a84: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x310a84u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x310a88: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x310a88u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x310a8c: 0x0  nop
    ctx->pc = 0x310a8cu;
    // NOP
    // 0x310a90: 0x0  nop
    ctx->pc = 0x310a90u;
    // NOP
    // 0x310a94: 0x46000044  c1          0x44
    ctx->pc = 0x310a94u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x310a98: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x310a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x310a9c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x310a9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310aa0: 0x0  nop
    ctx->pc = 0x310aa0u;
    // NOP
    // 0x310aa4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x310AA4u;
    {
        const bool branch_taken_0x310aa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x310AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AA4u;
        // 0x310aa8: 0xe7a10070  swc1        $f1, 0x70($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310aa4) {
            ctx->pc = 0x310ACCu;
            goto label_310acc;
        }
    }
    ctx->pc = 0x310AACu;
    // 0x310aac: 0x0  nop
    ctx->pc = 0x310aacu;
    // NOP
    // 0x310ab0: 0x0  nop
    ctx->pc = 0x310ab0u;
    // NOP
    // 0x310ab4: 0x4601b003  div.s       $f0, $f22, $f1
    ctx->pc = 0x310ab4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[22], ctx->f[1]); }
    // 0x310ab8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x310ab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x310abc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x310abcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x310ac0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x310ac0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x310ac4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x310ac4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x310ac8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x310ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_310acc:
    // 0x310acc: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x310accu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x310ad0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x310ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310ad4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x310ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x310ad8: 0x34a57210  ori         $a1, $a1, 0x7210
    ctx->pc = 0x310ad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29200);
    // 0x310adc: 0xc077912  jal         func_1DE448
    ctx->pc = 0x310ADCu;
    SET_GPR_U32(ctx, 31, 0x310AE4u);
    ctx->pc = 0x310AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310ADCu;
    // 0x310ae0: 0x27a70120  addiu       $a3, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x310ADCu, 0x310AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310AE4u;
label_310ae4:
    // 0x310ae4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310AE4u;
    {
        const bool branch_taken_0x310ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AE4u;
        // 0x310ae8: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ae4) {
            ctx->pc = 0x310AF4u;
            goto label_310af4;
        }
    }
    ctx->pc = 0x310AECu;
    // 0x310aec: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x310aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310af0: 0x46000dc1  sub.s       $f23, $f1, $f0
    ctx->pc = 0x310af0u;
    ctx->f[23] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_310af4:
    // 0x310af4: 0x4617a034  c.lt.s      $f20, $f23
    ctx->pc = 0x310af4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310af8: 0x0  nop
    ctx->pc = 0x310af8u;
    // NOP
    // 0x310afc: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x310AFCu;
    {
        const bool branch_taken_0x310afc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x310B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AFCu;
        // 0x310b00: 0x8fa3012c  lw          $v1, 0x12C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310afc) {
            ctx->pc = 0x310B50u;
            goto label_310b50;
        }
    }
    ctx->pc = 0x310B04u;
    // 0x310b04: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
    ctx->pc = 0x310B04u;
    {
        const bool branch_taken_0x310b04 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x310B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B04u;
        // 0x310b08: 0x4617b001  sub.s       $f0, $f22, $f23 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b04) {
            ctx->pc = 0x310B30u;
            goto label_310b30;
        }
    }
    ctx->pc = 0x310B0Cu;
    // 0x310b0c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x310b0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310b10: 0x0  nop
    ctx->pc = 0x310b10u;
    // NOP
    // 0x310b14: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x310B14u;
    {
        const bool branch_taken_0x310b14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x310B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B14u;
        // 0x310b18: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b14) {
            ctx->pc = 0x310B20u;
            goto label_310b20;
        }
    }
    ctx->pc = 0x310B1Cu;
    // 0x310b1c: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x310b1cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
label_310b20:
    // 0x310b20: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x310b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x310b24: 0xc440bcd8  lwc1        $f0, -0x4328($v0)
    ctx->pc = 0x310b24u;
    { uint32_t bits = FAST_READ32(0x3FBCD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310b28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x310B28u;
    {
        const bool branch_taken_0x310b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B28u;
        // 0x310b2c: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b28) {
            ctx->pc = 0x310B4Cu;
            goto label_310b4c;
        }
    }
    ctx->pc = 0x310B30u;
label_310b30:
    // 0x310b30: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x310b30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310b34: 0x0  nop
    ctx->pc = 0x310b34u;
    // NOP
    // 0x310b38: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x310B38u;
    {
        const bool branch_taken_0x310b38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x310b38) {
            ctx->pc = 0x310B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310B38u;
            // 0x310b3c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x310B40u;
            goto label_310b40;
        }
    }
    ctx->pc = 0x310B40u;
label_310b40:
    // 0x310b40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x310B40u;
    {
        const bool branch_taken_0x310b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B40u;
        // 0x310b44: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b40) {
            ctx->pc = 0x310B4Cu;
            goto label_310b4c;
        }
    }
    ctx->pc = 0x310B48u;
label_310b48:
    // 0x310b48: 0xe455bcd8  swc1        $f21, -0x4328($v0)
    ctx->pc = 0x310b48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294950104), bits); }
label_310b4c:
    // 0x310b4c: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x310b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_310b50:
    // 0x310b50: 0x54600024  bnel        $v1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x310B50u;
    {
        const bool branch_taken_0x310b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x310b50) {
            ctx->pc = 0x310B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310B50u;
            // 0x310b54: 0x9222057c  lbu         $v0, 0x57C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310BE4u;
            goto label_310be4;
        }
    }
    ctx->pc = 0x310B58u;
    // 0x310b58: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x310b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x310b5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x310b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310b60: 0x0  nop
    ctx->pc = 0x310b60u;
    // NOP
    // 0x310b64: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x310b64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310b68: 0x0  nop
    ctx->pc = 0x310b68u;
    // NOP
    // 0x310b6c: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
    ctx->pc = 0x310B6Cu;
    {
        const bool branch_taken_0x310b6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x310b6c) {
            ctx->pc = 0x310B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310B6Cu;
            // 0x310b70: 0x9222057c  lbu         $v0, 0x57C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310BE4u;
            goto label_310be4;
        }
    }
    ctx->pc = 0x310B74u;
    // 0x310b74: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x310b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x310b78: 0x14560004  bne         $v0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x310B78u;
    {
        const bool branch_taken_0x310b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x310B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B78u;
        // 0x310b7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b78) {
            ctx->pc = 0x310B8Cu;
            goto label_310b8c;
        }
    }
    ctx->pc = 0x310B80u;
    // 0x310b80: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x310b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x310b84: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x310B84u;
    {
        const bool branch_taken_0x310b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310b84) {
            ctx->pc = 0x310B90u;
            goto label_310b90;
        }
    }
    ctx->pc = 0x310B8Cu;
label_310b8c:
    // 0x310b8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x310b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_310b90:
    // 0x310b90: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x310b90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x310b94: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x310b94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x310b98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x310b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310b9c: 0xa2640009  sb          $a0, 0x9($s3)
    ctx->pc = 0x310b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 9), (uint8_t)GPR_U32(ctx, 4));
    // 0x310ba0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x310ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310ba4: 0xae760004  sw          $s6, 0x4($s3)
    ctx->pc = 0x310ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 22));
    // 0x310ba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x310ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310bac: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x310bacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x310bb0: 0xa2620008  sb          $v0, 0x8($s3)
    ctx->pc = 0x310bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x310bb4: 0xc0c47be  jal         func_311EF8
    ctx->pc = 0x310BB4u;
    SET_GPR_U32(ctx, 31, 0x310BBCu);
    ctx->pc = 0x310BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310BB4u;
    // 0x310bb8: 0xa2630014  sb          $v1, 0x14($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 20), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311EF8u, 0x310BB4u, 0x310BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310BBCu;
label_310bbc:
    // 0x310bbc: 0x8e230530  lw          $v1, 0x530($s1)
    ctx->pc = 0x310bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1328)));
    // 0x310bc0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x310bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x310bc4: 0x9222057c  lbu         $v0, 0x57C($s1)
    ctx->pc = 0x310bc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1404)));
    // 0x310bc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x310bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x310bcc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x310bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x310bd0: 0xae230530  sw          $v1, 0x530($s1)
    ctx->pc = 0x310bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1328), GPR_U32(ctx, 3));
    // 0x310bd4: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x310BD4u;
    {
        const bool branch_taken_0x310bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x310BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BD4u;
        // 0x310bd8: 0xa222057c  sb          $v0, 0x57C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1404), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310bd4) {
            ctx->pc = 0x310BF8u;
            goto label_310bf8;
        }
    }
    ctx->pc = 0x310BDCu;
label_310bdc:
    // 0x310bdc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x310BDCu;
    {
        const bool branch_taken_0x310bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BDCu;
        // 0x310be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310bdc) {
            ctx->pc = 0x310BFCu;
            goto label_310bfc;
        }
    }
    ctx->pc = 0x310BE4u;
label_310be4:
    // 0x310be4: 0x9223057d  lbu         $v1, 0x57D($s1)
    ctx->pc = 0x310be4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1405)));
    // 0x310be8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x310be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x310bec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x310becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x310bf0: 0xa222057c  sb          $v0, 0x57C($s1)
    ctx->pc = 0x310bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1404), (uint8_t)GPR_U32(ctx, 2));
    // 0x310bf4: 0xa223057d  sb          $v1, 0x57D($s1)
    ctx->pc = 0x310bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1405), (uint8_t)GPR_U32(ctx, 3));
label_310bf8:
    // 0x310bf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x310bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_310bfc:
    // 0x310bfc: 0xdfb00140  ld          $s0, 0x140($sp)
    ctx->pc = 0x310bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x310c00: 0xdfb10148  ld          $s1, 0x148($sp)
    ctx->pc = 0x310c00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x310c04: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x310c04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x310c08: 0xdfb30158  ld          $s3, 0x158($sp)
    ctx->pc = 0x310c08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x310c0c: 0xdfb40160  ld          $s4, 0x160($sp)
    ctx->pc = 0x310c0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x310c10: 0xdfb50168  ld          $s5, 0x168($sp)
    ctx->pc = 0x310c10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x310c14: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x310c14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x310c18: 0xdfb70178  ld          $s7, 0x178($sp)
    ctx->pc = 0x310c18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x310c1c: 0xdfbe0180  ld          $fp, 0x180($sp)
    ctx->pc = 0x310c1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x310c20: 0xdfbf0188  ld          $ra, 0x188($sp)
    ctx->pc = 0x310c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x310c24: 0xc7b901b8  lwc1        $f25, 0x1B8($sp)
    ctx->pc = 0x310c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x310c28: 0xc7b801b0  lwc1        $f24, 0x1B0($sp)
    ctx->pc = 0x310c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x310c2c: 0xc7b701a8  lwc1        $f23, 0x1A8($sp)
    ctx->pc = 0x310c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x310c30: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x310c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x310c34: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x310c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x310c38: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x310c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x310c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x310C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C3Cu;
        // 0x310c40: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310C44u;
    // 0x310c44: 0x0  nop
    ctx->pc = 0x310c44u;
    // NOP
    ctx->pc = 0x310c48u;
}
