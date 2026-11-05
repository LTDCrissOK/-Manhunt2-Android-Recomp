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

// Function: sub_00207228
// Address: 0x207228 - 0x207360
void sub_00207228_0x207228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207228_0x207228");
#endif

    switch (ctx->pc) {
        case 0x207258u: goto label_207258;
        case 0x207274u: goto label_207274;
        case 0x207288u: goto label_207288;
        case 0x207314u: goto label_207314;
        case 0x20732cu: goto label_20732c;
        case 0x207348u: goto label_207348;
        default: break;
    }

    ctx->pc = 0x207228u;

    // 0x207228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20722c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20722cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207230: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x207230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x207234: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x207234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x207238: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x207238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20723c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20723cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x207240: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x207240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x207244: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x207244u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x207248: 0x50600040  beql        $v1, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x207248u;
    {
        const bool branch_taken_0x207248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x207248) {
            ctx->pc = 0x20724Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207248u;
            // 0x20724c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20734Cu;
            goto label_20734c;
        }
    }
    ctx->pc = 0x207250u;
    // 0x207250: 0xc08153c  jal         func_2054F0
    ctx->pc = 0x207250u;
    SET_GPR_U32(ctx, 31, 0x207258u);
    ctx->pc = 0x207254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207250u;
    // 0x207254: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2054F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2054F0u, 0x207250u, 0x207258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207258u;
label_207258:
    // 0x207258: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x207258u;
    {
        const bool branch_taken_0x207258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207258) {
            ctx->pc = 0x20725Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207258u;
            // 0x20725c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20734Cu;
            goto label_20734c;
        }
    }
    ctx->pc = 0x207260u;
    // 0x207260: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x207260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x207264: 0x58400039  blezl       $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x207264u;
    {
        const bool branch_taken_0x207264 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x207264) {
            ctx->pc = 0x207268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207264u;
            // 0x207268: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20734Cu;
            goto label_20734c;
        }
    }
    ctx->pc = 0x20726Cu;
    // 0x20726c: 0xc081584  jal         func_205610
    ctx->pc = 0x20726Cu;
    SET_GPR_U32(ctx, 31, 0x207274u);
    ctx->pc = 0x207270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20726Cu;
    // 0x207270: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205610u, 0x20726Cu, 0x207274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207274u;
label_207274:
    // 0x207274: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x207274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20727c: 0x3c080058  lui         $t0, 0x58
    ctx->pc = 0x20727cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)88 << 16));
    // 0x207280: 0x3c07004c  lui         $a3, 0x4C
    ctx->pc = 0x207280u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)76 << 16));
    // 0x207284: 0x0  nop
    ctx->pc = 0x207284u;
    // NOP
label_207288:
    // 0x207288: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x207288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x20728c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x20728cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x207290: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x207290u;
    {
        const bool branch_taken_0x207290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207290u;
        // 0x207294: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207290) {
            ctx->pc = 0x2072D4u;
            goto label_2072d4;
        }
    }
    ctx->pc = 0x207298u;
    // 0x207298: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x207298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x20729c: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x20729cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2072a0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2072a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2072a4: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x2072a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2072a8: 0x5060fff7  beql        $v1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2072A8u;
    {
        const bool branch_taken_0x2072a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2072a8) {
            ctx->pc = 0x2072ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2072A8u;
            // 0x2072ac: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207288;
        }
    }
    ctx->pc = 0x2072B0u;
    // 0x2072b0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2072b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2072b4: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2072b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2072b8: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x2072B8u;
    {
        const bool branch_taken_0x2072b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2072b8) {
            ctx->pc = 0x2072BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2072B8u;
            // 0x2072bc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207288;
        }
    }
    ctx->pc = 0x2072C0u;
    // 0x2072c0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2072c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2072c4: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2072c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2072c8: 0x5040ffef  beql        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2072C8u;
    {
        const bool branch_taken_0x2072c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2072c8) {
            ctx->pc = 0x2072CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2072C8u;
            // 0x2072cc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207288;
        }
    }
    ctx->pc = 0x2072D0u;
    // 0x2072d0: 0xae050074  sw          $a1, 0x74($s0)
    ctx->pc = 0x2072d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 5));
label_2072d4:
    // 0x2072d4: 0x24e32508  addiu       $v1, $a3, 0x2508
    ctx->pc = 0x2072d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 9480));
    // 0x2072d8: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x2072d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x2072dc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2072DCu;
    {
        const bool branch_taken_0x2072dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2072E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072DCu;
        // 0x2072e0: 0x251178e0  addiu       $s1, $t0, 0x78E0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 30944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072dc) {
            ctx->pc = 0x207334u;
            goto label_207334;
        }
    }
    ctx->pc = 0x2072E4u;
    // 0x2072e4: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x2072e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2072e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2072e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2072ec: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2072ECu;
    {
        const bool branch_taken_0x2072ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2072F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072ECu;
        // 0x2072f0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072ec) {
            ctx->pc = 0x207334u;
            goto label_207334;
        }
    }
    ctx->pc = 0x2072F4u;
    // 0x2072f4: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x2072f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2072f8: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2072f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2072fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2072fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207300: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x207300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x207304: 0x24844ed8  addiu       $a0, $a0, 0x4ED8
    ctx->pc = 0x207304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20184));
    // 0x207308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20730c: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x20730Cu;
    SET_GPR_U32(ctx, 31, 0x207314u);
    ctx->pc = 0x207310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20730Cu;
    // 0x207310: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x20730Cu, 0x207314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207314u;
label_207314:
    // 0x207314: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x207314u;
    {
        const bool branch_taken_0x207314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x207318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207314u;
        // 0x207318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207314) {
            ctx->pc = 0x207348u;
            goto label_207348;
        }
    }
    ctx->pc = 0x20731Cu;
    // 0x20731c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20731cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x207320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207324: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x207324u;
    SET_GPR_U32(ctx, 31, 0x20732Cu);
    ctx->pc = 0x207328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207324u;
    // 0x207328: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x207324u, 0x20732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20732Cu;
label_20732c:
    // 0x20732c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20732Cu;
    {
        const bool branch_taken_0x20732c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20732Cu;
        // 0x207330: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20732c) {
            ctx->pc = 0x20734Cu;
            goto label_20734c;
        }
    }
    ctx->pc = 0x207334u;
label_207334:
    // 0x207334: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x207334u;
    {
        const bool branch_taken_0x207334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x207338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207334u;
        // 0x207338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207334) {
            ctx->pc = 0x207348u;
            goto label_207348;
        }
    }
    ctx->pc = 0x20733Cu;
    // 0x20733c: 0xae206394  sw          $zero, 0x6394($s1)
    ctx->pc = 0x20733cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 25492), GPR_U32(ctx, 0));
    // 0x207340: 0xc0b7082  jal         func_2DC208
    ctx->pc = 0x207340u;
    SET_GPR_U32(ctx, 31, 0x207348u);
    ctx->pc = 0x207344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207340u;
    // 0x207344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC208u, 0x207340u, 0x207348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207348u;
label_207348:
    // 0x207348: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20734c:
    // 0x20734c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20734cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x207350: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x207350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207354: 0x3e00008  jr          $ra
    ctx->pc = 0x207354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207354u;
        // 0x207358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20735Cu;
    // 0x20735c: 0x0  nop
    ctx->pc = 0x20735cu;
    // NOP
    ctx->pc = 0x207360u;
}
