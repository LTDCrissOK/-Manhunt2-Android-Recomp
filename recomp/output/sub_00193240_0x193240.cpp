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

// Function: sub_00193240
// Address: 0x193240 - 0x1933f8
void sub_00193240_0x193240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193240_0x193240");
#endif

    switch (ctx->pc) {
        case 0x1932d8u: goto label_1932d8;
        case 0x193380u: goto label_193380;
        case 0x1933d8u: goto label_1933d8;
        default: break;
    }

    ctx->pc = 0x193240u;

    // 0x193240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193244: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x193244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x193248: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x193248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x19324c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19324cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193250: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x193250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x193254: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x193254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x193258: 0x8e030ff8  lw          $v1, 0xFF8($s0)
    ctx->pc = 0x193258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
    // 0x19325c: 0x8c620110  lw          $v0, 0x110($v1)
    ctx->pc = 0x19325cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x193260: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x193260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x193264: 0x1044005e  beq         $v0, $a0, . + 4 + (0x5E << 2)
    ctx->pc = 0x193264u;
    {
        const bool branch_taken_0x193264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x193268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193264u;
        // 0x193268: 0x24710110  addiu       $s1, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193264) {
            ctx->pc = 0x1933E0u;
            goto label_1933e0;
        }
    }
    ctx->pc = 0x19326Cu;
    // 0x19326c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x19326cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x193270: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x193270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x193274: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x193274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x193278: 0x1043005a  beq         $v0, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x193278u;
    {
        const bool branch_taken_0x193278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193278u;
        // 0x19327c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193278) {
            ctx->pc = 0x1933E4u;
            goto label_1933e4;
        }
    }
    ctx->pc = 0x193280u;
    // 0x193280: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x193280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x193284: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x193284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x193288: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x193288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x19328c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x19328cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x193290: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x193290u;
    {
        const bool branch_taken_0x193290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193290u;
        // 0x193294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193290) {
            ctx->pc = 0x1933E4u;
            goto label_1933e4;
        }
    }
    ctx->pc = 0x193298u;
    // 0x193298: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x193298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x19329c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x19329cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1932a0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1932A0u;
    {
        const bool branch_taken_0x1932a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1932A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1932A0u;
        // 0x1932a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1932a0) {
            ctx->pc = 0x1932C4u;
            goto label_1932c4;
        }
    }
    ctx->pc = 0x1932A8u;
    // 0x1932a8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1932a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1932ac: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1932ACu;
    {
        const bool branch_taken_0x1932ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1932B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1932ACu;
        // 0x1932b0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1932ac) {
            ctx->pc = 0x1932C4u;
            goto label_1932c4;
        }
    }
    ctx->pc = 0x1932B4u;
    // 0x1932b4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1932B4u;
    {
        const bool branch_taken_0x1932b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1932B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1932B4u;
        // 0x1932b8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1932b4) {
            ctx->pc = 0x1932C4u;
            goto label_1932c4;
        }
    }
    ctx->pc = 0x1932BCu;
    // 0x1932bc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1932BCu;
    {
        const bool branch_taken_0x1932bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1932bc) {
            ctx->pc = 0x1932C8u;
            goto label_1932c8;
        }
    }
    ctx->pc = 0x1932C4u;
label_1932c4:
    // 0x1932c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1932c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1932c8:
    // 0x1932c8: 0x14800046  bnez        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1932C8u;
    {
        const bool branch_taken_0x1932c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1932CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1932C8u;
        // 0x1932cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1932c8) {
            ctx->pc = 0x1933E4u;
            goto label_1933e4;
        }
    }
    ctx->pc = 0x1932D0u;
    // 0x1932d0: 0xc06d358  jal         func_1B4D60
    ctx->pc = 0x1932D0u;
    SET_GPR_U32(ctx, 31, 0x1932D8u);
    ctx->pc = 0x1932D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1932D0u;
    // 0x1932d4: 0x8e040ff0  lw          $a0, 0xFF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D60u, 0x1932D0u, 0x1932D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1932D8u;
label_1932d8:
    // 0x1932d8: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1932D8u;
    {
        const bool branch_taken_0x1932d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1932DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1932D8u;
        // 0x1932dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1932d8) {
            ctx->pc = 0x1933E4u;
            goto label_1933e4;
        }
    }
    ctx->pc = 0x1932E0u;
    // 0x1932e0: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x1932e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1932e4: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1932e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1932e8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1932e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1932ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1932ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1932f0: 0x0  nop
    ctx->pc = 0x1932f0u;
    // NOP
    // 0x1932f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1932f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1932f8: 0x0  nop
    ctx->pc = 0x1932f8u;
    // NOP
    // 0x1932fc: 0x4503003a  bc1tl       . + 4 + (0x3A << 2)
    ctx->pc = 0x1932FCu;
    {
        const bool branch_taken_0x1932fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1932fc) {
            ctx->pc = 0x193300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1932FCu;
            // 0x193300: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1933E8u;
            goto label_1933e8;
        }
    }
    ctx->pc = 0x193304u;
    // 0x193304: 0x8e050ff4  lw          $a1, 0xFF4($s0)
    ctx->pc = 0x193304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4084)));
    // 0x193308: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x193308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x19330c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x19330cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x193310: 0x8e04106c  lw          $a0, 0x106C($s0)
    ctx->pc = 0x193310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4204)));
    // 0x193314: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x193314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x193318: 0x2463bdc0  addiu       $v1, $v1, -0x4240
    ctx->pc = 0x193318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950336));
    // 0x19331c: 0x2c840003  sltiu       $a0, $a0, 0x3
    ctx->pc = 0x19331cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x193320: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x193320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x193324: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x193324u;
    {
        const bool branch_taken_0x193324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x193328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193324u;
        // 0x193328: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193324) {
            ctx->pc = 0x193340u;
            goto label_193340;
        }
    }
    ctx->pc = 0x19332Cu;
    // 0x19332c: 0x8e031004  lw          $v1, 0x1004($s0)
    ctx->pc = 0x19332cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
    // 0x193330: 0x8c62106c  lw          $v0, 0x106C($v1)
    ctx->pc = 0x193330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4204)));
    // 0x193334: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x193334u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x193338: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x193338u;
    {
        const bool branch_taken_0x193338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193338u;
        // 0x19333c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193338) {
            ctx->pc = 0x1933E4u;
            goto label_1933e4;
        }
    }
    ctx->pc = 0x193340u;
label_193340:
    // 0x193340: 0x8e030ff8  lw          $v1, 0xFF8($s0)
    ctx->pc = 0x193340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
    // 0x193344: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x193344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x193348: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x193348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19334c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19334Cu;
    {
        const bool branch_taken_0x19334c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19334Cu;
        // 0x193350: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19334c) {
            ctx->pc = 0x19336Cu;
            goto label_19336c;
        }
    }
    ctx->pc = 0x193354u;
    // 0x193354: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x193354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x193358: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x193358u;
    {
        const bool branch_taken_0x193358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193358) {
            ctx->pc = 0x19335Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193358u;
            // 0x19335c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193370u;
            goto label_193370;
        }
    }
    ctx->pc = 0x193360u;
    // 0x193360: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x193360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x193364: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x193364u;
    {
        const bool branch_taken_0x193364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193364) {
            ctx->pc = 0x193370u;
            goto label_193370;
        }
    }
    ctx->pc = 0x19336Cu;
label_19336c:
    // 0x19336c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19336cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_193370:
    // 0x193370: 0x1480001c  bnez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x193370u;
    {
        const bool branch_taken_0x193370 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x193374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193370u;
        // 0x193374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193370) {
            ctx->pc = 0x1933E4u;
            goto label_1933e4;
        }
    }
    ctx->pc = 0x193378u;
    // 0x193378: 0xc06043e  jal         func_1810F8
    ctx->pc = 0x193378u;
    SET_GPR_U32(ctx, 31, 0x193380u);
    ctx->pc = 0x19337Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193378u;
    // 0x19337c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1810F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1810F8u, 0x193378u, 0x193380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193380u;
label_193380:
    // 0x193380: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x193380u;
    {
        const bool branch_taken_0x193380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193380u;
        // 0x193384: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193380) {
            ctx->pc = 0x1933E0u;
            goto label_1933e0;
        }
    }
    ctx->pc = 0x193388u;
    // 0x193388: 0x8e030ff8  lw          $v1, 0xFF8($s0)
    ctx->pc = 0x193388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
    // 0x19338c: 0x3c01c00c  lui         $at, 0xC00C
    ctx->pc = 0x19338cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49164 << 16));
    // 0x193390: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x193390u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x193394: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x193394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193398: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x193398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19339c: 0x24620150  addiu       $v0, $v1, 0x150
    ctx->pc = 0x19339cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x1933a0: 0xc4620150  lwc1        $f2, 0x150($v1)
    ctx->pc = 0x1933a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1933a4: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x1933a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1933a8: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x1933a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1933ac: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1933acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1933b0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1933b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1933b4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1933b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1933b8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1933b8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1933bc: 0x8e040ffc  lw          $a0, 0xFFC($s0)
    ctx->pc = 0x1933bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4092)));
    // 0x1933c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1933c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1933c4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1933c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1933c8: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1933c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1933cc: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x1933ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1933d0: 0xc0725e0  jal         func_1C9780
    ctx->pc = 0x1933D0u;
    SET_GPR_U32(ctx, 31, 0x1933D8u);
    ctx->pc = 0x1933D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1933D0u;
    // 0x1933d4: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9780u, 0x1933D0u, 0x1933D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1933D8u;
label_1933d8:
    // 0x1933d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1933D8u;
    {
        const bool branch_taken_0x1933d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1933DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1933D8u;
        // 0x1933dc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1933d8) {
            ctx->pc = 0x1933E4u;
            goto label_1933e4;
        }
    }
    ctx->pc = 0x1933E0u;
label_1933e0:
    // 0x1933e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1933e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1933e4:
    // 0x1933e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1933e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1933e8:
    // 0x1933e8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1933e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1933ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1933ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1933f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1933F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1933F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1933F0u;
        // 0x1933f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1933F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1933F8u;
}
