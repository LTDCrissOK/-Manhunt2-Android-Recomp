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

// Function: sub_001561E0
// Address: 0x1561e0 - 0x156350
void sub_001561E0_0x1561e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001561E0_0x1561e0");
#endif

    switch (ctx->pc) {
        case 0x156200u: goto label_156200;
        case 0x156278u: goto label_156278;
        case 0x156288u: goto label_156288;
        case 0x1562d8u: goto label_1562d8;
        case 0x156314u: goto label_156314;
        case 0x156338u: goto label_156338;
        default: break;
    }

    ctx->pc = 0x1561e0u;

    // 0x1561e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1561e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1561e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1561e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1561e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1561e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1561ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1561ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1561f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1561f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1561f4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1561f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1561f8: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x1561F8u;
    SET_GPR_U32(ctx, 31, 0x156200u);
    ctx->pc = 0x1561FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1561F8u;
    // 0x1561fc: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x1561F8u, 0x156200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156200u;
label_156200:
    // 0x156200: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x156200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156204: 0x5443004d  bnel        $v0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x156204u;
    {
        const bool branch_taken_0x156204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x156204) {
            ctx->pc = 0x156208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156204u;
            // 0x156208: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15633Cu;
            goto label_15633c;
        }
    }
    ctx->pc = 0x15620Cu;
    // 0x15620c: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x15620cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x156210: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x156210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x156214: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x156214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15621c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15621cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156220: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x156220u;
    {
        const bool branch_taken_0x156220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x156224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156220u;
        // 0x156224: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156220) {
            ctx->pc = 0x156338u;
            goto label_156338;
        }
    }
    ctx->pc = 0x156228u;
    // 0x156228: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x156228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15622c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15622cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156230: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x156230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x156234: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156238: 0x8c51020c  lw          $s1, 0x20C($v0)
    ctx->pc = 0x156238u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x15623c: 0x5220003f  beql        $s1, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x15623Cu;
    {
        const bool branch_taken_0x15623c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15623c) {
            ctx->pc = 0x156240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15623Cu;
            // 0x156240: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15633Cu;
            goto label_15633c;
        }
    }
    ctx->pc = 0x156244u;
    // 0x156244: 0x8e030520  lw          $v1, 0x520($s0)
    ctx->pc = 0x156244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1312)));
    // 0x156248: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x156248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x15624c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15624Cu;
    {
        const bool branch_taken_0x15624c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15624Cu;
        // 0x156250: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15624c) {
            ctx->pc = 0x156290u;
            goto label_156290;
        }
    }
    ctx->pc = 0x156254u;
    // 0x156254: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x156254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x156258: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x156258u;
    {
        const bool branch_taken_0x156258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156258u;
        // 0x15625c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156258) {
            ctx->pc = 0x156280u;
            goto label_156280;
        }
    }
    ctx->pc = 0x156260u;
    // 0x156260: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x156260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x156264: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x156264u;
    {
        const bool branch_taken_0x156264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x156268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156264u;
        // 0x156268: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156264) {
            ctx->pc = 0x156290u;
            goto label_156290;
        }
    }
    ctx->pc = 0x15626Cu;
    // 0x15626c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15626cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156270: 0xc055bd8  jal         func_156F60
    ctx->pc = 0x156270u;
    SET_GPR_U32(ctx, 31, 0x156278u);
    ctx->pc = 0x156274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156270u;
    // 0x156274: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156F60u, 0x156270u, 0x156278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156278u;
label_156278:
    // 0x156278: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x156278u;
    {
        const bool branch_taken_0x156278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156278u;
        // 0x15627c: 0x8e030520  lw          $v1, 0x520($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156278) {
            ctx->pc = 0x15628Cu;
            goto label_15628c;
        }
    }
    ctx->pc = 0x156280u;
label_156280:
    // 0x156280: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x156280u;
    SET_GPR_U32(ctx, 31, 0x156288u);
    ctx->pc = 0x156284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156280u;
    // 0x156284: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x156280u, 0x156288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156288u;
label_156288:
    // 0x156288: 0x8e030520  lw          $v1, 0x520($s0)
    ctx->pc = 0x156288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1312)));
label_15628c:
    // 0x15628c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15628cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_156290:
    // 0x156290: 0x5462002a  bnel        $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x156290u;
    {
        const bool branch_taken_0x156290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x156290) {
            ctx->pc = 0x156294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156290u;
            // 0x156294: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15633Cu;
            goto label_15633c;
        }
    }
    ctx->pc = 0x156298u;
    // 0x156298: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x156298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15629c: 0x26439a08  addiu       $v1, $s2, -0x65F8
    ctx->pc = 0x15629cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941192));
    // 0x1562a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1562a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1562a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1562a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1562a8: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x1562a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x1562ac: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1562ACu;
    {
        const bool branch_taken_0x1562ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1562ac) {
            ctx->pc = 0x1562B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1562ACu;
            // 0x1562b0: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1562BCu;
            goto label_1562bc;
        }
    }
    ctx->pc = 0x1562B4u;
    // 0x1562b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1562B4u;
    {
        const bool branch_taken_0x1562b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1562B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1562B4u;
        // 0x1562b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1562b4) {
            ctx->pc = 0x1562C4u;
            goto label_1562c4;
        }
    }
    ctx->pc = 0x1562BCu;
label_1562bc:
    // 0x1562bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1562bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1562c0: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x1562c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1562c4:
    // 0x1562c4: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1562C4u;
    {
        const bool branch_taken_0x1562c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1562C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1562C4u;
        // 0x1562c8: 0x26120530  addiu       $s2, $s0, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1562c4) {
            ctx->pc = 0x156338u;
            goto label_156338;
        }
    }
    ctx->pc = 0x1562CCu;
    // 0x1562cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1562ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1562d0: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1562D0u;
    SET_GPR_U32(ctx, 31, 0x1562D8u);
    ctx->pc = 0x1562D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1562D0u;
    // 0x1562d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1562D0u, 0x1562D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1562D8u;
label_1562d8:
    // 0x1562d8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1562d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1562dc: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1562dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1562e0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1562e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1562e4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1562e4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1562e8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1562e8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1562ec: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1562ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1562f0: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x1562f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x1562f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1562f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1562f8: 0x0  nop
    ctx->pc = 0x1562f8u;
    // NOP
    // 0x1562fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1562fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156300: 0x0  nop
    ctx->pc = 0x156300u;
    // NOP
    // 0x156304: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x156304u;
    {
        const bool branch_taken_0x156304 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x156304) {
            ctx->pc = 0x156308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156304u;
            // 0x156308: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15633Cu;
            goto label_15633c;
        }
    }
    ctx->pc = 0x15630Cu;
    // 0x15630c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x15630Cu;
    SET_GPR_U32(ctx, 31, 0x156314u);
    ctx->pc = 0x156310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15630Cu;
    // 0x156310: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x15630Cu, 0x156314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156314u;
label_156314:
    // 0x156314: 0x8e020544  lw          $v0, 0x544($s0)
    ctx->pc = 0x156314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1348)));
    // 0x156318: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x156318u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15631c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x15631cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156320: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x156320u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x156324: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x156324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x156328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15632c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15632cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156330: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x156330u;
    SET_GPR_U32(ctx, 31, 0x156338u);
    ctx->pc = 0x156334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156330u;
    // 0x156334: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EC60u, 0x156330u, 0x156338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156338u;
label_156338:
    // 0x156338: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x156338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15633c:
    // 0x15633c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15633cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x156340: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x156340u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156344: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x156344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x156348: 0x3e00008  jr          $ra
    ctx->pc = 0x156348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156348u;
        // 0x15634c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156350u;
}
