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

// Function: sub_00139140
// Address: 0x139140 - 0x139270
void sub_00139140_0x139140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139140_0x139140");
#endif

    switch (ctx->pc) {
        case 0x139170u: goto label_139170;
        case 0x1391b0u: goto label_1391b0;
        case 0x1391f8u: goto label_1391f8;
        case 0x139210u: goto label_139210;
        case 0x139224u: goto label_139224;
        default: break;
    }

    ctx->pc = 0x139140u;

    // 0x139140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x139140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x139144: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x139144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x139148: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x139148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13914c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13914cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x139150: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x139150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x139154: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x139154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139158: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x139158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13915c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13915cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139160: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x139160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x139164: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x139164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139168: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x139168u;
    SET_GPR_U32(ctx, 31, 0x139170u);
    ctx->pc = 0x13916Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139168u;
    // 0x13916c: 0xe62004d4  swc1        $f0, 0x4D4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1236), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x139168u, 0x139170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139170u;
label_139170:
    // 0x139170: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x139170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x139174: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x139174u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x139178: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x139178u;
    {
        const bool branch_taken_0x139178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139178) {
            ctx->pc = 0x13917Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139178u;
            // 0x13917c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x139180u;
            goto label_139180;
        }
    }
    ctx->pc = 0x139180u;
label_139180:
    // 0x139180: 0x8e2204d8  lw          $v0, 0x4D8($s1)
    ctx->pc = 0x139180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1240)));
    // 0x139184: 0x4010  mfhi        $t0
    ctx->pc = 0x139184u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x139188: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x139188u;
    {
        const bool branch_taken_0x139188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139188u;
        // 0x13918c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139188) {
            ctx->pc = 0x139258u;
            goto label_139258;
        }
    }
    ctx->pc = 0x139190u;
    // 0x139190: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x139190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x139194: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x139194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x139198: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x139198u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13919c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x13919cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1391a0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1391A0u;
    {
        const bool branch_taken_0x1391a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1391A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1391A0u;
        // 0x1391a4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1391a0) {
            ctx->pc = 0x139254u;
            goto label_139254;
        }
    }
    ctx->pc = 0x1391A8u;
    // 0x1391a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1391a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1391ac: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1391acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1391b0:
    // 0x1391b0: 0x5085000d  beql        $a0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1391B0u;
    {
        const bool branch_taken_0x1391b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1391b0) {
            ctx->pc = 0x1391B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1391B0u;
            // 0x1391b4: 0x8e2204d8  lw          $v0, 0x4D8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1391E8u;
            goto label_1391e8;
        }
    }
    ctx->pc = 0x1391B8u;
    // 0x1391b8: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1391b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1391bc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1391bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1391c0: 0x10670003  beq         $v1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1391C0u;
    {
        const bool branch_taken_0x1391c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1391C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1391C0u;
        // 0x1391c4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1391c0) {
            ctx->pc = 0x1391D0u;
            goto label_1391d0;
        }
    }
    ctx->pc = 0x1391C8u;
    // 0x1391c8: 0x5640fff9  bnel        $s2, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1391C8u;
    {
        const bool branch_taken_0x1391c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1391c8) {
            ctx->pc = 0x1391CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1391C8u;
            // 0x1391cc: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1391B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1391b0;
        }
    }
    ctx->pc = 0x1391D0u;
label_1391d0:
    // 0x1391d0: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x1391d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1391d4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1391D4u;
    {
        const bool branch_taken_0x1391d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1391d4) {
            ctx->pc = 0x1391D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1391D4u;
            // 0x1391d8: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1391B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1391b0;
        }
    }
    ctx->pc = 0x1391DCu;
    // 0x1391dc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1391dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1391e0: 0xae2204d8  sw          $v0, 0x4D8($s1)
    ctx->pc = 0x1391e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1240), GPR_U32(ctx, 2));
    // 0x1391e4: 0x8e2204d8  lw          $v0, 0x4D8($s1)
    ctx->pc = 0x1391e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1240)));
label_1391e8:
    // 0x1391e8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1391E8u;
    {
        const bool branch_taken_0x1391e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1391ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1391E8u;
        // 0x1391ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1391e8) {
            ctx->pc = 0x139254u;
            goto label_139254;
        }
    }
    ctx->pc = 0x1391F0u;
    // 0x1391f0: 0xc04e420  jal         func_139080
    ctx->pc = 0x1391F0u;
    SET_GPR_U32(ctx, 31, 0x1391F8u);
    ctx->pc = 0x1391F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1391F0u;
    // 0x1391f4: 0xae2204dc  sw          $v0, 0x4DC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1244), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139080u, 0x1391F0u, 0x1391F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1391F8u;
label_1391f8:
    // 0x1391f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1391f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1391fc: 0x2402080d  addiu       $v0, $zero, 0x80D
    ctx->pc = 0x1391fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x139200: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x139200u;
    {
        const bool branch_taken_0x139200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x139204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139200u;
        // 0x139204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139200) {
            ctx->pc = 0x139258u;
            goto label_139258;
        }
    }
    ctx->pc = 0x139208u;
    // 0x139208: 0xc069e04  jal         func_1A7810
    ctx->pc = 0x139208u;
    SET_GPR_U32(ctx, 31, 0x139210u);
    ctx->pc = 0x1A7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7810u, 0x139208u, 0x139210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139210u;
label_139210:
    // 0x139210: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x139210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x139214: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x139214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139218: 0x24a5e630  addiu       $a1, $a1, -0x19D0
    ctx->pc = 0x139218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960688));
    // 0x13921c: 0xc075272  jal         func_1D49C8
    ctx->pc = 0x13921Cu;
    SET_GPR_U32(ctx, 31, 0x139224u);
    ctx->pc = 0x139220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13921Cu;
    // 0x139220: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49C8u, 0x13921Cu, 0x139224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139224u;
label_139224:
    // 0x139224: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x139224u;
    {
        const bool branch_taken_0x139224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139224) {
            ctx->pc = 0x139228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139224u;
            // 0x139228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139258u;
            goto label_139258;
        }
    }
    ctx->pc = 0x13922Cu;
    // 0x13922c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x13922cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139230: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x139230u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x139234: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x139234u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x139238: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x139238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13923c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13923cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139240: 0x0  nop
    ctx->pc = 0x139240u;
    // NOP
    // 0x139244: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x139244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x139248: 0xe62004d4  swc1        $f0, 0x4D4($s1)
    ctx->pc = 0x139248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1236), bits); }
    // 0x13924c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13924Cu;
    {
        const bool branch_taken_0x13924c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13924Cu;
        // 0x139250: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13924c) {
            ctx->pc = 0x139258u;
            goto label_139258;
        }
    }
    ctx->pc = 0x139254u;
label_139254:
    // 0x139254: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x139254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_139258:
    // 0x139258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x139258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13925c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13925cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139260: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x139260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139264: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x139264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x139268: 0x3e00008  jr          $ra
    ctx->pc = 0x139268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139268u;
        // 0x13926c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139270u;
}
