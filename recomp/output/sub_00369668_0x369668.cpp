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

// Function: sub_00369668
// Address: 0x369668 - 0x3698b8
void sub_00369668_0x369668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369668_0x369668");
#endif

    switch (ctx->pc) {
        case 0x369730u: goto label_369730;
        case 0x3697a0u: goto label_3697a0;
        case 0x3697b8u: goto label_3697b8;
        case 0x3697c8u: goto label_3697c8;
        case 0x3697e8u: goto label_3697e8;
        case 0x369858u: goto label_369858;
        case 0x369870u: goto label_369870;
        case 0x369880u: goto label_369880;
        default: break;
    }

    ctx->pc = 0x369668u;

    // 0x369668: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x369668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36966c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x36966cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x369670: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x369670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x369674: 0x2465ca60  addiu       $a1, $v1, -0x35A0
    ctx->pc = 0x369674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953568));
    // 0x369678: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x369678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x36967c: 0x3c04aaaa  lui         $a0, 0xAAAA
    ctx->pc = 0x36967cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43690 << 16));
    // 0x369680: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x369680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x369684: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x369684u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369688: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x369688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36968c: 0x3484aaab  ori         $a0, $a0, 0xAAAB
    ctx->pc = 0x36968cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
    // 0x369690: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x369690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x369694: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x369694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x369698: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x369698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x36969c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x36969cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3696a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3696a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3696a4: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x3696a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BCA78u));
    // 0x3696a8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x3696a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BCA74u));
    // 0x3696ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3696acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3696b0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3696b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3696b4: 0x298c3  sra         $s3, $v0, 3
    ctx->pc = 0x3696b4u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3696b8: 0x12600071  beqz        $s3, . + 4 + (0x71 << 2)
    ctx->pc = 0x3696B8u;
    {
        const bool branch_taken_0x3696b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3696BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3696B8u;
        // 0x3696bc: 0x2e620009  sltiu       $v0, $s3, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3696b8) {
            ctx->pc = 0x369880u;
            goto label_369880;
        }
    }
    ctx->pc = 0x3696C0u;
    // 0x3696c0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3696C0u;
    {
        const bool branch_taken_0x3696c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3696c0) {
            ctx->pc = 0x3696C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3696C0u;
            // 0x3696c4: 0x8ca3002c  lw          $v1, 0x2C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3696D8u;
            goto label_3696d8;
        }
    }
    ctx->pc = 0x3696C8u;
    // 0x3696c8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3696c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3696cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3696ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3696d0: 0xa062cbb8  sb          $v0, -0x3448($v1)
    ctx->pc = 0x3696d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FCBB8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FCBB8u, _value); } while (0);
    // 0x3696d4: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x3696d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_3696d8:
    // 0x3696d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3696d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3696dc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3696DCu;
    {
        const bool branch_taken_0x3696dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3696E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3696DCu;
        // 0x3696e0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3696dc) {
            ctx->pc = 0x369700u;
            goto label_369700;
        }
    }
    ctx->pc = 0x3696E4u;
    // 0x3696e4: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x3696E4u;
    {
        const bool branch_taken_0x3696e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3696E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3696E4u;
        // 0x3696e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3696e4) {
            ctx->pc = 0x36988Cu;
            goto label_36988c;
        }
    }
    ctx->pc = 0x3696ECu;
    // 0x3696ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3696ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3696f0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3696F0u;
    {
        const bool branch_taken_0x3696f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3696F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3696F0u;
        // 0x3696f4: 0x24150005  addiu       $s5, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3696f0) {
            ctx->pc = 0x369704u;
            goto label_369704;
        }
    }
    ctx->pc = 0x3696F8u;
    // 0x3696f8: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x3696F8u;
    {
        const bool branch_taken_0x3696f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3696FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3696F8u;
        // 0x3696fc: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3696f8) {
            ctx->pc = 0x369890u;
            goto label_369890;
        }
    }
    ctx->pc = 0x369700u;
label_369700:
    // 0x369700: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x369700u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_369704:
    // 0x369704: 0x26e3ca60  addiu       $v1, $s7, -0x35A0
    ctx->pc = 0x369704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294953568));
    // 0x369708: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x369708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x36970c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x36970Cu;
    {
        const bool branch_taken_0x36970c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36970Cu;
        // 0x369710: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36970c) {
            ctx->pc = 0x3697D0u;
            goto label_3697d0;
        }
    }
    ctx->pc = 0x369714u;
    // 0x369714: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x369714u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x369718: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x369718u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36971c: 0x24511ff0  addiu       $s1, $v0, 0x1FF0
    ctx->pc = 0x36971cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8176));
    // 0x369720: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
    ctx->pc = 0x369720u;
    {
        const bool branch_taken_0x369720 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x369724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369720u;
        // 0x369724: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369720) {
            ctx->pc = 0x3697B0u;
            goto label_3697b0;
        }
    }
    ctx->pc = 0x369728u;
    // 0x369728: 0x8c740010  lw          $s4, 0x10($v1)
    ctx->pc = 0x369728u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x36972c: 0x0  nop
    ctx->pc = 0x36972cu;
    // NOP
label_369730:
    // 0x369730: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x369730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369734: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x369734u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x369738: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x369738u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x36973c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x36973cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x369740: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x369740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369744: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x369744u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x369748: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x369748u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x36974c: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x36974cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x369750: 0x92030014  lbu         $v1, 0x14($s0)
    ctx->pc = 0x369750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x369754: 0x92020015  lbu         $v0, 0x15($s0)
    ctx->pc = 0x369754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x369758: 0x92040016  lbu         $a0, 0x16($s0)
    ctx->pc = 0x369758u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x36975c: 0x92050017  lbu         $a1, 0x17($s0)
    ctx->pc = 0x36975cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x369760: 0xa2230004  sb          $v1, 0x4($s1)
    ctx->pc = 0x369760u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x369764: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x369764u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x369768: 0xa2240006  sb          $a0, 0x6($s1)
    ctx->pc = 0x369768u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x36976c: 0xa2250007  sb          $a1, 0x7($s1)
    ctx->pc = 0x36976cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 5));
    // 0x369770: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x369770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369774: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x369774u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x369778: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x369778u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x36977c: 0xa6220008  sh          $v0, 0x8($s1)
    ctx->pc = 0x36977cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x369780: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x369780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369784: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x369784u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x369788: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x369788u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x36978c: 0xa622000a  sh          $v0, 0xA($s1)
    ctx->pc = 0x36978cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x369790: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x369790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x369794: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x369794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x369798: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x369798u;
    SET_GPR_U32(ctx, 31, 0x3697A0u);
    ctx->pc = 0x36979Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369798u;
    // 0x36979c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x369798u, 0x3697A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3697A0u;
label_3697a0:
    // 0x3697a0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x3697a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x3697a4: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x3697a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3697a8: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3697A8u;
    {
        const bool branch_taken_0x3697a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3697ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3697A8u;
        // 0x3697ac: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3697a8) {
            ctx->pc = 0x369730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369730;
        }
    }
    ctx->pc = 0x3697B0u;
label_3697b0:
    // 0x3697b0: 0xc0db386  jal         func_36CE18
    ctx->pc = 0x3697B0u;
    SET_GPR_U32(ctx, 31, 0x3697B8u);
    ctx->pc = 0x3697B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3697B0u;
    // 0x3697b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CE18u, 0x3697B0u, 0x3697B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3697B8u;
label_3697b8:
    // 0x3697b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3697b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3697bc: 0x26c51ff0  addiu       $a1, $s6, 0x1FF0
    ctx->pc = 0x3697bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 8176));
    // 0x3697c0: 0xc0db790  jal         func_36DE40
    ctx->pc = 0x3697C0u;
    SET_GPR_U32(ctx, 31, 0x3697C8u);
    ctx->pc = 0x3697C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3697C0u;
    // 0x3697c4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DE40u, 0x3697C0u, 0x3697C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3697C8u;
label_3697c8:
    // 0x3697c8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3697C8u;
    {
        const bool branch_taken_0x3697c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3697CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3697C8u;
        // 0x3697cc: 0x26e2ca60  addiu       $v0, $s7, -0x35A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294953568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3697c8) {
            ctx->pc = 0x369884u;
            goto label_369884;
        }
    }
    ctx->pc = 0x3697D0u;
label_3697d0:
    // 0x3697d0: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x3697d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3697d4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3697d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3697d8: 0x24511ff0  addiu       $s1, $v0, 0x1FF0
    ctx->pc = 0x3697d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8176));
    // 0x3697dc: 0x12600022  beqz        $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x3697DCu;
    {
        const bool branch_taken_0x3697dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3697E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3697DCu;
        // 0x3697e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3697dc) {
            ctx->pc = 0x369868u;
            goto label_369868;
        }
    }
    ctx->pc = 0x3697E4u;
    // 0x3697e4: 0x8c740010  lw          $s4, 0x10($v1)
    ctx->pc = 0x3697e4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3697e8:
    // 0x3697e8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3697e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3697ec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3697ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3697f0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3697f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3697f4: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x3697f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3697f8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3697f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3697fc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3697fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x369800: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x369800u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x369804: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x369804u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x369808: 0x92030014  lbu         $v1, 0x14($s0)
    ctx->pc = 0x369808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x36980c: 0x92020015  lbu         $v0, 0x15($s0)
    ctx->pc = 0x36980cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x369810: 0x92040016  lbu         $a0, 0x16($s0)
    ctx->pc = 0x369810u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x369814: 0x92050017  lbu         $a1, 0x17($s0)
    ctx->pc = 0x369814u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x369818: 0xa2230004  sb          $v1, 0x4($s1)
    ctx->pc = 0x369818u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x36981c: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x36981cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x369820: 0xa2240006  sb          $a0, 0x6($s1)
    ctx->pc = 0x369820u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x369824: 0xa2250007  sb          $a1, 0x7($s1)
    ctx->pc = 0x369824u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 5));
    // 0x369828: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x369828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36982c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36982cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x369830: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x369830u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x369834: 0xa6220008  sh          $v0, 0x8($s1)
    ctx->pc = 0x369834u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x369838: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x369838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36983c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36983cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x369840: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x369840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x369844: 0xa622000a  sh          $v0, 0xA($s1)
    ctx->pc = 0x369844u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x369848: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x369848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36984c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x36984cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x369850: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x369850u;
    SET_GPR_U32(ctx, 31, 0x369858u);
    ctx->pc = 0x369854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369850u;
    // 0x369854: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x369850u, 0x369858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369858u;
label_369858:
    // 0x369858: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x369858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x36985c: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x36985cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x369860: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x369860u;
    {
        const bool branch_taken_0x369860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x369864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369860u;
        // 0x369864: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369860) {
            ctx->pc = 0x3697E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3697e8;
        }
    }
    ctx->pc = 0x369868u;
label_369868:
    // 0x369868: 0xc0db386  jal         func_36CE18
    ctx->pc = 0x369868u;
    SET_GPR_U32(ctx, 31, 0x369870u);
    ctx->pc = 0x36986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369868u;
    // 0x36986c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CE18u, 0x369868u, 0x369870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369870u;
label_369870:
    // 0x369870: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x369870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369874: 0x26c51ff0  addiu       $a1, $s6, 0x1FF0
    ctx->pc = 0x369874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 8176));
    // 0x369878: 0xc0db790  jal         func_36DE40
    ctx->pc = 0x369878u;
    SET_GPR_U32(ctx, 31, 0x369880u);
    ctx->pc = 0x36987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369878u;
    // 0x36987c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DE40u, 0x369878u, 0x369880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369880u;
label_369880:
    // 0x369880: 0x26e2ca60  addiu       $v0, $s7, -0x35A0
    ctx->pc = 0x369880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294953568));
label_369884:
    // 0x369884: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x369884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x369888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36988c:
    // 0x36988c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36988cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_369890:
    // 0x369890: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x369890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369894: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x369894u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x369898: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x369898u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36989c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x36989cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3698a0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3698a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3698a4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x3698a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3698a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3698a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3698ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3698ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3698B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3698ACu;
        // 0x3698b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3698ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3698B4u;
    // 0x3698b4: 0x0  nop
    ctx->pc = 0x3698b4u;
    // NOP
    ctx->pc = 0x3698b8u;
}
